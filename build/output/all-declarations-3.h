#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_generatedCodeMap final {

  public: DownEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inMap) ;

  public: ~ DownEnumerator_generatedCodeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;

  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_generatedCodeMap (const DownEnumerator_generatedCodeMap &) = delete ;
  private: DownEnumerator_generatedCodeMap & operator = (const DownEnumerator_generatedCodeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_generatedCodeMap final {
  public: UpEnumerator_generatedCodeMap (const class GGS_generatedCodeMap & inMap)  ;

  public: ~ UpEnumerator_generatedCodeMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_codeList current_mCode (LOCATION_ARGS) const ;
  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_generatedCodeMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_generatedCodeMap (const UpEnumerator_generatedCodeMap &) = delete ;
  private: UpEnumerator_generatedCodeMap & operator = (const UpEnumerator_generatedCodeMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_generatedCodeMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_generatedCodeMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_generatedCodeMap (void) ;

//--- Handle copy
  public: GGS_generatedCodeMap (const GGS_generatedCodeMap & inSource) ;
  public: GGS_generatedCodeMap & operator = (const GGS_generatedCodeMap & inSource) ;

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
  protected: void performInsert (const class GGS_generatedCodeMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_generatedCodeMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generatedCodeMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generatedCodeMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generatedCodeMap class_func_mapWithMapToOverride (const class GGS_generatedCodeMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_codeList constinArgument1,
                                 class GGS_ipic_31__38_SequentialInstruction constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMCodeForKey (class GGS_codeList constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionForKey (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_codeList & outArgument1,
                                 class GGS_ipic_31__38_SequentialInstruction & outArgument2,
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

  public: class GGS_codeList getter_mCodeForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_SequentialInstruction getter_mInstructionForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_generatedCodeMap getter_overriddenMap (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_generatedCodeMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_generatedCodeMap ;
  friend class DownEnumerator_generatedCodeMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generatedCodeMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_codeList mProperty_mCode ;
  public: inline GGS_codeList readProperty_mCode (void) const {
    return mProperty_mCode ;
  }

  public: GGS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;
  public: inline GGS_ipic_31__38_SequentialInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generatedCodeMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCode (const GGS_codeList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCode = inValue ;
  }

  public: inline void setter_setMInstruction (const GGS_ipic_31__38_SequentialInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generatedCodeMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_codeList & in_mCode,
                                           const GGS_ipic_31__38_SequentialInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_generatedCodeMap_2E_element (const GGS_generatedCodeMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generatedCodeMap_2E_element & operator = (const GGS_generatedCodeMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generatedCodeMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_codeList & inOperand1,
                                                                   const class GGS_ipic_31__38_SequentialInstruction & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generatedCodeMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: generatedCodeMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_generatedCodeMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_generatedCodeMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_generatedCodeMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_generatedCodeMap_2E_element_3F_ (const GGS_generatedCodeMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_generatedCodeMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_generatedCodeMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_generatedCodeMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x4string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_34_string (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@uint x6string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_x_36_string (const class GGS_uint & inObject,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_baselineRoutineMap final {

  public: DownEnumerator_baselineRoutineMap (const class GGS_baselineRoutineMap & inMap) ;

  public: ~ DownEnumerator_baselineRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;

  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;

  public: class GGS_baselineRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baselineRoutineMap (const DownEnumerator_baselineRoutineMap &) = delete ;
  private: DownEnumerator_baselineRoutineMap & operator = (const DownEnumerator_baselineRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baselineRoutineMap final {
  public: UpEnumerator_baselineRoutineMap (const class GGS_baselineRoutineMap & inMap)  ;

  public: ~ UpEnumerator_baselineRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GGS_luint current_mPage (LOCATION_ARGS) const ;
  public: class GGS_baselineRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baselineRoutineMap (const UpEnumerator_baselineRoutineMap &) = delete ;
  private: UpEnumerator_baselineRoutineMap & operator = (const UpEnumerator_baselineRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_baselineRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_baselineRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_baselineRoutineMap (void) ;

//--- Handle copy
  public: GGS_baselineRoutineMap (const GGS_baselineRoutineMap & inSource) ;
  public: GGS_baselineRoutineMap & operator = (const GGS_baselineRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_baselineRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineRoutineMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineRoutineMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineRoutineMap class_func_mapWithMapToOverride (const class GGS_baselineRoutineMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_bool constinArgument1,
                                 class GGS_luint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsNoReturnForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMPageForKey (class GGS_luint constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_bool & outArgument1,
                                 class GGS_luint & outArgument2,
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

  public: class GGS_luint getter_mPageForKey (const class GGS_string & constinOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_baselineRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_baselineRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baselineRoutineMap ;
  friend class DownEnumerator_baselineRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bool mProperty_mIsNoReturn ;
  public: inline GGS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GGS_luint mProperty_mPage ;
  public: inline GGS_luint readProperty_mPage (void) const {
    return mProperty_mPage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baselineRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMPage (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baselineRoutineMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_bool & in_mIsNoReturn,
                                             const GGS_luint & in_mPage) ;

//--------------------------------- Copy constructor
  public: GGS_baselineRoutineMap_2E_element (const GGS_baselineRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baselineRoutineMap_2E_element & operator = (const GGS_baselineRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineRoutineMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_luint & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineRoutineMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baselineRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baselineRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baselineRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baselineRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baselineRoutineMap_2E_element_3F_ (const GGS_baselineRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baselineRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baselineRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_baselineRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (class cPtr_baseline_5F_instruction * inObject,
                                                                               const class GGS_uint constin_inCurrentPage,
                                                                               const class GGS_baselineRoutineMap constin_inRoutineMap,
                                                                               const class GGS_registerTable constin_inRegisterTable,
                                                                               const class GGS_constantMap constin_inConstantMap,
                                                                               class GGS_uint & io_ioLocalLabelIndex,
                                                                               class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               class GGS_string & io_ioListFileContents,
                                                                               class GGS_bool & io_ioContinuesInSequence,
                                                                               const class GGS_routineKind constin_inRoutineKind,
                                                                               const class GGS_bool constin_inLastInstructionShouldReturn,
                                                                               class GGS_stringset & io_ioUsedRegisters,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_intermediate_5F_instructionList final {
  public: DownEnumerator_baseline_5F_intermediate_5F_instructionList (const class GGS_baseline_5F_intermediate_5F_instructionList & inList) ;

  public: ~ DownEnumerator_baseline_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_intermediate_5F_instructionList (const DownEnumerator_baseline_5F_intermediate_5F_instructionList &) = delete ;
  private: DownEnumerator_baseline_5F_intermediate_5F_instructionList & operator = (const DownEnumerator_baseline_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_intermediate_5F_instructionList final {
  public: UpEnumerator_baseline_5F_intermediate_5F_instructionList (const class GGS_baseline_5F_intermediate_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_baseline_5F_intermediate_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_baseline_5F_intermediate_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_baseline_5F_intermediate_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_intermediate_5F_instructionList (const UpEnumerator_baseline_5F_intermediate_5F_instructionList &) = delete ;
  private: UpEnumerator_baseline_5F_intermediate_5F_instructionList & operator = (const UpEnumerator_baseline_5F_intermediate_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @baseline_intermediate_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_baseline_5F_intermediate_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_baseline_5F_intermediate_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList &) = default ;
  public: GGS_baseline_5F_intermediate_5F_instructionList & operator = (const GGS_baseline_5F_intermediate_5F_instructionList &) = default ;

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
  public : inline GenericArray <GGS_baseline_5F_intermediate_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_baseline_5F_intermediate_5F_instructionList subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_baseline_5F_intermediate_5F_instructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instructionList init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instructionList extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_intermediate_5F_instructionList class_func_listWithValue (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_baseline_5F_intermediate_5F_instructionList add_operation (const GGS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_baseline_5F_intermediate_5F_instruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_intermediate_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_intermediate_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_intermediate_5F_instructionList ;
  friend class DownEnumerator_baseline_5F_intermediate_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (class cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const class GGS_uint constin_inCurrentPage,
                                                                             const class GGS_registerTable constin_inRegisterTable,
                                                                             const class GGS_constantMap constin_inConstantMap,
                                                                             class GGS_uint & io_ioLocalLabelIndex,
                                                                             const class GGS_bool constin_inComplementaryBranch,
                                                                             const class GGS_location constin_inInstructionLocation,
                                                                             const class GGS_string constin_inTargetLabel,
                                                                             class GGS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             class GGS_stringset & io_ioUsedRegisters,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_declaredRoutineMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_declaredRoutineMap final {

  public: DownEnumerator_midrange_5F_declaredRoutineMap (const class GGS_midrange_5F_declaredRoutineMap & inMap) ;

  public: ~ DownEnumerator_midrange_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_declaredRoutineMap (const DownEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
  private: DownEnumerator_midrange_5F_declaredRoutineMap & operator = (const DownEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_declaredRoutineMap final {
  public: UpEnumerator_midrange_5F_declaredRoutineMap (const class GGS_midrange_5F_declaredRoutineMap & inMap)  ;

  public: ~ UpEnumerator_midrange_5F_declaredRoutineMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_midrange_5F_declaredRoutineMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_declaredRoutineMap (const UpEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
  private: UpEnumerator_midrange_5F_declaredRoutineMap & operator = (const UpEnumerator_midrange_5F_declaredRoutineMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_midrange_5F_declaredRoutineMap (void) ;

//--- Handle copy
  public: GGS_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inSource) ;
  public: GGS_midrange_5F_declaredRoutineMap & operator = (const GGS_midrange_5F_declaredRoutineMap & inSource) ;

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
  protected: void performInsert (const class GGS_midrange_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_declaredRoutineMap class_func_mapWithMapToOverride (const class GGS_midrange_5F_declaredRoutineMap & inOperand0
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

  public: class GGS_midrange_5F_declaredRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_declaredRoutineMap ;
  friend class DownEnumerator_midrange_5F_declaredRoutineMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_declaredRoutineMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_declaredRoutineMap_2E_element & operator = (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: midrange_declaredRoutineMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_midrange_5F_declaredRoutineMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_midrange_5F_declaredRoutineMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum pic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_notEqual,
    enum_equal,
    enum_greaterOrEqual,
    enum_greater,
    enum_lowerOrEqual,
    enum_lower
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
  public: static GGS_pic_31__38_RegisterComparison extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparison class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greater (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lower (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_RegisterComparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreater (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLower (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch condition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_condition (const class GGS_conditional_5F_branch & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind assemblyCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_assemblyCode (const class GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
    enum_MOVWF,
    enum_MULWF,
    enum_NEGF,
    enum_SETF,
    enum_TSTFSZ
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
  public: static GGS_FA_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSETF (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_conditional_5F_branch & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@tableAccessOption mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_tableAccessOption & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
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
  public: GGS_midrange_5F_intermediate_5F_registerExpression (void) ;

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
  public: GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                              const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_intermediate_5F_registerExpression (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_intermediate_5F_registerExpression & operator = (const GGS_midrange_5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_registerExpression init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction bang_midrange_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_intermediate_5F_instruction mProperty_mInstruction ;
  public: inline GGS_midrange_5F_intermediate_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_midrange_5F_intermediate_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_intermediate_5F_instructionList_2E_element & operator = (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element init_21_ (const class GGS_midrange_5F_intermediate_5F_instruction & inOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_NULL (const class cPtr_midrange_5F_intermediate_5F_NULL * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_NULL init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_NULL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_NULL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_NULL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_NULL_init (Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_NULL (Compiler * inCompiler
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
// Phase 1: @midrange_5F_intermediate_5F_NULL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_NULL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_NULL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_NULL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_NULL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_NULL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_NULL bang_midrange_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_NULL unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_NULL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_NULL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_NULL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_NULL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mOrigin (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG init_21_ (const class GGS_uint & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_ORG_init_21_ (const class GGS_uint & inOperand0,
                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mOrigin ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG (const GGS_uint & in_mOrigin,
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
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG bang_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

  public: class GGS_bool readProperty_mIsDeletable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_bool & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_pseudo_5F_LABEL_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_bool & inOperand1,
                                                                         Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isLABELorORG
  public: virtual class GGS_bool getter_isLABELorORG (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_symbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_bool mProperty_mIsDeletable ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                            const GGS_bool & in_mIsDeletable,
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
// Phase 1: @midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL bang_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction : public GGS_midrange_5F_intermediate_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_actualInstruction (const class cPtr_midrange_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction init_21_ (const class GGS_location & inOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_actualInstruction : public cPtr_midrange_5F_intermediate_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_actualInstruction_init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method defineLabelAtAddress
  public: virtual void method_defineLabelAtAddress (class GGS_midrange_5F_symbolTableForConvertingRelatives & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterLabelAtAddress
  public: virtual void method_enterLabelAtAddress (class GGS_midrange_5F_symbolTable & arg_ioRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_actualInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak : public GGS_midrange_5F_intermediate_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_actualInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_actualInstruction bang_midrange_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_actualInstruction unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_actualInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_bool & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FD : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_bool & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD bang_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FD unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFinstruction (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                    const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_F : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                              const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFinstruction ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                             const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFinstruction,
                                                             const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F bang_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_F unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         const class GGS_uint & inOperand3,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_FB : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   const class GGS_uint & inOperand3,
                                                                                   Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                              const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                              const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB bang_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_FB unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_bool & inOperand1,
                                                                                                  const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GGS_uint & inOperand3,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_bool & inOperand1,
                                                                                            const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            const class GGS_uint & inOperand3,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeBitTestSkip
  public: virtual void method_optimizeBitTestSkip (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_bool & in_mSkipIfSet,
                                                                       const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip bang_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum midrange_5F_call_5F_goto_5F_bit
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_set,
    enum_clear,
    enum_noChange
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
  public: static GGS_midrange_5F_call_5F_goto_5F_bit extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_clear (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_noChange (LOCATION_ARGS) ;

  public: static class GGS_midrange_5F_call_5F_goto_5F_bit class_func_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isClear (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoChange (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSet (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JUMP (const class cPtr_midrange_5F_intermediate_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JUMP init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                            const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JUMP extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JUMP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                      const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeJUMP
  public: virtual void method_optimizeJUMP (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                 const GGS_lstring & in_mTargetLabel,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                 const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
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
// Phase 1: @midrange_5F_intermediate_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JUMP bang_midrange_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_JUMP unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_GOTO (const class cPtr_midrange_5F_intermediate_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_GOTO extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_GOTO : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeGOTO
  public: virtual void method_optimizeGOTO (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_GOTO bang_midrange_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_GOTO unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_CALL (const class cPtr_midrange_5F_intermediate_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_CALL extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_CALL : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_CALL_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_CALL_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_CALL_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_CALL bang_midrange_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_CALL unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_JSR (const class cPtr_midrange_5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__31_ (void) const ;

  public: class GGS_midrange_5F_call_5F_goto_5F_bit readProperty_mBit_31__32_ (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_JSR init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                           const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_JSR : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_JSR_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand2,
                                                                     const class GGS_midrange_5F_call_5F_goto_5F_bit & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method compute
  public: virtual void method_compute (const class GGS_midrange_5F_symbolTableForConvertingRelatives arg_inRoutineSymbolTable,
           class GGS_uint & arg_ioAddress,
           class GGS_bool & arg_ioJUMP_or_JSR_fixed,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           const class GGS_uint arg_inIndex,
           class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__31_ ;
  public: GGS_midrange_5F_call_5F_goto_5F_bit mProperty_mBit_31__32_ ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mTargetLabel,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__31_,
                                                const GGS_midrange_5F_call_5F_goto_5F_bit & in_mBit_31__32_,
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
// Phase 1: @midrange_5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_JSR_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_JSR bang_midrange_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRWDT_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT bang_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW init_21_ (const class GGS_location & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_CLRW_init_21_ (const class GGS_location & inOperand0,
                                                                         Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW bang_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP init_21_ (const class GGS_location & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_NOP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_NOP_init_21_ (const class GGS_location & inOperand0,
                                                                        Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP bang_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_NOP unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_RETURN class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETURN_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN bang_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE init_21_ (const class GGS_location & inOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_RETFIE class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_RETFIE_init_21_ (const class GGS_location & inOperand0,
                                                                           Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE bang_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP init_21_ (const class GGS_location & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_SLEEP_init_21_ (const class GGS_location & inOperand0,
                                                                          Compiler * inCompiler) ;


//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP bang_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                   const class GGS_uint & inOperand2,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             Compiler * inCompiler) ;


//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeMOVLW
  public: virtual void method_optimizeMOVLW (const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation bang_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_luint & inOperand1,
                                                                             Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                const GGS_luint & in_mOccurrenceFactor,
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
// Phase 1: @midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP bang_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition : public GGS_midrange_5F_intermediate_5F_actualInstruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_string readProperty_mTargetLabel (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GGS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                         const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                         const class GGS_string & inOperand2,
                                                                                                         const class GGS_bool & inOperand3,
                                                                                                         const class GGS_bool & inOperand4,
                                                                                                         const class GGS_bool & inOperand5,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_intermediate_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_midrange_5F_intermediate_5F_actualInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_intermediate_5F_incDecRegisterInCondition_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                   const class GGS_midrange_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                   const class GGS_string & inOperand2,
                                                                                                   const class GGS_bool & inOperand3,
                                                                                                   const class GGS_bool & inOperand4,
                                                                                                   const class GGS_bool & inOperand5,
                                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionLength
  public: virtual class GGS_uint getter_instructionLength (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildAssemblyCode
  public: virtual void method_buildAssemblyCode (class GGS_string & arg_ioString,
           class GGS_uint & arg_ioLocalLabelIndex,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateBinaryCodeAtAddress
  public: virtual void method_generateBinaryCodeAtAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_uint arg_inTotalBankCount,
           const class GGS_midrange_5F_symbolTable arg_inRoutineSymbolTable,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioAddress,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTestDecInc
  public: virtual void method_optimizeTestDecInc (const class GGS_symbolTableForOptimizations arg_inSymbolTable,
           const class GGS_uint arg_inLineIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           class GGS_bool & arg_ioOptimizationsDone,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_string mProperty_mTargetLabel ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GGS_bool mProperty_mBranchIfZero ;


//--- Default constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_string & in_mTargetLabel,
                                                                      const GGS_bool & in_mIncrement,
                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                      const GGS_bool & in_mBranchIfZero,
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
// Phase 1: @midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak : public GGS_midrange_5F_intermediate_5F_actualInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & operator = (const class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak init_nil (void) {
    GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition bang_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                class GGS_string & io_ioListFileContents,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_intermediate_instruction length'
//
//--------------------------------------------------------------------------------------------------

class GGS_uint callExtensionGetter_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloSimpleInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloSimpleInstruction : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloSimpleInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloSimpleInstruction init_21_ (const class GGS_location & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloSimpleInstruction extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18PiccoloSimpleInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloSimpleInstruction : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloSimpleInstruction_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyzeSimpleInstruction
  public: virtual void method_analyzeSimpleInstruction (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_SequentialInstruction & arg_outInstruction,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloSimpleInstruction (const GGS_location & in_mInstructionLocation,
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
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const class GGS_uint constin_inAccessBankSplitOffset,
                                  class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const class GGS_routineMap constin_inRoutineMap,
                                  const class GGS_registerTable constin_inRegisterTable,
                                  const class GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const class GGS_constantMap constin_inConstantMap,
                                  const class GGS_pic_31__38_MacroMap constin_inMacroMap,
                                  class GGS_uint & io_ioLocalLabelIndex,
                                  class GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  class GGS_lstring & io_ioBlockLabel,
                                  class GGS_string & io_ioListFileContents,
                                  class GGS_uint & io_ioCurrentBank,
                                  const class GGS_bool constin_inShouldPreserveBSR,
                                  const class GGS_routineKind constin_inRoutineKind,
                                  class GGS_stringset & io_ioUsedRegisters,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInstructionBlockMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInstructionBlockMap final {

  public: DownEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inMap) ;

  public: ~ DownEnumerator_blockInstructionBlockMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;

  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;

  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockInstructionBlockMap (const DownEnumerator_blockInstructionBlockMap &) = delete ;
  private: DownEnumerator_blockInstructionBlockMap & operator = (const DownEnumerator_blockInstructionBlockMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInstructionBlockMap final {
  public: UpEnumerator_blockInstructionBlockMap (const class GGS_blockInstructionBlockMap & inMap)  ;

  public: ~ UpEnumerator_blockInstructionBlockMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBlock (LOCATION_ARGS) const ;
  public: class GGS_blockInstructionBlockMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockInstructionBlockMap (const UpEnumerator_blockInstructionBlockMap &) = delete ;
  private: UpEnumerator_blockInstructionBlockMap & operator = (const UpEnumerator_blockInstructionBlockMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockInstructionBlockMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockInstructionBlockMap (void) ;

//--- Handle copy
  public: GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) ;
  public: GGS_blockInstructionBlockMap & operator = (const GGS_blockInstructionBlockMap & inSource) ;

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
  protected: void performInsert (const class GGS_blockInstructionBlockMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInstructionBlockMap init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInstructionBlockMap extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInstructionBlockMap class_func_mapWithMapToOverride (const class GGS_blockInstructionBlockMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_pic_31__38_InstructionList constinArgument1,
                                 class GGS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                 class GGS_location constinArgument3,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockTerminaisonForBlockInstructionForKey (class GGS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfBlockForKey (class GGS_location constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListForKey (class GGS_pic_31__38_InstructionList constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_pic_31__38_InstructionList & outArgument1,
                                 class GGS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                 class GGS_location & outArgument3,
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

  public: class GGS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionForKey (const class GGS_string & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfBlockForKey (const class GGS_string & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_blockInstructionBlockMap getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_blockInstructionBlockMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockInstructionBlockMap ;
  friend class DownEnumerator_blockInstructionBlockMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractBlockTerminationForBlockInstruction (const class cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractBlockTerminationForBlockInstruction init (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractBlockTerminationForBlockInstruction extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInstructionBlockMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GGS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public: inline GGS_abstractBlockTerminationForBlockInstruction readProperty_mBlockTerminaisonForBlockInstruction (void) const {
    return mProperty_mBlockTerminaisonForBlockInstruction ;
  }

  public: GGS_location mProperty_mEndOfBlock ;
  public: inline GGS_location readProperty_mEndOfBlock (void) const {
    return mProperty_mEndOfBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockInstructionBlockMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMBlockTerminaisonForBlockInstruction (const GGS_abstractBlockTerminationForBlockInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
  }

  public: inline void setter_setMEndOfBlock (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockInstructionBlockMap_2E_element (const GGS_lstring & in_lkey,
                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                   const GGS_location & in_mEndOfBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockInstructionBlockMap_2E_element (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockInstructionBlockMap_2E_element & operator = (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInstructionBlockMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_pic_31__38_InstructionList & inOperand1,
                                                                               const class GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInstructionBlockMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockInstructionBlockMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockInstructionBlockMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockInstructionBlockMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockInstructionBlockMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockInstructionBlockMap_2E_element_3F_ (const GGS_blockInstructionBlockMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockInstructionBlockMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockInstructionBlockMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockInstructionBlockMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractBlockTerminationForBlockInstruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractBlockTerminationForBlockInstruction_init (Compiler * inCompiler) ;


//--- Extension method addVisitedBlocks
  public: virtual void method_addVisitedBlocks (class GGS_stringset & arg_ioVisitedBlockSet,
           const class GGS_blockInstructionBlockMap arg_inBlockMap,
           const class GGS_string arg_inCurrentBlockName,
           const class GGS_uint arg_inInitialBlockSetting,
           class GGS_blockInitialBankSelectionMap & arg_ioBlockInitialBankSelectionMap,
           class GGS_bool & arg_ioContinuesInSequence,
           class GGS_bool & arg_ioContinueAccessibilityExploration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateBlock
  public: virtual void method_generateBlock (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_string arg_inLabelForBlock,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractBlockTerminationForBlockInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_blockInitialBankSelectionMap final {

  public: DownEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inMap) ;

  public: ~ DownEnumerator_blockInitialBankSelectionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;

  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;

  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_blockInitialBankSelectionMap (const DownEnumerator_blockInitialBankSelectionMap &) = delete ;
  private: DownEnumerator_blockInitialBankSelectionMap & operator = (const DownEnumerator_blockInitialBankSelectionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_blockInitialBankSelectionMap final {
  public: UpEnumerator_blockInitialBankSelectionMap (const class GGS_blockInitialBankSelectionMap & inMap)  ;

  public: ~ UpEnumerator_blockInitialBankSelectionMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public: class GGS_string current_mSourceBlock (LOCATION_ARGS) const ;
  public: class GGS_blockInitialBankSelectionMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_blockInitialBankSelectionMap (const UpEnumerator_blockInitialBankSelectionMap &) = delete ;
  private: UpEnumerator_blockInitialBankSelectionMap & operator = (const UpEnumerator_blockInitialBankSelectionMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_blockInitialBankSelectionMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_blockInitialBankSelectionMap (void) ;

//--- Handle copy
  public: GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) ;
  public: GGS_blockInitialBankSelectionMap & operator = (const GGS_blockInitialBankSelectionMap & inSource) ;

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
  protected: void performInsert (const class GGS_blockInitialBankSelectionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInitialBankSelectionMap init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInitialBankSelectionMap extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_blockInitialBankSelectionMap class_func_mapWithMapToOverride (const class GGS_blockInitialBankSelectionMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_string constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInitialBankSelectionForKey (class GGS_uint constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMSourceBlockForKey (class GGS_string constinArgument0,
                                             class GGS_string constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 class GGS_string & outArgument2,
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

  public: class GGS_uint getter_mInitialBankSelectionForKey (const class GGS_string & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_mSourceBlockForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_blockInitialBankSelectionMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_blockInitialBankSelectionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_blockInitialBankSelectionMap ;
  friend class DownEnumerator_blockInitialBankSelectionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @blockInitialBankSelectionMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mInitialBankSelection ;
  public: inline GGS_uint readProperty_mInitialBankSelection (void) const {
    return mProperty_mInitialBankSelection ;
  }

  public: GGS_string mProperty_mSourceBlock ;
  public: inline GGS_string readProperty_mSourceBlock (void) const {
    return mProperty_mSourceBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialBankSelection (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialBankSelection = inValue ;
  }

  public: inline void setter_setMSourceBlock (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSourceBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (const GGS_lstring & in_lkey,
                                                       const GGS_uint & in_mInitialBankSelection,
                                                       const GGS_string & in_mSourceBlock) ;

//--------------------------------- Copy constructor
  public: GGS_blockInitialBankSelectionMap_2E_element (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_blockInitialBankSelectionMap_2E_element & operator = (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_blockInitialBankSelectionMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_uint & inOperand1,
                                                                               const class GGS_string & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_blockInitialBankSelectionMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: blockInitialBankSelectionMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_blockInitialBankSelectionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_blockInitialBankSelectionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_blockInitialBankSelectionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_blockInitialBankSelectionMap_2E_element_3F_ (const GGS_blockInitialBankSelectionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_blockInitialBankSelectionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_blockInitialBankSelectionMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_blockInitialBankSelectionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addVisitedBlocks (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           class GGS_stringset & io_ioVisitedBlockSet,
                                           const class GGS_blockInstructionBlockMap constin_inBlockMap,
                                           const class GGS_string constin_inCurrentBlockName,
                                           const class GGS_uint constin_inInitialBlockSetting,
                                           class GGS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           class GGS_bool & io_ioContinuesInSequence,
                                           class GGS_bool & io_ioContinueAccessibilityExploration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBlock (class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const class GGS_uint constin_inAccessBankSplitOffset,
                                        const class GGS_uint constin_inCurrentBank,
                                        const class GGS_registerTable constin_inRegisterTable,
                                        const class GGS_constantMap constin_inConstantMap,
                                        class GGS_uint & io_ioLocalLabelIndex,
                                        class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        class GGS_stringset & io_ioUsedRegisters,
                                        const class GGS_string constin_inLabelForBlock,
                                        class GGS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_ConditionExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_ConditionExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_ConditionExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_ConditionExpression (const class cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_ConditionExpression init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_ConditionExpression extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18ConditionExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_ConditionExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_ConditionExpression_init (Compiler * inCompiler) ;


//--- Extension method analyzeCondition
  public: virtual void method_analyzeCondition (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_lstring arg_inConditionFalseLabel,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outCurrentBlockTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_pic_31__38_ConditionExpression (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_intermediate_instruction buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildAssemblyCode (class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                            class GGS_string & io_ioString,
                                            class GGS_uint & io_ioLocalLabelIndex,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstructionList enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInstructionReferencedLabels (const class GGS_ipic_31__38_SequentialInstructionList inObject,
                                                       const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                       const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                       class GGS_stringset & io_ioReferencedBlockSet,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionReferencedLabels (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                           const class GGS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                           const class GGS_ipic_31__38_BlockList constin_inBlockList,
                                                           class GGS_stringset & io_ioReferencedBlockSet,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @optimizeFlagStruct struct
//--------------------------------------------------------------------------------------------------

class GGS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_mRemoveEmptyRoutine ;
  public: inline GGS_bool readProperty_mRemoveEmptyRoutine (void) const {
    return mProperty_mRemoveEmptyRoutine ;
  }

  public: GGS_bool mProperty_mJSRtoRETLWreplacedByMOVLW ;
  public: inline GGS_bool readProperty_mJSRtoRETLWreplacedByMOVLW (void) const {
    return mProperty_mJSRtoRETLWreplacedByMOVLW ;
  }

  public: GGS_bool mProperty_mJSRfollowedByRETreplacedByJUMP ;
  public: inline GGS_bool readProperty_mJSRfollowedByRETreplacedByJUMP (void) const {
    return mProperty_mJSRfollowedByRETreplacedByJUMP ;
  }

  public: GGS_bool mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  public: inline GGS_bool readProperty_mMOVLWfollowedByRETreplacedByRETLW (void) const {
    return mProperty_mMOVLWfollowedByRETreplacedByRETLW ;
  }

  public: GGS_bool mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  public: inline GGS_bool readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;
  }

  public: GGS_bool mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  public: inline GGS_bool readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (void) const {
    return mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;
  }

  public: GGS_bool mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  public: inline GGS_bool readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (void) const {
    return mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_optimizeFlagStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRemoveEmptyRoutine (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRemoveEmptyRoutine = inValue ;
  }

  public: inline void setter_setMJSRtoRETLWreplacedByMOVLW (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoRETLWreplacedByMOVLW = inValue ;
  }

  public: inline void setter_setMJSRfollowedByRETreplacedByJUMP (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRfollowedByRETreplacedByJUMP = inValue ;
  }

  public: inline void setter_setMMOVLWfollowedByRETreplacedByRETLW (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMOVLWfollowedByRETreplacedByRETLW = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineReplacedByInstruction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction = inValue ;
  }

  public: inline void setter_setMJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_optimizeFlagStruct (const GGS_bool & in_mRemoveEmptyRoutine,
                                  const GGS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                  const GGS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                  const GGS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                  const GGS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                  const GGS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                  const GGS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;

//--------------------------------- Copy constructor
  public: GGS_optimizeFlagStruct (const GGS_optimizeFlagStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_optimizeFlagStruct & operator = (const GGS_optimizeFlagStruct & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optimizeFlagStruct init_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_bool & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_bool & inOperand3,
                                                                          const class GGS_bool & inOperand4,
                                                                          const class GGS_bool & inOperand5,
                                                                          const class GGS_bool & inOperand6,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optimizeFlagStruct extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@bool flagValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_flagValue (const class GGS_bool & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_symbolTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_baseline_5F_symbolTable final {

  public: DownEnumerator_baseline_5F_symbolTable (const class GGS_baseline_5F_symbolTable & inMap) ;

  public: ~ DownEnumerator_baseline_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;

  public: class GGS_baseline_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baseline_5F_symbolTable (const DownEnumerator_baseline_5F_symbolTable &) = delete ;
  private: DownEnumerator_baseline_5F_symbolTable & operator = (const DownEnumerator_baseline_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baseline_5F_symbolTable final {
  public: UpEnumerator_baseline_5F_symbolTable (const class GGS_baseline_5F_symbolTable & inMap)  ;

  public: ~ UpEnumerator_baseline_5F_symbolTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
  public: class GGS_baseline_5F_symbolTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baseline_5F_symbolTable (const UpEnumerator_baseline_5F_symbolTable &) = delete ;
  private: UpEnumerator_baseline_5F_symbolTable & operator = (const UpEnumerator_baseline_5F_symbolTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_baseline_5F_symbolTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_baseline_5F_symbolTable (void) ;

//--- Handle copy
  public: GGS_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inSource) ;
  public: GGS_baseline_5F_symbolTable & operator = (const GGS_baseline_5F_symbolTable & inSource) ;

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
  protected: void performInsert (const class GGS_baseline_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_symbolTable init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_symbolTable extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_symbolTable class_func_mapWithMapToOverride (const class GGS_baseline_5F_symbolTable & inOperand0
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

  public: class GGS_baseline_5F_symbolTable getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_baseline_5F_symbolTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baseline_5F_symbolTable ;
  friend class DownEnumerator_baseline_5F_symbolTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_symbolTable_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable_2E_element : public AC_GALGAS_root {
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
  public: GGS_baseline_5F_symbolTable_2E_element (void) ;

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
  public: GGS_baseline_5F_symbolTable_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_uint & in_mRoutineAddress) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_symbolTable_2E_element (const GGS_baseline_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_symbolTable_2E_element & operator = (const GGS_baseline_5F_symbolTable_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_symbolTable_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_symbolTable_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baseline_symbolTable.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_symbolTable_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baseline_5F_symbolTable_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_symbolTable_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baseline_5F_symbolTable_2E_element_3F_ (const GGS_baseline_5F_symbolTable_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baseline_5F_symbolTable_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baseline_5F_symbolTable_2E_element unwrappedValue (void) const {
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
  public: static GGS_baseline_5F_symbolTable_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_assembly_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              class GGS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              class GGS_uint & io_ioWordAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const class GGS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      class GGS_string & io_ioListFileContents,
                                                      class GGS_uint & io_ioWordAddress,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccolo_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_piccolo_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccolo_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccolo_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccolo_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccolo_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_label = 2 ;
  public: static const int32_t kToken_integer = 3 ;
  public: static const int32_t kToken_literal_5F_char = 4 ;
  public: static const int32_t kToken_literal_5F_string = 5 ;
  public: static const int32_t kToken_comment = 6 ;
  public: static const int32_t kToken_commentMark = 7 ;
  public: static const int32_t kToken_bank = 8 ;
  public: static const int32_t kToken_banksave = 9 ;
  public: static const int32_t kToken_banksel = 10 ;
  public: static const int32_t kToken_baseline = 11 ;
  public: static const int32_t kToken_block = 12 ;
  public: static const int32_t kToken_bootloader = 13 ;
  public: static const int32_t kToken_byte = 14 ;
  public: static const int32_t kToken_case = 15 ;
  public: static const int32_t kToken_checkbank = 16 ;
  public: static const int32_t kToken_checknobank = 17 ;
  public: static const int32_t kToken_checkpic = 18 ;
  public: static const int32_t kToken_computed = 19 ;
  public: static const int32_t kToken_configuration = 20 ;
  public: static const int32_t kToken_const = 21 ;
  public: static const int32_t kToken_contextsave = 22 ;
  public: static const int32_t kToken_data = 23 ;
  public: static const int32_t kToken_data_31__36_ = 24 ;
  public: static const int32_t kToken_data_38_ = 25 ;
  public: static const int32_t kToken_do = 26 ;
  public: static const int32_t kToken_end = 27 ;
  public: static const int32_t kToken_else = 28 ;
  public: static const int32_t kToken_elsif = 29 ;
  public: static const int32_t kToken_ensures = 30 ;
  public: static const int32_t kToken_fast = 31 ;
  public: static const int32_t kToken_forever = 32 ;
  public: static const int32_t kToken_if = 33 ;
  public: static const int32_t kToken_implements = 34 ;
  public: static const int32_t kToken_include = 35 ;
  public: static const int32_t kToken_inline = 36 ;
  public: static const int32_t kToken_interrupt = 37 ;
  public: static const int32_t kToken_macro = 38 ;
  public: static const int32_t kToken_midrange = 39 ;
  public: static const int32_t kToken_nobank = 40 ;
  public: static const int32_t kToken_noreturn = 41 ;
  public: static const int32_t kToken_page = 42 ;
  public: static const int32_t kToken_pic_31__38_ = 43 ;
  public: static const int32_t kToken_preserved = 44 ;
  public: static const int32_t kToken_protected = 45 ;
  public: static const int32_t kToken_private = 46 ;
  public: static const int32_t kToken_ram = 47 ;
  public: static const int32_t kToken_requires = 48 ;
  public: static const int32_t kToken_rom = 49 ;
  public: static const int32_t kToken_routine = 50 ;
  public: static const int32_t kToken_switch = 51 ;
  public: static const int32_t kToken_unused = 52 ;
  public: static const int32_t kToken_uses = 53 ;
  public: static const int32_t kToken_w = 54 ;
  public: static const int32_t kToken_while = 55 ;
  public: static const int32_t kToken_addlw = 56 ;
  public: static const int32_t kToken_addwf = 57 ;
  public: static const int32_t kToken_addwfc = 58 ;
  public: static const int32_t kToken_andlw = 59 ;
  public: static const int32_t kToken_andwf = 60 ;
  public: static const int32_t kToken_bc = 61 ;
  public: static const int32_t kToken_bcf = 62 ;
  public: static const int32_t kToken_bn = 63 ;
  public: static const int32_t kToken_bnc = 64 ;
  public: static const int32_t kToken_bnn = 65 ;
  public: static const int32_t kToken_bov = 66 ;
  public: static const int32_t kToken_bnov = 67 ;
  public: static const int32_t kToken_bnz = 68 ;
  public: static const int32_t kToken_bsf = 69 ;
  public: static const int32_t kToken_bra = 70 ;
  public: static const int32_t kToken_btg = 71 ;
  public: static const int32_t kToken_bz = 72 ;
  public: static const int32_t kToken_call = 73 ;
  public: static const int32_t kToken_clrf = 74 ;
  public: static const int32_t kToken_clrw = 75 ;
  public: static const int32_t kToken_clrwdt = 76 ;
  public: static const int32_t kToken_comf = 77 ;
  public: static const int32_t kToken_daw = 78 ;
  public: static const int32_t kToken_decf = 79 ;
  public: static const int32_t kToken_incf = 80 ;
  public: static const int32_t kToken_iorlw = 81 ;
  public: static const int32_t kToken_iorwf = 82 ;
  public: static const int32_t kToken_fnop = 83 ;
  public: static const int32_t kToken_goto = 84 ;
  public: static const int32_t kToken_jsr = 85 ;
  public: static const int32_t kToken_jump = 86 ;
  public: static const int32_t kToken_lfsr = 87 ;
  public: static const int32_t kToken_ldataptr = 88 ;
  public: static const int32_t kToken_ldata_38_ptr = 89 ;
  public: static const int32_t kToken_ldata_31__36_ptr = 90 ;
  public: static const int32_t kToken_ltblptr = 91 ;
  public: static const int32_t kToken_mnop = 92 ;
  public: static const int32_t kToken_movf = 93 ;
  public: static const int32_t kToken_movff = 94 ;
  public: static const int32_t kToken_movlw = 95 ;
  public: static const int32_t kToken_movwf = 96 ;
  public: static const int32_t kToken_mullw = 97 ;
  public: static const int32_t kToken_mulwf = 98 ;
  public: static const int32_t kToken_negf = 99 ;
  public: static const int32_t kToken_nop = 100 ;
  public: static const int32_t kToken_nopbra = 101 ;
  public: static const int32_t kToken_pop = 102 ;
  public: static const int32_t kToken_option = 103 ;
  public: static const int32_t kToken_push = 104 ;
  public: static const int32_t kToken_rcall = 105 ;
  public: static const int32_t kToken_reset = 106 ;
  public: static const int32_t kToken_retlw = 107 ;
  public: static const int32_t kToken_rlcf = 108 ;
  public: static const int32_t kToken_rlf = 109 ;
  public: static const int32_t kToken_rlncf = 110 ;
  public: static const int32_t kToken_rrcf = 111 ;
  public: static const int32_t kToken_rrf = 112 ;
  public: static const int32_t kToken_rrncf = 113 ;
  public: static const int32_t kToken_setf = 114 ;
  public: static const int32_t kToken_sleep = 115 ;
  public: static const int32_t kToken_subfwb = 116 ;
  public: static const int32_t kToken_sublw = 117 ;
  public: static const int32_t kToken_subwf = 118 ;
  public: static const int32_t kToken_subwfb = 119 ;
  public: static const int32_t kToken_swapf = 120 ;
  public: static const int32_t kToken_tblrd = 121 ;
  public: static const int32_t kToken_tblwt = 122 ;
  public: static const int32_t kToken_tris = 123 ;
  public: static const int32_t kToken_xorlw = 124 ;
  public: static const int32_t kToken_xorwf = 125 ;
  public: static const int32_t kToken__2A_ = 126 ;
  public: static const int32_t kToken__2A__2B_ = 127 ;
  public: static const int32_t kToken__2C_ = 128 ;
  public: static const int32_t kToken__21__3D_ = 129 ;
  public: static const int32_t kToken__3C__3D_ = 130 ;
  public: static const int32_t kToken__3E__3D_ = 131 ;
  public: static const int32_t kToken__2A__2D_ = 132 ;
  public: static const int32_t kToken__2B__2A_ = 133 ;
  public: static const int32_t kToken__3B_ = 134 ;
  public: static const int32_t kToken__3A_ = 135 ;
  public: static const int32_t kToken__3D__3D_ = 136 ;
  public: static const int32_t kToken__3C_ = 137 ;
  public: static const int32_t kToken__3E_ = 138 ;
  public: static const int32_t kToken__5B_ = 139 ;
  public: static const int32_t kToken__5D_ = 140 ;
  public: static const int32_t kToken__2E_ = 141 ;
  public: static const int32_t kToken__21_ = 142 ;
  public: static const int32_t kToken__26_ = 143 ;
  public: static const int32_t kToken__7C_ = 144 ;
  public: static const int32_t kToken__3D_ = 145 ;
  public: static const int32_t kToken__7B_ = 146 ;
  public: static const int32_t kToken__7D_ = 147 ;
  public: static const int32_t kToken__28_ = 148 ;
  public: static const int32_t kToken__29_ = 149 ;
  public: static const int32_t kToken__2F_ = 150 ;
  public: static const int32_t kToken__2D_ = 151 ;
  public: static const int32_t kToken__2B_ = 152 ;
  public: static const int32_t kToken__3F_ = 153 ;
  public: static const int32_t kToken__5E_ = 154 ;
  public: static const int32_t kToken__3C__3C_ = 155 ;
  public: static const int32_t kToken__3E__3E_ = 156 ;
  public: static const int32_t kToken__7E_ = 157 ;
  public: static const int32_t kToken__25_ = 158 ;
  public: static const int32_t kToken__2E__2E__2E_ = 159 ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

//--- Key words table 'instructionKeyWordList'
  public: static int32_t search_into_instructionKeyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lchar synthetizedAttribute_charValue (void) const ;
  public: GGS_lstring synthetizedAttribute_identifierString (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: utf32 attributeValue_charValue (void) const ;
  public: String attributeValue_identifierString (void) const ;
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys
public: static const uint32_t kIndexing_routineDefinition = 0 ;
public: static const uint32_t kIndexing_routineCall = 1 ;
public: static const uint32_t kIndexing_variableDeclaration = 2 ;
public: static const uint32_t kIndexing_variableUse = 3 ;
public: static const uint32_t kIndexing_constantDeclaration = 4 ;

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccolo_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 159 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccolo_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction (const class cPtr_midrange_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_init_21_ (const class GGS_location & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_2E_weak (const class GGS_midrange_5F_instruction & inSource) ;

  public: GGS_midrange_5F_instruction_2E_weak & operator = (const class GGS_midrange_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction bang_midrange_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_midrange_5F_instructionList final {
  public: DownEnumerator_midrange_5F_instructionList (const class GGS_midrange_5F_instructionList & inList) ;

  public: ~ DownEnumerator_midrange_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_midrange_5F_instructionList (const DownEnumerator_midrange_5F_instructionList &) = delete ;
  private: DownEnumerator_midrange_5F_instructionList & operator = (const DownEnumerator_midrange_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_midrange_5F_instructionList final {
  public: UpEnumerator_midrange_5F_instructionList (const class GGS_midrange_5F_instructionList & inList)  ;

  public: ~ UpEnumerator_midrange_5F_instructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_midrange_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_midrange_5F_instructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_midrange_5F_instructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_midrange_5F_instructionList (const UpEnumerator_midrange_5F_instructionList &) = delete ;
  private: UpEnumerator_midrange_5F_instructionList & operator = (const UpEnumerator_midrange_5F_instructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @midrange_instructionList list
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_midrange_5F_instructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_midrange_5F_instructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_midrange_5F_instructionList (void) = default ;

//--- Copy
  public: GGS_midrange_5F_instructionList (const GGS_midrange_5F_instructionList &) = default ;
  public: GGS_midrange_5F_instructionList & operator = (const GGS_midrange_5F_instructionList &) = default ;

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
  public : inline GenericArray <GGS_midrange_5F_instructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_midrange_5F_instructionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_midrange_5F_instructionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_midrange_5F_instruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instructionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instructionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instructionList class_func_listWithValue (const class GGS_midrange_5F_instruction & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_midrange_5F_instructionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_midrange_5F_instruction & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_midrange_5F_instructionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_midrange_5F_instructionList add_operation (const GGS_midrange_5F_instructionList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_midrange_5F_instruction constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_midrange_5F_instruction constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_midrange_5F_instruction & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_midrange_5F_instruction & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_midrange_5F_instruction & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionAtIndex (class GGS_midrange_5F_instruction constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_midrange_5F_instruction & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_midrange_5F_instruction & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_midrange_5F_instructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_midrange_5F_instructionList ;
  friend class DownEnumerator_midrange_5F_instructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_midrange_5F_instruction mProperty_mInstruction ;
  public: inline GGS_midrange_5F_instruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_instructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_midrange_5F_instruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_instructionList_2E_element (const GGS_midrange_5F_instruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_instructionList_2E_element (const GGS_midrange_5F_instructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_instructionList_2E_element & operator = (const GGS_midrange_5F_instructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instructionList_2E_element init_21_ (const class GGS_midrange_5F_instruction & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instructionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_nobanksel : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_nobanksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_nobanksel (const class cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_nobanksel init_21_ (const class GGS_location & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_nobanksel extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_nobanksel : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_nobanksel_init_21_ (const class GGS_location & inOperand0,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_nobanksel_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_nobanksel_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak (const class GGS_midrange_5F_instruction_5F_nobanksel & inSource) ;

  public: GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_nobanksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_nobanksel_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_nobanksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_nobanksel bang_midrange_5F_instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_nobanksel unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_nobanksel_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_nobanksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_nobanksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_banksel (const class cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_banksel init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_luint & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_banksel extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_banksel class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_banksel_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_luint & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_banksel (const GGS_location & in_mInstructionLocation,
                                                   const GGS_luint & in_mBankIndex,
                                                   const GGS_bool & in_mWarningOnUselessBanksel,
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
// Phase 1: @midrange_5F_instruction_5F_banksel_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak (const class GGS_midrange_5F_instruction_5F_banksel & inSource) ;

  public: GGS_midrange_5F_instruction_5F_banksel_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_banksel & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_banksel_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_banksel_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_banksel bang_midrange_5F_instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_banksel unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_banksel_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrangeInstruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checkbank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checkbank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrangeInstruction_5F_checkbank (const class cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBankIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrangeInstruction_5F_checkbank init_21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_uint & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrangeInstruction_5F_checkbank extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrangeInstruction_checkbank class
//--------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checkbank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrangeInstruction_5F_checkbank_init_21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_midrangeInstruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrangeInstruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                 const GGS_uint & in_mBankIndex,
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
// Phase 1: @midrangeInstruction_5F_checkbank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checkbank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checkbank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrangeInstruction_5F_checkbank_2E_weak (const class GGS_midrangeInstruction_5F_checkbank & inSource) ;

  public: GGS_midrangeInstruction_5F_checkbank_2E_weak & operator = (const class GGS_midrangeInstruction_5F_checkbank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrangeInstruction_5F_checkbank_2E_weak init_nil (void) {
    GGS_midrangeInstruction_5F_checkbank_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrangeInstruction_5F_checkbank bang_midrangeInstruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrangeInstruction_5F_checkbank unwrappedValue (void) const ;

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
  public: static GGS_midrangeInstruction_5F_checkbank_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checkbank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checkbank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrangeInstruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checknobank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checknobank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrangeInstruction_5F_checknobank (const class cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrangeInstruction_5F_checknobank init_21_ (const class GGS_location & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrangeInstruction_5F_checknobank extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrangeInstruction_checknobank class
//--------------------------------------------------------------------------------------------------

class cPtr_midrangeInstruction_5F_checknobank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrangeInstruction_5F_checknobank_init_21_ (const class GGS_location & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrangeInstruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrangeInstruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrangeInstruction_5F_checknobank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrangeInstruction_5F_checknobank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrangeInstruction_5F_checknobank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrangeInstruction_5F_checknobank_2E_weak (const class GGS_midrangeInstruction_5F_checknobank & inSource) ;

  public: GGS_midrangeInstruction_5F_checknobank_2E_weak & operator = (const class GGS_midrangeInstruction_5F_checknobank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrangeInstruction_5F_checknobank_2E_weak init_nil (void) {
    GGS_midrangeInstruction_5F_checknobank_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrangeInstruction_5F_checknobank bang_midrangeInstruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrangeInstruction_5F_checknobank unwrappedValue (void) const ;

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
  public: static GGS_midrangeInstruction_5F_checknobank_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrangeInstruction_5F_checknobank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrangeInstruction_5F_checknobank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_5F_register : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register (const class cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

  public: class GGS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_registerExpression & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                const class GGS_registerExpression & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_bool mProperty_mWarningOnUselessBanksel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                               const GGS_registerExpression & in_mRegister,
                                                               const GGS_bool & in_mWarningOnUselessBanksel,
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
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (const class GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

  public: GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_banksel_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register bang_midrange_5F_instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_banksel_5F_register unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_savebank : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_savebank (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_savebank (const class cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSaveBankInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_savebank init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_registerExpression & inOperand1,
                                                                               const class GGS_midrange_5F_instructionList & inOperand2,
                                                                               const class GGS_location & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_savebank extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_savebank class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_savebank : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_registerExpression & inOperand1,
                                                                         const class GGS_midrange_5F_instructionList & inOperand2,
                                                                         const class GGS_location & inOperand3,
                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;
  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfSaveBankInstruction ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                    const GGS_registerExpression & in_mRegister,
                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GGS_location & in_mEndOfSaveBankInstruction,
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
// Phase 1: @midrange_5F_instruction_5F_savebank_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_savebank_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak (const class GGS_midrange_5F_instruction_5F_savebank & inSource) ;

  public: GGS_midrange_5F_instruction_5F_savebank_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_savebank & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_savebank_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_savebank_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_savebank bang_midrange_5F_instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_savebank unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_savebank_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_savebank_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_savebank_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;

  public: class GGS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GGS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                               const class GGS_lstring & inOperand1,
                                                                                               const class GGS_immediatExpression & inOperand2,
                                                                                               const class GGS_immediatExpression & inOperand3,
                                                                                               const class GGS_midrange_5F_instructionList & inOperand4,
                                                                                               const class GGS_location & inOperand5,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_lstring & inOperand1,
                                                                                         const class GGS_immediatExpression & inOperand2,
                                                                                         const class GGS_immediatExpression & inOperand3,
                                                                                         const class GGS_midrange_5F_instructionList & inOperand4,
                                                                                         const class GGS_location & inOperand5,
                                                                                         Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GGS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GGS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInstruction ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mConstantName,
                                                            const GGS_immediatExpression & in_mLowerBoundExpression,
                                                            const GGS_immediatExpression & in_mUpperBoundExpression,
                                                            const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                            const GGS_location & in_mEndOfInstruction,
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
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_instruction_FD_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FD (const class cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_FD init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FD extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_FD class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FD : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_FD_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bool & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                              const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @midrange_5F_instruction_5F_FD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FD_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_FD_2E_weak (const class GGS_midrange_5F_instruction_5F_FD & inSource) ;

  public: GGS_midrange_5F_instruction_5F_FD_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_FD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_FD_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_FD_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FD bang_midrange_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_FD unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_FD_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_F_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_F : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_F (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_F (const class cPtr_midrange_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_F init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                    const class GGS_registerExpression & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_F extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_F class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_F_init_21__21__21_ (const class GGS_location & inOperand0,
                                                              const class GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                              const class GGS_registerExpression & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                             const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GGS_registerExpression & in_mRegisterExpression,
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
// Phase 1: @midrange_5F_instruction_5F_F_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_F_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_F_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_F_2E_weak (const class GGS_midrange_5F_instruction_5F_F & inSource) ;

  public: GGS_midrange_5F_instruction_5F_F_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_F & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_F_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_F_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_F bang_midrange_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_F unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_F_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_F_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_F_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FB : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_FB (const class cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GGS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_FB init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                         const class GGS_registerExpression & inOperand2,
                                                                         const class GGS_bitNumberExpression & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_FB extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_FB class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FB : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_FB_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                   const class GGS_registerExpression & inOperand2,
                                                                   const class GGS_bitNumberExpression & inOperand3,
                                                                   Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_registerExpression mProperty_mRegisterExpression ;
  public: GGS_bitNumberExpression mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                              const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GGS_registerExpression & in_mRegisterExpression,
                                              const GGS_bitNumberExpression & in_mBitNumber,
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
// Phase 1: @midrange_5F_instruction_5F_FB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_FB_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_FB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_FB_2E_weak (const class GGS_midrange_5F_instruction_5F_FB & inSource) ;

  public: GGS_midrange_5F_instruction_5F_FB_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_FB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_FB_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_FB_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_FB bang_midrange_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_FB unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_FB_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_FB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_FB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CALL : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CALL (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_CALL (const class cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_CALL init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_CALL extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_CALL class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CALL : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_CALL_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_CALL_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CALL_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak (const class GGS_midrange_5F_instruction_5F_CALL & inSource) ;

  public: GGS_midrange_5F_instruction_5F_CALL_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_CALL & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_CALL_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_CALL_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CALL bang_midrange_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_CALL unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_CALL_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CALL_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CALL_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JSR : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_JSR (const class cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_JSR init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_JSR extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JSR : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_JSR_init_21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JSR_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak (const class GGS_midrange_5F_instruction_5F_JSR & inSource) ;

  public: GGS_midrange_5F_instruction_5F_JSR_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_JSR_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_JSR bang_midrange_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JUMP : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_JUMP (const class cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_JUMP init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_JUMP extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_JUMP_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_JUMP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_JUMP_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak (const class GGS_midrange_5F_instruction_5F_JUMP & inSource) ;

  public: GGS_midrange_5F_instruction_5F_JUMP_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_JUMP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_JUMP_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_JUMP_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_JUMP bang_midrange_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_JUMP unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_JUMP_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_JUMP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_JUMP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_GOTO : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_GOTO (const class cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_GOTO init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_GOTO extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_GOTO : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_GOTO_init_21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionUsesGOTOorCALL
  public: virtual void method_instructionUsesGOTOorCALL (class GGS_bool & arg_ioUsesGOTOorCALL,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_GOTO_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_GOTO_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak (const class GGS_midrange_5F_instruction_5F_GOTO & inSource) ;

  public: GGS_midrange_5F_instruction_5F_GOTO_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_GOTO & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_GOTO_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_GOTO_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_GOTO bang_midrange_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_GOTO unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_GOTO_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_GOTO_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_GOTO_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRWDT : public GGS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_midrange_5F_instruction_5F_CLRWDT (const class cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_instruction_5F_CLRWDT init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_instruction_5F_CLRWDT extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @midrange_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void midrange_5F_instruction_5F_CLRWDT_init_21_ (const class GGS_location & inOperand0,
                                                           Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method build_midrange_ipic_instructionList
  public: virtual void method_build_5F_midrange_5F_ipic_5F_instructionList (const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_midrange_5F_intermediate_5F_instructionList & arg_ioGeneratedInstructionList,
           class GGS_string & arg_ioListFileContents,
           const class GGS_uint arg_inTotalBankCount,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBank,
           class GGS_bool & arg_ioContinuesInSequence,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_midrange_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CLRWDT (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @midrange_5F_instruction_5F_CLRWDT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak : public GGS_midrange_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak (const class GGS_midrange_5F_instruction_5F_CLRWDT & inSource) ;

  public: GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & operator = (const class GGS_midrange_5F_instruction_5F_CLRWDT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak init_nil (void) {
    GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_midrange_5F_instruction_5F_CLRWDT bang_midrange_5F_instruction_5F_CLRWDT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_midrange_5F_instruction_5F_CLRWDT unwrappedValue (void) const ;

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
  public: static GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_midrange_5F_instruction_5F_CLRWDT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2E_weak ;

