#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38__5F_dataMap final {

  public: DownEnumerator_pic_31__38__5F_dataMap (const class GGS_pic_31__38__5F_dataMap & inMap) ;

  public: ~ DownEnumerator_pic_31__38__5F_dataMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uintlist current_mData (LOCATION_ARGS) const ;

  public: class GGS_bool current_mIsData_38_ (LOCATION_ARGS) const ;

  public: class GGS_pic_31__38__5F_dataMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38__5F_dataMap (const DownEnumerator_pic_31__38__5F_dataMap &) = delete ;
  private: DownEnumerator_pic_31__38__5F_dataMap & operator = (const DownEnumerator_pic_31__38__5F_dataMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38__5F_dataMap final {
  public: UpEnumerator_pic_31__38__5F_dataMap (const class GGS_pic_31__38__5F_dataMap & inMap)  ;

  public: ~ UpEnumerator_pic_31__38__5F_dataMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mData (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsData_38_ (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38__5F_dataMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38__5F_dataMap (const UpEnumerator_pic_31__38__5F_dataMap &) = delete ;
  private: UpEnumerator_pic_31__38__5F_dataMap & operator = (const UpEnumerator_pic_31__38__5F_dataMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_pic_31__38__5F_dataMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_pic_31__38__5F_dataMap (void) ;

//--- Handle copy
  public: GGS_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inSource) ;
  public: GGS_pic_31__38__5F_dataMap & operator = (const GGS_pic_31__38__5F_dataMap & inSource) ;

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
  protected: void performInsert (const class GGS_pic_31__38__5F_dataMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38__5F_dataMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38__5F_dataMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38__5F_dataMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38__5F_dataMap class_func_mapWithMapToOverride (const class GGS_pic_31__38__5F_dataMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uintlist constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataForKey (class GGS_uintlist constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsData_38_ForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uintlist & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mDataForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsData_38_ForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38__5F_dataMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38__5F_dataMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38__5F_dataMap ;
  friend class DownEnumerator_pic_31__38__5F_dataMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uintlist mProperty_mData ;
  public: inline GGS_uintlist readProperty_mData (void) const {
    return mProperty_mData ;
  }

  public: GGS_bool mProperty_mIsData_38_ ;
  public: inline GGS_bool readProperty_mIsData_38_ (void) const {
    return mProperty_mIsData_38_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMData (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mData = inValue ;
  }

  public: inline void setter_setMIsData_38_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsData_38_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38__5F_dataMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_uintlist & in_mData,
                                                 const GGS_bool & in_mIsData_38_) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38__5F_dataMap_2E_element (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38__5F_dataMap_2E_element & operator = (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38__5F_dataMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uintlist & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38__5F_dataMap_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38__5F_dataMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_uintlist & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: pic18_dataMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_pic_31__38__5F_dataMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_pic_31__38__5F_dataMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_pic_31__38__5F_dataMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_pic_31__38__5F_dataMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_pic_31__38__5F_dataMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SequentialInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SequentialInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SequentialInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_SequentialInstruction_2E_weak (const class GGS_ipic_31__38_SequentialInstruction & inSource) ;

  public: GGS_ipic_31__38_SequentialInstruction_2E_weak & operator = (const class GGS_ipic_31__38_SequentialInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_SequentialInstruction_2E_weak init_nil (void) {
    GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_SequentialInstruction bang_ipic_31__38_SequentialInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_SequentialInstruction unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_SequentialInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_SequentialInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_SequentialInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractBlockTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractBlockTerminator_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (const class GGS_ipic_31__38_AbstractBlockTerminator & inSource) ;

  public: GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & operator = (const class GGS_ipic_31__38_AbstractBlockTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_AbstractBlockTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_AbstractBlockTerminator bang_ipic_31__38_AbstractBlockTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_AbstractBlockTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_AbstractBlockTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_AbstractBlockTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SingleInstructionTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SingleInstructionTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (const class GGS_ipic_31__38_SingleInstructionTerminator & inSource) ;

  public: GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & operator = (const class GGS_ipic_31__38_SingleInstructionTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_SingleInstructionTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_SingleInstructionTerminator bang_ipic_31__38_SingleInstructionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_SingleInstructionTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_SingleInstructionTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_SingleInstructionTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ReturnTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ReturnTerminator : public GGS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ReturnTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ReturnTerminator (const class cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ReturnTerminator init_21_ (const class GGS_location & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ReturnTerminator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ReturnTerminator class_func_new (const class GGS_location & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ReturnTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ReturnTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ReturnTerminator_init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_ipic_31__38_ReturnTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ReturnTerminator (const GGS_location & in_mInstructionLocation,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ReturnTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ReturnTerminator_2E_weak : public GGS_ipic_31__38_SingleInstructionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ReturnTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ReturnTerminator_2E_weak (const class GGS_ipic_31__38_ReturnTerminator & inSource) ;

  public: GGS_ipic_31__38_ReturnTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ReturnTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ReturnTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ReturnTerminator bang_ipic_31__38_ReturnTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ReturnTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ReturnTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ReturnTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ReturnTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_RetlwTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RetlwTerminator : public GGS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RetlwTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_RetlwTerminator (const class cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_RetlwTerminator init_21__21_ (const class GGS_location & inOperand0,
                                                               const class GGS_uint & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_RetlwTerminator extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RetlwTerminator class_func_new (const class GGS_location & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18RetlwTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_RetlwTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_RetlwTerminator_init_21__21_ (const class GGS_location & inOperand0,
                                                         const class GGS_uint & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_ipic_31__38_RetlwTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_RetlwTerminator (const GGS_location & in_mInstructionLocation,
                                            const GGS_uint & in_mLiteralValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_RetlwTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RetlwTerminator_2E_weak : public GGS_ipic_31__38_SingleInstructionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RetlwTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_RetlwTerminator_2E_weak (const class GGS_ipic_31__38_RetlwTerminator & inSource) ;

  public: GGS_ipic_31__38_RetlwTerminator_2E_weak & operator = (const class GGS_ipic_31__38_RetlwTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_RetlwTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_RetlwTerminator bang_ipic_31__38_RetlwTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_RetlwTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_RetlwTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RetlwTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetlwTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_RetfieTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RetfieTerminator : public GGS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RetfieTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_RetfieTerminator (const class cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mFastReturn (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_RetfieTerminator init_21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_bool & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_RetfieTerminator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RetfieTerminator class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18RetfieTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_RetfieTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_RetfieTerminator_init_21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mFastReturn ;


//--- Default constructor
  public: cPtr_ipic_31__38_RetfieTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_RetfieTerminator (const GGS_location & in_mInstructionLocation,
                                             const GGS_bool & in_mFastReturn,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_RetfieTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RetfieTerminator_2E_weak : public GGS_ipic_31__38_SingleInstructionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RetfieTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_RetfieTerminator_2E_weak (const class GGS_ipic_31__38_RetfieTerminator & inSource) ;

  public: GGS_ipic_31__38_RetfieTerminator_2E_weak & operator = (const class GGS_ipic_31__38_RetfieTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_RetfieTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_RetfieTerminator bang_ipic_31__38_RetfieTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_RetfieTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_RetfieTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RetfieTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetfieTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_JumpTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_JumpTerminator : public GGS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_JumpTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_JumpTerminator (const class cPtr_ipic_31__38_JumpTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_JumpTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_jumpInstructionKind & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_JumpTerminator extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_JumpTerminator class_func_new (const class GGS_location & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_jumpInstructionKind & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18JumpTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_JumpTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_jumpInstructionKind & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38_JumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_JumpTerminator (const GGS_location & in_mInstructionLocation,
                                           const GGS_lstring & in_mLabel,
                                           const GGS_jumpInstructionKind & in_mKind,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_JumpTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_JumpTerminator_2E_weak : public GGS_ipic_31__38_SingleInstructionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_JumpTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_JumpTerminator_2E_weak (const class GGS_ipic_31__38_JumpTerminator & inSource) ;

  public: GGS_ipic_31__38_JumpTerminator_2E_weak & operator = (const class GGS_ipic_31__38_JumpTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_JumpTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_JumpTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_JumpTerminator bang_ipic_31__38_JumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_JumpTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_JumpTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_JumpTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_JumpTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedGotoTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedGotoTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedGotoTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ComputedGotoTerminator (const class cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ComputedGotoTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                          const class GGS_lstringlist & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ComputedGotoTerminator extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedGotoTerminator class_func_new (const class GGS_location & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ComputedGotoTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedGotoTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedGotoTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                    const class GGS_lstringlist & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedGotoTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedGotoTerminator (const GGS_location & in_mInstructionLocation,
                                                   const GGS_lstringlist & in_mTargetLabels,
                                                   const GGS_bool & in_mUsesRCALL,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedGotoTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedGotoTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (const class GGS_ipic_31__38_ComputedGotoTerminator & inSource) ;

  public: GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ComputedGotoTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ComputedGotoTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ComputedGotoTerminator bang_ipic_31__38_ComputedGotoTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ComputedGotoTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ComputedGotoTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedGotoTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedRETLWTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedRETLWTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedRETLWTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ComputedRETLWTerminator (const class cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uintlist readProperty_mLiteralValues (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ComputedRETLWTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_uintlist & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ComputedRETLWTerminator extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedRETLWTerminator class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_uintlist & inOperand1,
                                                                               const class GGS_bool & inOperand2,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ComputedRETLWTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedRETLWTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_uintlist & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uintlist mProperty_mLiteralValues ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (const GGS_location & in_mInstructionLocation,
                                                    const GGS_uintlist & in_mLiteralValues,
                                                    const GGS_bool & in_mUsesRCALL,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedRETLWTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (const class GGS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

  public: GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ComputedRETLWTerminator bang_ipic_31__38_ComputedRETLWTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ComputedRETLWTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum conditionalBranchMode
//--------------------------------------------------------------------------------------------------

class GGS_conditionalBranchMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_conditionalBranchMode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_native,
    enum_ipicBRA,
    enum_ipicGOTO
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
  public: static GGS_conditionalBranchMode extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_conditionalBranchMode class_func_ipicBRA (LOCATION_ARGS) ;

  public: static class GGS_conditionalBranchMode class_func_ipicGOTO (LOCATION_ARGS) ;

  public: static class GGS_conditionalBranchMode class_func_native (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_conditionalBranchMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIpicBRA (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIpicGOTO (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNative (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ConditionalJumpTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ConditionalJumpTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ConditionalJumpTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ConditionalJumpTerminator (const class cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GGS_lstring readProperty_mTargetLabelWhenTrue (void) const ;

  public: class GGS_conditionalBranchMode readProperty_mBranchModeOnTrueLabel (void) const ;

  public: class GGS_lstring readProperty_mTargetLabelWhenFalse (void) const ;

  public: class GGS_conditionalBranchMode readProperty_mBranchModeOnFalseLabel (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ConditionalJumpTerminator init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_conditional_5F_branch & inOperand1,
                                                                                         const class GGS_lstring & inOperand2,
                                                                                         const class GGS_conditionalBranchMode & inOperand3,
                                                                                         const class GGS_lstring & inOperand4,
                                                                                         const class GGS_conditionalBranchMode & inOperand5,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ConditionalJumpTerminator extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ConditionalJumpTerminator class_func_new (const class GGS_location & inOperand0,
                                                                                 const class GGS_conditional_5F_branch & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_conditionalBranchMode & inOperand3,
                                                                                 const class GGS_lstring & inOperand4,
                                                                                 const class GGS_conditionalBranchMode & inOperand5,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ConditionalJumpTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ConditionalJumpTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ConditionalJumpTerminator_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_conditional_5F_branch & inOperand1,
                                                                                   const class GGS_lstring & inOperand2,
                                                                                   const class GGS_conditionalBranchMode & inOperand3,
                                                                                   const class GGS_lstring & inOperand4,
                                                                                   const class GGS_conditionalBranchMode & inOperand5,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GGS_lstring mProperty_mTargetLabelWhenTrue ;
  public: GGS_conditionalBranchMode mProperty_mBranchModeOnTrueLabel ;
  public: GGS_lstring mProperty_mTargetLabelWhenFalse ;
  public: GGS_conditionalBranchMode mProperty_mBranchModeOnFalseLabel ;


//--- Default constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (const GGS_location & in_mInstructionLocation,
                                                      const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                      const GGS_lstring & in_mTargetLabelWhenTrue,
                                                      const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                      const GGS_lstring & in_mTargetLabelWhenFalse,
                                                      const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ConditionalJumpTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (const class GGS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

  public: GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ConditionalJumpTerminator bang_ipic_31__38_ConditionalJumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ConditionalJumpTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedBraTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedBraTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedBraTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_ComputedBraTerminator (const class cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_ComputedBraTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_lstringlist & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_ComputedBraTerminator extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedBraTerminator class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_lstringlist & inOperand1,
                                                                             const class GGS_bool & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18ComputedBraTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedBraTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedBraTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_lstringlist & inOperand1,
                                                                   const class GGS_bool & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstringlist mProperty_mTargetLabels ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (const GGS_location & in_mInstructionLocation,
                                                  const GGS_lstringlist & in_mTargetLabels,
                                                  const GGS_bool & in_mUsesRCALL,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_ComputedBraTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_ComputedBraTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak (const class GGS_ipic_31__38_ComputedBraTerminator & inSource) ;

  public: GGS_ipic_31__38_ComputedBraTerminator_2E_weak & operator = (const class GGS_ipic_31__38_ComputedBraTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_ComputedBraTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_ComputedBraTerminator bang_ipic_31__38_ComputedBraTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_ComputedBraTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_ComputedBraTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_ComputedBraTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_registerEqualsToW,
    enum_registerGreaterThanW,
    enum_registerLowerThanW
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
  public: static GGS_ipic_31__38_RegisterComparison extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerEqualsToW (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerGreaterThanW (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_RegisterComparison class_func_registerLowerThanW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegisterEqualsToW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegisterGreaterThanW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRegisterLowerThanW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractConditionTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractConditionTerminator_2E_weak : public GGS_ipic_31__38_AbstractBlockTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (const class GGS_ipic_31__38_AbstractConditionTerminator & inSource) ;

  public: GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & operator = (const class GGS_ipic_31__38_AbstractConditionTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_AbstractConditionTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_AbstractConditionTerminator bang_ipic_31__38_AbstractConditionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_AbstractConditionTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_AbstractConditionTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_AbstractConditionTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpression struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyString ;
  public: inline GGS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_bool mProperty_mNeedsBSR ;
  public: inline GGS_bool readProperty_mNeedsBSR (void) const {
    return mProperty_mNeedsBSR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMNeedsBSR (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsBSR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_string & in_mAssemblyString,
                                                                  const GGS_uint & in_mRegisterAddress,
                                                                  const GGS_bool & in_mNeedsBSR) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression & operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpression init_21__21__21_ (const class GGS_string & inOperand0,
                                                                                          const class GGS_uint & inOperand1,
                                                                                          const class GGS_bool & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_registerExpression class_func_new (const class GGS_string & inOperand0,
                                                                                              const class GGS_uint & inOperand1,
                                                                                              const class GGS_bool & inOperand2,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterComparisonTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_RegisterComparisonTerminator (const class cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_ipic_31__38_RegisterComparison readProperty_mComparison (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_RegisterComparisonTerminator init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                       const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                       const class GGS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_RegisterComparisonTerminator extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonTerminator class_func_new (const class GGS_location & inOperand0,
                                                                                   const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                   const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                   const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                   const class GGS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18RegisterComparisonTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonTerminator_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                 const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                 const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                 const class GGS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_ipic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_RegisterComparisonTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_RegisterComparisonTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (const class GGS_pic_31__38_RegisterComparisonTerminator & inSource) ;

  public: GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & operator = (const class GGS_pic_31__38_RegisterComparisonTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_RegisterComparisonTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_RegisterComparisonTerminator bang_pic_31__38_RegisterComparisonTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_RegisterComparisonTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_RegisterComparisonTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_RegisterComparisonTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_IncDecRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_IncDecRegisterTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_IncDecRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_IncDecRegisterTerminator (const class cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_mIncrement (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_IncDecRegisterTerminator init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                        const class GGS_bool & inOperand4,
                                                                                        const class GGS_bool & inOperand5,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_IncDecRegisterTerminator extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_IncDecRegisterTerminator class_func_new (const class GGS_location & inOperand0,
                                                                                const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_bool & inOperand5,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18IncDecRegisterTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                  const class GGS_bool & inOperand4,
                                                                                  const class GGS_bool & inOperand5,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_mIncrement ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                     const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                     const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                     const GGS_bool & in_mIncrement,
                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_IncDecRegisterTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (const class GGS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

  public: GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & operator = (const class GGS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak init_nil (void) {
    GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_IncDecRegisterTerminator bang_ipic_31__38_IncDecRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_IncDecRegisterTerminator unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_TestRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_TestRegisterTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_TestRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_TestRegisterTerminator (const class cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_TestRegisterTerminator init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                             const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_TestRegisterTerminator extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_TestRegisterTerminator class_func_new (const class GGS_location & inOperand0,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                             const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                             const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18TestRegisterTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_TestRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                       const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                       const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_TestRegisterTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_TestRegisterTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak (const class GGS_pic_31__38_TestRegisterTerminator & inSource) ;

  public: GGS_pic_31__38_TestRegisterTerminator_2E_weak & operator = (const class GGS_pic_31__38_TestRegisterTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_TestRegisterTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_TestRegisterTerminator bang_pic_31__38_TestRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_TestRegisterTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_TestRegisterTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_TestRegisterTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_TestRegisterTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BitTestTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestTerminator : public GGS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_BitTestTerminator (const class cPtr_pic_31__38_BitTestTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_BitTestTerminator init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                            const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                            const class GGS_uint & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_BitTestTerminator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestTerminator class_func_new (const class GGS_location & inOperand0,
                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                        const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                        const class GGS_uint & inOperand4,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18BitTestTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                      const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                      const class GGS_uint & inOperand4,
                                                                      Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestTerminator (const GGS_location & in_mInstructionLocation,
                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                             const GGS_uint & in_mBitNumber,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_BitTestTerminator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_BitTestTerminator_2E_weak : public GGS_ipic_31__38_AbstractConditionTerminator_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_BitTestTerminator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_BitTestTerminator_2E_weak (const class GGS_pic_31__38_BitTestTerminator & inSource) ;

  public: GGS_pic_31__38_BitTestTerminator_2E_weak & operator = (const class GGS_pic_31__38_BitTestTerminator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_BitTestTerminator_2E_weak init_nil (void) {
    GGS_pic_31__38_BitTestTerminator_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_BitTestTerminator bang_pic_31__38_BitTestTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_BitTestTerminator unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_BitTestTerminator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_BitTestTerminator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_BitTestTerminator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_InstructionWithNoOperand reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_InstructionWithNoOperand : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_InstructionWithNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_InstructionWithNoOperand (const class cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_InstructionWithNoOperand init_21__21_ (const class GGS_location & inOperand0,
                                                                        const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_InstructionWithNoOperand extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_InstructionWithNoOperand class_func_new (const class GGS_location & inOperand0,
                                                                                const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18InstructionWithNoOperand class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_InstructionWithNoOperand : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_InstructionWithNoOperand_init_21__21_ (const class GGS_location & inOperand0,
                                                                  const class GGS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (const GGS_location & in_mInstructionLocation,
                                                     const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_InstructionWithNoOperand_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_InstructionWithNoOperand_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (const class GGS_ipic_31__38_InstructionWithNoOperand & inSource) ;

  public: GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & operator = (const class GGS_ipic_31__38_InstructionWithNoOperand & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38_InstructionWithNoOperand_2E_weak init_nil (void) {
    GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38_InstructionWithNoOperand bang_ipic_31__38_InstructionWithNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38_InstructionWithNoOperand unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38_InstructionWithNoOperand_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_InstructionWithNoOperand_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18_intermediate_registerExpression isEqualToRegister' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isEqualToRegister (const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_bool & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class_func_new (const class GGS_location & inOperand0,
                                                                                              const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_bool & inOperand3,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FDA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_bool & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_sequential_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CLRF,
    enum_MOVWF,
    enum_MULWF,
    enum_NEGF,
    enum_SETF
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
  public: static GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSETF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                         const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA class_func_new (const class GGS_location & inOperand0,
                                                                                             const class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                             const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                   const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication : public AC_GALGAS_root {
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
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

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
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_string & in_mAssemblyString,
                                                                                      const GGS_uint & in_mRegisterAddress) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication init_21__21_ (const class GGS_string & inOperand0,
                                                                                                          const class GGS_uint & inOperand1,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GGS_object & inObject,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication class_func_new (const class GGS_string & inOperand0,
                                                                                                                  const class GGS_uint & inOperand1,
                                                                                                                  class Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mSourceRegisterDescription (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mDestinationRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class_func_new (const class GGS_location & inOperand0,
                                                                                                const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                                const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mSourceRegisterDescription ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mDestinationRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                     const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GGS_uint readProperty_mLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                       const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                       const class GGS_uint & inOperand2,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class_func_new (const class GGS_location & inOperand0,
                                                                                                           const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                           const class GGS_uint & inOperand2,
                                                                                                           class Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                 const class GGS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                 const class GGS_uint & inOperand2,
                                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GGS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                const GGS_uint & in_mLiteralValue,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mFSRindex (void) const ;

  public: class GGS_uint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                           const class GGS_luint & inOperand1,
                                                                                           const class GGS_uint & inOperand2,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_luint & inOperand1,
                                                                                               const class GGS_uint & inOperand2,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_LFSR class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                     const class GGS_luint & inOperand1,
                                                                                     const class GGS_uint & inOperand2,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mFSRindex ;
  public: GGS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mFSRindex,
                                                                    const GGS_uint & in_mValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                              const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class_func_new (const class GGS_location & inOperand0,
                                                                                              const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GGS_uint & inOperand3,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FBA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_bit_5F_oriented_5F_op & inOperand1,
                                                                                        const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GGS_uint & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_JSR : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR (const class cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTargetLabel (void) const ;

  public: class GGS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR init_21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_jumpInstructionKind & inOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_JSR class_func_new (const class GGS_location & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_jumpInstructionKind & inOperand2,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_JSR_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTargetLabel ;
  public: GGS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstring & in_mTargetLabel,
                                                    const GGS_jumpInstructionKind & in_mKind,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR bang_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_JSR unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBankIndex (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_luint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class_func_new (const class GGS_location & inOperand0,
                                                                                                const class GGS_luint & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVLB class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_luint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_luint & in_mBankIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBlankValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_uint & inOperand1,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_FNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_uint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_uint & in_mBlankValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_uint readProperty_mBlankValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class_func_new (const class GGS_location & inOperand0,
                                                                                                const class GGS_uint & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_BLANK class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_uint & in_mBlankValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_tableAccessOption & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class_func_new (const class GGS_location & inOperand0,
                                                                                                const class GGS_tableAccessOption & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_tableAccessOption & in_mOption,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT init_21__21_ (const class GGS_location & inOperand0,
                                                                                        const class GGS_tableAccessOption & inOperand1,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GGS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class_func_new (const class GGS_location & inOperand0,
                                                                                                const class GGS_tableAccessOption & inOperand1,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (const class GGS_location & inOperand0,
                                                                                  const class GGS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_tableAccessOption & in_mOption,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak extractObject (const GGS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_luint & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class_func_new (const class GGS_location & inOperand0,
                                                                                               const class GGS_luint & inOperand1,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_luint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA init_21__21_ (const class GGS_location & inOperand0,
                                                                                         const class GGS_luint & inOperand1,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class_func_new (const class GGS_location & inOperand0,
                                                                                                 const class GGS_luint & inOperand1,
                                                                                                 class Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_luint & inOperand1,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_luint & in_mOccurrenceFactor,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLabel (void) const ;

  public: class GGS_uint readProperty_mOffset (void) const ;

  public: class GGS_uint readProperty_mRightShift (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             const class GGS_uint & inOperand3,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class_func_new (const class GGS_location & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_uint & inOperand2,
                                                                                             const class GGS_uint & inOperand3,
                                                                                             class Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_MOV_LABEL_W class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_uint & inOperand2,
                                                                                       const class GGS_uint & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mLabel ;
  public: GGS_uint mProperty_mOffset ;
  public: GGS_uint mProperty_mRightShift ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_lstring & in_mLabel,
                                                                  const GGS_uint & in_mOffset,
                                                                  const GGS_uint & in_mRightShift,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SequentialInstructionList readProperty_mTargetInstructions (void) const ;

  public: class GGS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                        const class GGS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                        const class GGS_bool & inOperand2,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GGS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class_func_new (const class GGS_location & inOperand0,
                                                                                                            const class GGS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                            const class GGS_bool & inOperand2,
                                                                                                            class Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_intermediate_instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SequentialInstructionList mProperty_mTargetInstructions ;
  public: GGS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                 const GGS_bool & in_mUsesRCALL,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & operator = (const class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak extractObject (const GGS_object & inObject,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction : public GGS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SequentialInstruction readProperty_mEmbeddedInstruction (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction init_21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_condition_skip_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_condition_5F_skip_5F_instruction_init_21__21_ (const class GGS_location & inOperand0,
                                                                              const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SequentialInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
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
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak : public GGS_ipic_31__38_SequentialInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (const class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & operator = (const class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak extractObject (const GGS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mSkipIfSet (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_uint readProperty_mBitNumber (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                  const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                  const class GGS_bool & inOperand2,
                                                                                                  const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                  const class GGS_uint & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class_func_new (const class GGS_location & inOperand0,
                                                                                              const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                              const class GGS_bool & inOperand2,
                                                                                              const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                              const class GGS_uint & inOperand4,
                                                                                              class Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                            const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                            const class GGS_bool & inOperand2,
                                                                                            const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                            const class GGS_uint & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mSkipIfSet ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_uint & in_mBitNumber,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_CPFSEQ,
    enum_CPFSGT,
    enum_CPFSLT,
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
  public: static GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code readProperty_mCompareInstruction (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                      const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GGS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class_func_new (const class GGS_location & inOperand0,
                                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                      const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                      class Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_compare_register class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                                const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                const class GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mProperty_mCompareInstruction ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                           const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                           const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak extractObject (const GGS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum skip_5F_instruction_5F_FDA_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_DECFSZ,
    enum_DCFSNZ,
    enum_INCFSZ,
    enum_INFSNZ
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
  public: static GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DCFSNZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDCFSNZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GGS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GGS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                          const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                          const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                          const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                          const class GGS_bool & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class_func_new (const class GGS_location & inOperand0,
                                                                                      const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                      const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                      const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                      const class GGS_bool & inOperand4,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18_skip_instruction_FDA class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_FDA_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                    const class GGS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                    const class GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                    const class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                    const class GGS_bool & inOperand4,
                                                                                    Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GGS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GGS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                           const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                           const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                           const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GGS_bool & in_m_5F_W_5F_isDestination,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak : public GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & operator = (const class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak init_nil (void) {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA unwrappedValue (void) const ;

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
  public: static GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForBlockOptimization_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionBlockIndex ;
  public: inline GGS_uint readProperty_mDefinitionBlockIndex (void) const {
    return mProperty_mDefinitionBlockIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionBlockIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionBlockIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (const GGS_lstring & in_lkey,
                                                          const GGS_uint & in_mDefinitionBlockIndex) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForBlockOptimization_2E_element (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForBlockOptimization_2E_element & operator = (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForBlockOptimization_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_uint & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForBlockOptimization_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForBlockOptimization_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_uint & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForBlockOptimization.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForBlockOptimization_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForBlockOptimization_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForBlockOptimization_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForBlockOptimization_2E_element_3F_ (const GGS_symbolTableForBlockOptimization_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForBlockOptimization_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForBlockOptimization_2E_element unwrappedValue (void) const {
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
  public: static GGS_symbolTableForBlockOptimization_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForClusterOrdering final {

  public: DownEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inMap) ;

  public: ~ DownEnumerator_symbolTableForClusterOrdering (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForClusterOrdering (const DownEnumerator_symbolTableForClusterOrdering &) = delete ;
  private: DownEnumerator_symbolTableForClusterOrdering & operator = (const DownEnumerator_symbolTableForClusterOrdering &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForClusterOrdering final {
  public: UpEnumerator_symbolTableForClusterOrdering (const class GGS_symbolTableForClusterOrdering & inMap)  ;

  public: ~ UpEnumerator_symbolTableForClusterOrdering (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mCluster (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForClusterOrdering_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForClusterOrdering (const UpEnumerator_symbolTableForClusterOrdering &) = delete ;
  private: UpEnumerator_symbolTableForClusterOrdering & operator = (const UpEnumerator_symbolTableForClusterOrdering &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForClusterOrdering (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForClusterOrdering (void) ;

//--- Handle copy
  public: GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) ;
  public: GGS_symbolTableForClusterOrdering & operator = (const GGS_symbolTableForClusterOrdering & inSource) ;

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
  protected: void performInsert (const class GGS_symbolTableForClusterOrdering_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForClusterOrdering init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForClusterOrdering extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForClusterOrdering class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForClusterOrdering class_func_mapWithMapToOverride (const class GGS_symbolTableForClusterOrdering & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMClusterForKey (class GGS_uint constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mClusterForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForClusterOrdering getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForClusterOrdering_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForClusterOrdering ;
  friend class DownEnumerator_symbolTableForClusterOrdering ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForClusterOrdering_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mCluster ;
  public: inline GGS_uint readProperty_mCluster (void) const {
    return mProperty_mCluster ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMCluster (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCluster = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (const GGS_lstring & in_lkey,
                                                        const GGS_uint & in_mCluster) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForClusterOrdering_2E_element (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForClusterOrdering_2E_element & operator = (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForClusterOrdering_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForClusterOrdering_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForClusterOrdering_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_uint & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForClusterOrdering.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForClusterOrdering_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForClusterOrdering_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForClusterOrdering_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForClusterOrdering_2E_element_3F_ (const GGS_symbolTableForClusterOrdering_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForClusterOrdering_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForClusterOrdering_2E_element unwrappedValue (void) const {
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
  public: static GGS_symbolTableForClusterOrdering_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_stringlist mProperty_mList ;
  public: inline GGS_stringlist readProperty_mList (void) const {
    return mProperty_mList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMapDictionary_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchOverflowMapDictionary_2E_element (const GGS_string & in_key,
                                                      const GGS_stringlist & in_mList) ;

//--------------------------------- Copy constructor
  public: GGS_branchOverflowMapDictionary_2E_element (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchOverflowMapDictionary_2E_element & operator = (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMapDictionary_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                          const class GGS_stringlist & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMapDictionary_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMapDictionary_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                                  const class GGS_stringlist & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: branchOverflowMapDictionary.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_branchOverflowMapDictionary_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMapDictionary_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_branchOverflowMapDictionary_2E_element_3F_ (const GGS_branchOverflowMapDictionary_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_branchOverflowMapDictionary_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_branchOverflowMapDictionary_2E_element unwrappedValue (void) const {
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
  public: static GGS_branchOverflowMapDictionary_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_branchOverflowMapDictionary final {
  public: DownEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_branchOverflowMapDictionary (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
  private: DownEnumerator_branchOverflowMapDictionary & operator = (const DownEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_branchOverflowMapDictionary final {
  public: UpEnumerator_branchOverflowMapDictionary (const class GGS_branchOverflowMapDictionary & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_branchOverflowMapDictionary_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_branchOverflowMapDictionary (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
  private: UpEnumerator_branchOverflowMapDictionary & operator = (const UpEnumerator_branchOverflowMapDictionary &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMapDictionary dict
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMapDictionary final : public GenericDictionary <GGS_string, GGS_branchOverflowMapDictionary_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_branchOverflowMapDictionary (void) = default ;

//--------------------------------- Build
  protected: static GGS_branchOverflowMapDictionary builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMapDictionary init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMapDictionary extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMapDictionary class_func_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_stringlist & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_branchOverflowMapDictionary_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string constinArgument0,
                                               class GGS_stringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_string constinArgument0,
                                                  class GGS_stringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMListForKey (class GGS_stringlist constinArgument0,
                                                       class GGS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_string constinArgument0,
                                                  class GGS_stringlist & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringlist getter_mListForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_branchOverflowMapDictionary_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_branchOverflowMapDictionary ;
  friend class DownEnumerator_branchOverflowMapDictionary ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @branchOverflowMap struct
//--------------------------------------------------------------------------------------------------

class GGS_branchOverflowMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_branchOverflowMapDictionary mProperty_dictionary ;
  public: inline GGS_branchOverflowMapDictionary readProperty_dictionary (void) const {
    return mProperty_dictionary ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_branchOverflowMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setDictionary (const GGS_branchOverflowMapDictionary & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_dictionary = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_branchOverflowMap (const GGS_branchOverflowMapDictionary & in_dictionary) ;

//--------------------------------- Copy constructor
  public: GGS_branchOverflowMap (const GGS_branchOverflowMap & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_branchOverflowMap & operator = (const GGS_branchOverflowMap & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_branchOverflowMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_branchOverflowMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_branchOverflowMap class_func_new (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@branchOverflowMap listForKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_stringlist extensionGetter_listForKey (const class GGS_branchOverflowMap & inObject,
                                                 const class GGS_string & constinArgument0,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionRelativeBranchOverflow (class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const class GGS_uint constin_inAddress,
                                                            const class GGS_string constin_inBlockLabel,
                                                            const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            class GGS_branchOverflowMap & io_ioOverflowMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForRelativesResolution map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_symbolTableForRelativesResolution final {

  public: DownEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inMap) ;

  public: ~ DownEnumerator_symbolTableForRelativesResolution (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;

  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_symbolTableForRelativesResolution (const DownEnumerator_symbolTableForRelativesResolution &) = delete ;
  private: DownEnumerator_symbolTableForRelativesResolution & operator = (const DownEnumerator_symbolTableForRelativesResolution &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_symbolTableForRelativesResolution final {
  public: UpEnumerator_symbolTableForRelativesResolution (const class GGS_symbolTableForRelativesResolution & inMap)  ;

  public: ~ UpEnumerator_symbolTableForRelativesResolution (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLabelAddress (LOCATION_ARGS) const ;
  public: class GGS_symbolTableForRelativesResolution_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_symbolTableForRelativesResolution (const UpEnumerator_symbolTableForRelativesResolution &) = delete ;
  private: UpEnumerator_symbolTableForRelativesResolution & operator = (const UpEnumerator_symbolTableForRelativesResolution &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_symbolTableForRelativesResolution (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_symbolTableForRelativesResolution (void) ;

//--- Handle copy
  public: GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) ;
  public: GGS_symbolTableForRelativesResolution & operator = (const GGS_symbolTableForRelativesResolution & inSource) ;

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
  protected: void performInsert (const class GGS_symbolTableForRelativesResolution_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForRelativesResolution init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForRelativesResolution extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForRelativesResolution class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_symbolTableForRelativesResolution class_func_mapWithMapToOverride (const class GGS_symbolTableForRelativesResolution & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelAddressForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLabelAddressForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForRelativesResolution getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_symbolTableForRelativesResolution_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_symbolTableForRelativesResolution ;
  friend class DownEnumerator_symbolTableForRelativesResolution ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_terminatorRelativeBranchOverflow (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const class GGS_uint constin_inAddress,
                                                           const class GGS_string constin_inBlockLabel,
                                                           const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const class GGS_string constin_inNextBlockLabel,
                                                           class GGS_branchOverflowMap & io_ioOverflowMap,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performTerminatorRelativeBranchResolution (class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const class GGS_uint constin_inAddress,
                                                                    const class GGS_string constin_inBlockLabel,
                                                                    const class GGS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const class GGS_string constin_inNextBlockLabel,
                                                                    class GGS_uint & io_ioConversionCount,
                                                                    class GGS_string & io_ioListFileContents,
                                                                    class GGS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @symbolTableForRelativesResolution_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mLabelAddress ;
  public: inline GGS_uint readProperty_mLabelAddress (void) const {
    return mProperty_mLabelAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (const GGS_lstring & in_lkey,
                                                            const GGS_uint & in_mLabelAddress) ;

//--------------------------------- Copy constructor
  public: GGS_symbolTableForRelativesResolution_2E_element (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_symbolTableForRelativesResolution_2E_element & operator = (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_symbolTableForRelativesResolution_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_uint & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_symbolTableForRelativesResolution_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_symbolTableForRelativesResolution_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: symbolTableForRelativesResolution.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_symbolTableForRelativesResolution_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_symbolTableForRelativesResolution_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_symbolTableForRelativesResolution_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_symbolTableForRelativesResolution_2E_element_3F_ (const GGS_symbolTableForRelativesResolution_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_symbolTableForRelativesResolution_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_symbolTableForRelativesResolution_2E_element unwrappedValue (void) const {
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
  public: static GGS_symbolTableForRelativesResolution_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_codeList final {
  public: DownEnumerator_codeList (const class GGS_codeList & inList) ;

  public: ~ DownEnumerator_codeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_codeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_codeList (const DownEnumerator_codeList &) = delete ;
  private: DownEnumerator_codeList & operator = (const DownEnumerator_codeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_codeList final {
  public: UpEnumerator_codeList (const class GGS_codeList & inList)  ;

  public: ~ UpEnumerator_codeList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_codeList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_codeList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_codeList (const UpEnumerator_codeList &) = delete ;
  private: UpEnumerator_codeList & operator = (const UpEnumerator_codeList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @codeList list
//--------------------------------------------------------------------------------------------------

class GGS_codeList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_codeList_2E_element> mArray ;

//--- Default constructor
  public: GGS_codeList (void) ;

//--- Destructor
  public: virtual ~ GGS_codeList (void) = default ;

//--- Copy
  public: GGS_codeList (const GGS_codeList &) = default ;
  public: GGS_codeList & operator = (const GGS_codeList &) = default ;

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
  public : inline GenericArray <GGS_codeList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_codeList subList (const int32_t inStart,
                                 const int32_t inLength,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_codeList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mAssemblyCode,
                                                 const class GGS_uintlist & in_mBinaryCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_codeList init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_codeList extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_codeList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_codeList class_func_listWithValue (const class GGS_string & inOperand0,
                                                              const class GGS_uintlist & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_codeList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_uintlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_codeList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_codeList add_operation (const GGS_codeList & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_uintlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uintlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_uintlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_uintlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uintlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssemblyCodeAtIndex (class GGS_string constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBinaryCodeAtIndex (class GGS_uintlist constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_uintlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_uintlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAssemblyCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mBinaryCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_codeList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_codeList ;
  friend class DownEnumerator_codeList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @codeList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_codeList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mAssemblyCode ;
  public: inline GGS_string readProperty_mAssemblyCode (void) const {
    return mProperty_mAssemblyCode ;
  }

  public: GGS_uintlist mProperty_mBinaryCode ;
  public: inline GGS_uintlist readProperty_mBinaryCode (void) const {
    return mProperty_mBinaryCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_codeList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyCode (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyCode = inValue ;
  }

  public: inline void setter_setMBinaryCode (const GGS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBinaryCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_codeList_2E_element (const GGS_string & in_mAssemblyCode,
                                   const GGS_uintlist & in_mBinaryCode) ;

//--------------------------------- Copy constructor
  public: GGS_codeList_2E_element (const GGS_codeList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_codeList_2E_element & operator = (const GGS_codeList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_codeList_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                       const class GGS_uintlist & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_codeList_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_codeList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                               const class GGS_uintlist & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList_2E_element ;

