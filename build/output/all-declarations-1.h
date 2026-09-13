#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_PiccoloInstruction (const class cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_PiccoloInstruction init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_PiccoloInstruction extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18PiccoloInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_PiccoloInstruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_PiccoloInstruction_init_21_ (const class GGS_location & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performInlining
  public: virtual void method_performInlining (const class GGS_stringset arg_inInlinedRoutineSet,
           const class GGS_declaredRoutineMap arg_inDeclaredRoutineMap,
           const class GGS_stringset arg_inCurrentlyInlinedRoutineSet,
           class GGS_pic_31__38_InstructionList & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_PiccoloInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_PiccoloInstruction (const GGS_location & in_mInstructionLocation,
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
// Phase 1: @pic_31__38_InstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_InstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_pic_31__38_PiccoloInstruction mProperty_mInstruction ;
  public: inline GGS_pic_31__38_PiccoloInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_InstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_pic_31__38_PiccoloInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_InstructionList_2E_element (const GGS_pic_31__38_InstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_InstructionList_2E_element & operator = (const GGS_pic_31__38_InstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_InstructionList_2E_element init_21_ (const class GGS_pic_31__38_PiccoloInstruction & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_InstructionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_PiccoloInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_PiccoloInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_PiccoloInstruction_2E_weak (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

  public: GGS_pic_31__38_PiccoloInstruction_2E_weak & operator = (const class GGS_pic_31__38_PiccoloInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_PiccoloInstruction_2E_weak init_nil (void) {
    GGS_pic_31__38_PiccoloInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_PiccoloInstruction bang_pic_31__38_PiccoloInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_pic_31__38_PiccoloInstruction unwrappedValue (void) const ;

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
  public: static GGS_pic_31__38_PiccoloInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_PiccoloInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_PiccoloInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @caseConstantMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_caseConstantMap final {

  public: DownEnumerator_caseConstantMap (const class GGS_caseConstantMap & inMap) ;

  public: ~ DownEnumerator_caseConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_caseConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_caseConstantMap (const DownEnumerator_caseConstantMap &) = delete ;
  private: DownEnumerator_caseConstantMap & operator = (const DownEnumerator_caseConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_caseConstantMap final {
  public: UpEnumerator_caseConstantMap (const class GGS_caseConstantMap & inMap)  ;

  public: ~ UpEnumerator_caseConstantMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_caseConstantMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_caseConstantMap (const UpEnumerator_caseConstantMap &) = delete ;
  private: UpEnumerator_caseConstantMap & operator = (const UpEnumerator_caseConstantMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_caseConstantMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_caseConstantMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_caseConstantMap (void) ;

//--- Handle copy
  public: GGS_caseConstantMap (const GGS_caseConstantMap & inSource) ;
  public: GGS_caseConstantMap & operator = (const GGS_caseConstantMap & inSource) ;

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
  protected: void performInsert (const class GGS_caseConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_caseConstantMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_caseConstantMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_caseConstantMap class_func_mapWithMapToOverride (const class GGS_caseConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
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

  public: class GGS_caseConstantMap getter_overriddenMap (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_caseConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_caseConstantMap ;
  friend class DownEnumerator_caseConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @caseConstantMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_caseConstantMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_caseConstantMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_caseConstantMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_caseConstantMap_2E_element (const GGS_caseConstantMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_caseConstantMap_2E_element & operator = (const GGS_caseConstantMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_caseConstantMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_caseConstantMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: caseConstantMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_caseConstantMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_caseConstantMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_caseConstantMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_caseConstantMap_2E_element_3F_ (const GGS_caseConstantMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_caseConstantMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_caseConstantMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_caseConstantMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCaseItem (class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const class GGS_registerTable constin_inRegisterTable,
                                          const class GGS_constantMap constin_inConstantMap,
                                          const class GGS_lstring constin_inConditionTrueLabel,
                                          const class GGS_string constin_inIndexForLabels,
                                          class GGS_stringset & io_ioUsedRegisters,
                                          class GGS_caseConstantMap & io_ioCaseConstantMap,
                                          class GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          class GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          class GGS_lstring & io_ioBlockLabel,
                                          class GGS_sint_36__34_ & io_ioLastComparisonValue,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_BlockList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ipic_31__38_BlockList final {
  public: DownEnumerator_ipic_31__38_BlockList (const class GGS_ipic_31__38_BlockList & inList) ;

  public: ~ DownEnumerator_ipic_31__38_BlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_BlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ipic_31__38_BlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ipic_31__38_BlockList (const DownEnumerator_ipic_31__38_BlockList &) = delete ;
  private: DownEnumerator_ipic_31__38_BlockList & operator = (const DownEnumerator_ipic_31__38_BlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ipic_31__38_BlockList final {
  public: UpEnumerator_ipic_31__38_BlockList (const class GGS_ipic_31__38_BlockList & inList)  ;

  public: ~ UpEnumerator_ipic_31__38_BlockList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_BlockList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ipic_31__38_BlockList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ipic_31__38_BlockList (const UpEnumerator_ipic_31__38_BlockList &) = delete ;
  private: UpEnumerator_ipic_31__38_BlockList & operator = (const UpEnumerator_ipic_31__38_BlockList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ipic18BlockList list
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_BlockList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ipic_31__38_BlockList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ipic_31__38_BlockList (void) ;

//--- Destructor
  public: virtual ~ GGS_ipic_31__38_BlockList (void) = default ;

//--- Copy
  public: GGS_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList &) = default ;
  public: GGS_ipic_31__38_BlockList & operator = (const GGS_ipic_31__38_BlockList &) = default ;

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
  public : inline GenericArray <GGS_ipic_31__38_BlockList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ipic_31__38_BlockList subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ipic_31__38_BlockList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_ipic_31__38_Block & in_mBlock
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_BlockList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_BlockList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_BlockList class_func_listWithValue (const class GGS_ipic_31__38_Block & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ipic_31__38_BlockList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_ipic_31__38_Block & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ipic_31__38_BlockList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ipic_31__38_BlockList add_operation (const GGS_ipic_31__38_BlockList & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_ipic_31__38_Block constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_ipic_31__38_Block constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_ipic_31__38_Block & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_ipic_31__38_Block & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_ipic_31__38_Block & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBlockAtIndex (class GGS_ipic_31__38_Block constinArgument0,
                                        class GGS_uint constinArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_ipic_31__38_Block & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_ipic_31__38_Block & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_Block getter_mBlockAtIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_BlockList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_BlockList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_ipic_31__38_BlockList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ipic_31__38_BlockList ;
  friend class DownEnumerator_ipic_31__38_BlockList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE piccoloDevice_5F_lexique
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

class cTokenFor_piccoloDevice_5F_lexique : public cToken {
  public: utf32 mLexicalAttribute_charValue ;
  public: String mLexicalAttribute_identifierString ;
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_piccoloDevice_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_piccoloDevice_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_piccoloDevice_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_integer = 2 ;
  public: static const int32_t kToken_string = 3 ;
  public: static const int32_t kToken_comment = 4 ;
  public: static const int32_t kToken_controller = 5 ;
  public: static const int32_t kToken_processor = 6 ;
  public: static const int32_t kToken_romsize = 7 ;
  public: static const int32_t kToken_eepromsize = 8 ;
  public: static const int32_t kToken_bank = 9 ;
  public: static const int32_t kToken_unusedregister = 10 ;
  public: static const int32_t kToken_mirrorat = 11 ;
  public: static const int32_t kToken_ram = 12 ;
  public: static const int32_t kToken_register = 13 ;
  public: static const int32_t kToken_at = 14 ;
  public: static const int32_t kToken_to = 15 ;
  public: static const int32_t kToken_configuration = 16 ;
  public: static const int32_t kToken_width = 17 ;
  public: static const int32_t kToken_description = 18 ;
  public: static const int32_t kToken_mask = 19 ;
  public: static const int32_t kToken_illegal = 20 ;
  public: static const int32_t kToken_message = 21 ;
  public: static const int32_t kToken_setting = 22 ;
  public: static const int32_t kToken__3C_ = 23 ;
  public: static const int32_t kToken__3E_ = 24 ;
  public: static const int32_t kToken__2C_ = 25 ;
  public: static const int32_t kToken__2D_ = 26 ;
  public: static const int32_t kToken__2F_ = 27 ;
  public: static const int32_t kToken__3B_ = 28 ;
  public: static const int32_t kToken__3A_ = 29 ;
  public: static const int32_t kToken__5B_ = 30 ;
  public: static const int32_t kToken__5D_ = 31 ;
  public: static const int32_t kToken__7B_ = 32 ;
  public: static const int32_t kToken__7D_ = 33 ;

//--- Key words table 'controlKeyWordList'
  public: static int32_t search_into_controlKeyWordList (const String & inSearchedString) ;

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

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_piccoloDevice_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 33 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_piccoloDevice_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineSymbolTableForOptimizations map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_baselineSymbolTableForOptimizations final {

  public: DownEnumerator_baselineSymbolTableForOptimizations (const class GGS_baselineSymbolTableForOptimizations & inMap) ;

  public: ~ DownEnumerator_baselineSymbolTableForOptimizations (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;

  public: class GGS_baselineSymbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_baselineSymbolTableForOptimizations (const DownEnumerator_baselineSymbolTableForOptimizations &) = delete ;
  private: DownEnumerator_baselineSymbolTableForOptimizations & operator = (const DownEnumerator_baselineSymbolTableForOptimizations &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_baselineSymbolTableForOptimizations final {
  public: UpEnumerator_baselineSymbolTableForOptimizations (const class GGS_baselineSymbolTableForOptimizations & inMap)  ;

  public: ~ UpEnumerator_baselineSymbolTableForOptimizations (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
  public: class GGS_baselineSymbolTableForOptimizations_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_baselineSymbolTableForOptimizations (const UpEnumerator_baselineSymbolTableForOptimizations &) = delete ;
  private: UpEnumerator_baselineSymbolTableForOptimizations & operator = (const UpEnumerator_baselineSymbolTableForOptimizations &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_baselineSymbolTableForOptimizations_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_baselineSymbolTableForOptimizations (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_baselineSymbolTableForOptimizations (void) ;

//--- Handle copy
  public: GGS_baselineSymbolTableForOptimizations (const GGS_baselineSymbolTableForOptimizations & inSource) ;
  public: GGS_baselineSymbolTableForOptimizations & operator = (const GGS_baselineSymbolTableForOptimizations & inSource) ;

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
  protected: void performInsert (const class GGS_baselineSymbolTableForOptimizations_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_baselineSymbolTableForOptimizations_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineSymbolTableForOptimizations init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineSymbolTableForOptimizations extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baselineSymbolTableForOptimizations class_func_mapWithMapToOverride (const class GGS_baselineSymbolTableForOptimizations & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
                                 class GGS_uint & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefinitionLineIndexForKey (class GGS_uint constinArgument0,
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

  public: class GGS_uint getter_mDefinitionLineIndexForKey (const class GGS_string & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_baselineSymbolTableForOptimizations getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_baselineSymbolTableForOptimizations_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_baselineSymbolTableForOptimizations ;
  friend class DownEnumerator_baselineSymbolTableForOptimizations ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baselineSymbolTableForOptimizations_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mDefinitionLineIndex ;
  public: inline GGS_uint readProperty_mDefinitionLineIndex (void) const {
    return mProperty_mDefinitionLineIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionLineIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLineIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_lstring & in_lkey,
                                                              const GGS_uint & in_mDefinitionLineIndex) ;

//--------------------------------- Copy constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baselineSymbolTableForOptimizations_2E_element & operator = (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baselineSymbolTableForOptimizations_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_uint & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baselineSymbolTableForOptimizations_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: baselineSymbolTableForOptimizations.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_baselineSymbolTableForOptimizations_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_baselineSymbolTableForOptimizations_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_baselineSymbolTableForOptimizations_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_baselineSymbolTableForOptimizations_2E_element unwrappedValue (void) const {
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
  public: static GGS_baselineSymbolTableForOptimizations_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_intermediate_5F_instruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_baseline_5F_intermediate_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_baseline_5F_intermediate_5F_instruction (const class cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_intermediate_5F_instruction init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_intermediate_5F_instruction extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_baseline_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @baseline_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_intermediate_5F_instruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void baseline_5F_intermediate_5F_instruction_init (Compiler * inCompiler) ;


//--- Extension getter isLABEL
  public: virtual class GGS_bool getter_isLABEL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isNULL
  public: virtual class GGS_bool getter_isNULL (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isSkippingInstruction
  public: virtual class GGS_bool getter_isSkippingInstruction (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter length
  public: virtual class GGS_uint getter_length (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter nextInstructionIsReachable
  public: virtual class GGS_bool getter_nextInstructionIsReachable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method defineLabel
  public: virtual void method_defineLabel (class GGS_baselineSymbolTableForOptimizations & arg_ioRoutineSymbolTable,
           const class GGS_uint arg_inLineIndex,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterReferencedLabel
  public: virtual void method_enterReferencedLabel (class GGS_stringset & arg_ioReferencedLabelSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateAssemblyCode
  public: virtual void method_generateAssemblyCode (const class GGS_baseline_5F_intermediate_5F_registerExpression arg_inSTATUSregister,
           const class GGS_bitSliceTable arg_inStatusRegisterBitSliceTable,
           class GGS_baseline_5F_assembly_5F_instructionList & arg_ioAssemblyInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method print
  public: virtual void method_print (class GGS_string & arg_ioListFileContents,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method setCurrentAddress
  public: virtual void method_setCurrentAddress (class GGS_uint & arg_ioCurrentWordAdress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties



//--- Constructor
  public: cPtr_baseline_5F_intermediate_5F_instruction (Compiler * inCompiler
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
//Extension getter '@baseline_intermediate_instruction isLABEL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

class GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               class GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_intermediate_instruction defineLabel'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      class GGS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const class GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_registerExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_registerExpression (const class cPtr_registerExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterName (void) const ;

  public: class GGS_immediatExpression readProperty_mOffset (void) const ;

  public: class GGS_location readProperty_mEndOfOffsetExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerExpression init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_immediatExpression & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @registerExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_registerExpression : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void registerExpression_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_immediatExpression & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeRegisterExpression
  public: virtual void method_analyzeRegisterExpression (const class GGS_uint arg_inAccessBankSplitOffset,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_ipic_31__38__5F_intermediate_5F_registerExpression & arg_outIPICregisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method analyzeRegisterExpressionWithoutCheckingBank
  public: virtual void method_analyzeRegisterExpressionWithoutCheckingBank (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & arg_outIPICregisterDescription,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method getRegisterAddress
  public: virtual void method_getRegisterAddress (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_bool arg_inWriteAccess,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_uint & arg_outRegisterAddress,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveBaselineAccess
  public: virtual void method_resolveBaselineAccess (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_baseline_5F_intermediate_5F_registerExpression & arg_outIntermediateRegisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method resolveMidrangeAccess
  public: virtual void method_resolveMidrangeAccess (const class GGS_uint arg_inTotalBankCount,
           const class GGS_uint arg_inCurrentBank,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_midrange_5F_intermediate_5F_registerExpression & arg_outIPICregisterDescription,
           class GGS_bitSliceTable & arg_outBitSliceTable,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_immediatExpression mProperty_mOffset ;
  public: GGS_location mProperty_mEndOfOffsetExpression ;


//--- Default constructor
  public: cPtr_registerExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_registerExpression (const GGS_lstring & in_mRegisterName,
                                   const GGS_immediatExpression & in_mOffset,
                                   const GGS_location & in_mEndOfOffsetExpression,
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
// Phase 1: @registerExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_registerExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_registerExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_registerExpression_2E_weak (const class GGS_registerExpression & inSource) ;

  public: GGS_registerExpression_2E_weak & operator = (const class GGS_registerExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_registerExpression_2E_weak init_nil (void) {
    GGS_registerExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_registerExpression bang_registerExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_registerExpression unwrappedValue (void) const ;

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
  public: static GGS_registerExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_registerExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationInRam reference class
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRam : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_declarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_declarationInRam (const class cPtr_declarationInRam * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRam init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRam extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_declarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRam ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @declarationInRam class
//--------------------------------------------------------------------------------------------------

class cPtr_declarationInRam : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void declarationInRam_init (Compiler * inCompiler) ;


//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ramBankTable & arg_ioRamBank,
           class GGS_registerTable & arg_ioRegisterTable,
           const class GGS_lstring arg_inCurrentRamBank,
           class GGS_declaredByteMap & arg_ioDeclaredByteMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_declarationInRam (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationInRam_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRam_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_declarationInRam_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_declarationInRam_2E_weak (const class GGS_declarationInRam & inSource) ;

  public: GGS_declarationInRam_2E_weak & operator = (const class GGS_declarationInRam & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_declarationInRam_2E_weak init_nil (void) {
    GGS_declarationInRam_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_declarationInRam bang_declarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_declarationInRam unwrappedValue (void) const ;

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
  public: static GGS_declarationInRam_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationInRam_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_declarationInRam_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRam_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @byteDeclarationInRam reference class
//--------------------------------------------------------------------------------------------------

class GGS_byteDeclarationInRam : public GGS_declarationInRam {
//--------------------------------- Default constructor
  public: GGS_byteDeclarationInRam (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_byteDeclarationInRam (const class cPtr_byteDeclarationInRam * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mName (void) const ;

  public: class GGS_immediatExpression readProperty_mSizeExpression (void) const ;

  public: class GGS_bitSliceTable readProperty_mBitSliceTable (void) const ;

  public: class GGS_string readProperty_mBitDefinitionString (void) const ;

  public: class GGS_registerProtection readProperty_mProtection (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_byteDeclarationInRam init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_immediatExpression & inOperand1,
                                                                    const class GGS_bitSliceTable & inOperand2,
                                                                    const class GGS_string & inOperand3,
                                                                    const class GGS_registerProtection & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_byteDeclarationInRam extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_byteDeclarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @byteDeclarationInRam class
//--------------------------------------------------------------------------------------------------

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void byteDeclarationInRam_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              const class GGS_bitSliceTable & inOperand2,
                                                              const class GGS_string & inOperand3,
                                                              const class GGS_registerProtection & inOperand4,
                                                              Compiler * inCompiler) ;


//--- Extension method handleDeclaration
  public: virtual void method_handleDeclaration (const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_ramBankTable & arg_ioRamBank,
           class GGS_registerTable & arg_ioRegisterTable,
           const class GGS_lstring arg_inCurrentRamBank,
           class GGS_declaredByteMap & arg_ioDeclaredByteMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mName ;
  public: GGS_immediatExpression mProperty_mSizeExpression ;
  public: GGS_bitSliceTable mProperty_mBitSliceTable ;
  public: GGS_string mProperty_mBitDefinitionString ;
  public: GGS_registerProtection mProperty_mProtection ;


//--- Default constructor
  public: cPtr_byteDeclarationInRam (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_byteDeclarationInRam (const GGS_lstring & in_mName,
                                     const GGS_immediatExpression & in_mSizeExpression,
                                     const GGS_bitSliceTable & in_mBitSliceTable,
                                     const GGS_string & in_mBitDefinitionString,
                                     const GGS_registerProtection & in_mProtection,
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
// Phase 1: @byteDeclarationInRam_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_byteDeclarationInRam_2E_weak : public GGS_declarationInRam_2E_weak {
//--------------------------------- Default constructor
  public: GGS_byteDeclarationInRam_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_byteDeclarationInRam_2E_weak (const class GGS_byteDeclarationInRam & inSource) ;

  public: GGS_byteDeclarationInRam_2E_weak & operator = (const class GGS_byteDeclarationInRam & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_byteDeclarationInRam_2E_weak init_nil (void) {
    GGS_byteDeclarationInRam_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_byteDeclarationInRam bang_byteDeclarationInRam_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_byteDeclarationInRam unwrappedValue (void) const ;

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
  public: static GGS_byteDeclarationInRam_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_byteDeclarationInRam_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_byteDeclarationInRam_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_byteDeclarationInRam_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationInRamList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_declarationInRamList final {
  public: DownEnumerator_declarationInRamList (const class GGS_declarationInRamList & inList) ;

  public: ~ DownEnumerator_declarationInRamList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_declarationInRam current_mDeclarationInRAM (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationInRamList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationInRamList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_declarationInRamList (const DownEnumerator_declarationInRamList &) = delete ;
  private: DownEnumerator_declarationInRamList & operator = (const DownEnumerator_declarationInRamList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_declarationInRamList final {
  public: UpEnumerator_declarationInRamList (const class GGS_declarationInRamList & inList)  ;

  public: ~ UpEnumerator_declarationInRamList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_declarationInRam current_mDeclarationInRAM (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_declarationInRamList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_declarationInRamList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_declarationInRamList (const UpEnumerator_declarationInRamList &) = delete ;
  private: UpEnumerator_declarationInRamList & operator = (const UpEnumerator_declarationInRamList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @declarationInRamList list
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRamList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_declarationInRamList_2E_element> mArray ;

//--- Default constructor
  public: GGS_declarationInRamList (void) ;

//--- Destructor
  public: virtual ~ GGS_declarationInRamList (void) = default ;

//--- Copy
  public: GGS_declarationInRamList (const GGS_declarationInRamList &) = default ;
  public: GGS_declarationInRamList & operator = (const GGS_declarationInRamList &) = default ;

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
  public : inline GenericArray <GGS_declarationInRamList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_declarationInRamList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_declarationInRamList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_declarationInRam & in_mDeclarationInRAM
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRamList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRamList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_declarationInRamList class_func_listWithValue (const class GGS_declarationInRam & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_declarationInRamList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_declarationInRam & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_declarationInRamList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_declarationInRamList add_operation (const GGS_declarationInRamList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_declarationInRam constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_declarationInRam constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_declarationInRam & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_declarationInRam & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_declarationInRam & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationInRAMAtIndex (class GGS_declarationInRam constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_declarationInRam & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_declarationInRam & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_declarationInRam getter_mDeclarationInRAMAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_declarationInRamList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationInRamList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationInRamList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_declarationInRamList ;
  friend class DownEnumerator_declarationInRamList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRamList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @declarationInRamList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_declarationInRamList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationInRam mProperty_mDeclarationInRAM ;
  public: inline GGS_declarationInRam readProperty_mDeclarationInRAM (void) const {
    return mProperty_mDeclarationInRAM ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_declarationInRamList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationInRAM (const GGS_declarationInRam & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationInRAM = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_declarationInRamList_2E_element (const GGS_declarationInRam & in_mDeclarationInRAM) ;

//--------------------------------- Copy constructor
  public: GGS_declarationInRamList_2E_element (const GGS_declarationInRamList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_declarationInRamList_2E_element & operator = (const GGS_declarationInRamList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_declarationInRamList_2E_element init_21_ (const class GGS_declarationInRam & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_declarationInRamList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRamList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ramDefinitionList final {
  public: DownEnumerator_ramDefinitionList (const class GGS_ramDefinitionList & inList) ;

  public: ~ DownEnumerator_ramDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GGS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ramDefinitionList (const DownEnumerator_ramDefinitionList &) = delete ;
  private: DownEnumerator_ramDefinitionList & operator = (const DownEnumerator_ramDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ramDefinitionList final {
  public: UpEnumerator_ramDefinitionList (const class GGS_ramDefinitionList & inList)  ;

  public: ~ UpEnumerator_ramDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mBankName (LOCATION_ARGS) const ;
  public: class GGS_declarationInRamList current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ramDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ramDefinitionList (const UpEnumerator_ramDefinitionList &) = delete ;
  private: UpEnumerator_ramDefinitionList & operator = (const UpEnumerator_ramDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @ramDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_ramDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_ramDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_ramDefinitionList (void) = default ;

//--- Copy
  public: GGS_ramDefinitionList (const GGS_ramDefinitionList &) = default ;
  public: GGS_ramDefinitionList & operator = (const GGS_ramDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_ramDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_ramDefinitionList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_ramDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mBankName,
                                                 const class GGS_declarationInRamList & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_declarationInRamList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_ramDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_declarationInRamList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_ramDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_ramDefinitionList add_operation (const GGS_ramDefinitionList & inOperand,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_declarationInRamList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_declarationInRamList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_declarationInRamList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_declarationInRamList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_declarationInRamList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMBankNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMDeclarationAtIndex (class GGS_declarationInRamList constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_declarationInRamList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_declarationInRamList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mBankNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationInRamList getter_mDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_ramDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_ramDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_ramDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ramDefinitionList ;
  friend class DownEnumerator_ramDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ramDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mBankName ;
  public: inline GGS_lstring readProperty_mBankName (void) const {
    return mProperty_mBankName ;
  }

  public: GGS_declarationInRamList mProperty_mDeclaration ;
  public: inline GGS_declarationInRamList readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ramDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBankName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankName = inValue ;
  }

  public: inline void setter_setMDeclaration (const GGS_declarationInRamList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ramDefinitionList_2E_element (const GGS_lstring & in_mBankName,
                                            const GGS_declarationInRamList & in_mDeclaration) ;

//--------------------------------- Copy constructor
  public: GGS_ramDefinitionList_2E_element (const GGS_ramDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ramDefinitionList_2E_element & operator = (const GGS_ramDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_declarationInRamList & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramDefinitionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configSettingList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_configSettingList final {
  public: DownEnumerator_configSettingList (const class GGS_configSettingList & inList) ;

  public: ~ DownEnumerator_configSettingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configSettingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configSettingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configSettingList (const DownEnumerator_configSettingList &) = delete ;
  private: DownEnumerator_configSettingList & operator = (const DownEnumerator_configSettingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configSettingList final {
  public: UpEnumerator_configSettingList (const class GGS_configSettingList & inList)  ;

  public: ~ UpEnumerator_configSettingList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSettingName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSettingValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configSettingList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configSettingList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configSettingList (const UpEnumerator_configSettingList &) = delete ;
  private: UpEnumerator_configSettingList & operator = (const UpEnumerator_configSettingList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @configSettingList list
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_configSettingList_2E_element> mArray ;

//--- Default constructor
  public: GGS_configSettingList (void) ;

//--- Destructor
  public: virtual ~ GGS_configSettingList (void) = default ;

//--- Copy
  public: GGS_configSettingList (const GGS_configSettingList &) = default ;
  public: GGS_configSettingList & operator = (const GGS_configSettingList &) = default ;

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
  public : inline GenericArray <GGS_configSettingList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_configSettingList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_configSettingList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSettingName,
                                                 const class GGS_lstring & in_mSettingValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configSettingList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_configSettingList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_configSettingList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_configSettingList add_operation (const GGS_configSettingList & inOperand,
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

  public: void setter_setMSettingNameAtIndex (class GGS_lstring constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMSettingValueAtIndex (class GGS_lstring constinArgument0,
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

  public: class GGS_lstring getter_mSettingNameAtIndex (const class GGS_uint & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSettingValueAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_configSettingList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_configSettingList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_configSettingList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configSettingList ;
  friend class DownEnumerator_configSettingList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configSettingList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configSettingList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSettingName ;
  public: inline GGS_lstring readProperty_mSettingName (void) const {
    return mProperty_mSettingName ;
  }

  public: GGS_lstring mProperty_mSettingValue ;
  public: inline GGS_lstring readProperty_mSettingValue (void) const {
    return mProperty_mSettingValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configSettingList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSettingName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingName = inValue ;
  }

  public: inline void setter_setMSettingValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configSettingList_2E_element (const GGS_lstring & in_mSettingName,
                                            const GGS_lstring & in_mSettingValue) ;

//--------------------------------- Copy constructor
  public: GGS_configSettingList_2E_element (const GGS_configSettingList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configSettingList_2E_element & operator = (const GGS_configSettingList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configSettingList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configSettingList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_configDefinitionList final {
  public: DownEnumerator_configDefinitionList (const class GGS_configDefinitionList & inList) ;

  public: ~ DownEnumerator_configDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GGS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configDefinitionList (const DownEnumerator_configDefinitionList &) = delete ;
  private: DownEnumerator_configDefinitionList & operator = (const DownEnumerator_configDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configDefinitionList final {
  public: UpEnumerator_configDefinitionList (const class GGS_configDefinitionList & inList)  ;

  public: ~ UpEnumerator_configDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mDefinitionLocation (LOCATION_ARGS) const ;
  public: class GGS_configSettingList current_mSettingList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_configDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configDefinitionList (const UpEnumerator_configDefinitionList &) = delete ;
  private: UpEnumerator_configDefinitionList & operator = (const UpEnumerator_configDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @configDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_configDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_configDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_configDefinitionList (void) = default ;

//--- Copy
  public: GGS_configDefinitionList (const GGS_configDefinitionList &) = default ;
  public: GGS_configDefinitionList & operator = (const GGS_configDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_configDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_configDefinitionList subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_configDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_location & in_mDefinitionLocation,
                                                 const class GGS_configSettingList & in_mSettingList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configDefinitionList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                          const class GGS_configSettingList & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_configDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_location & inOperand0,
                                   const class GGS_configSettingList & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_configDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_configDefinitionList add_operation (const GGS_configDefinitionList & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_location constinArgument0,
                              class GGS_configSettingList constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_location constinArgument0,
                                     class GGS_configSettingList constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_location & outArgument0,
                                class GGS_configSettingList & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_location & outArgument0,
                               class GGS_configSettingList & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_location & outArgument0,
                                     class GGS_configSettingList & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDefinitionLocationAtIndex (class GGS_location constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMSettingListAtIndex (class GGS_configSettingList constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_location & outArgument0,
                             class GGS_configSettingList & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_location & outArgument0,
                            class GGS_configSettingList & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mDefinitionLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_configSettingList getter_mSettingListAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_configDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_configDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_configDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configDefinitionList ;
  friend class DownEnumerator_configDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_configDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mDefinitionLocation ;
  public: inline GGS_location readProperty_mDefinitionLocation (void) const {
    return mProperty_mDefinitionLocation ;
  }

  public: GGS_configSettingList mProperty_mSettingList ;
  public: inline GGS_configSettingList readProperty_mSettingList (void) const {
    return mProperty_mSettingList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_configDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDefinitionLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionLocation = inValue ;
  }

  public: inline void setter_setMSettingList (const GGS_configSettingList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSettingList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_configDefinitionList_2E_element (const GGS_location & in_mDefinitionLocation,
                                               const GGS_configSettingList & in_mSettingList) ;

//--------------------------------- Copy constructor
  public: GGS_configDefinitionList_2E_element (const GGS_configDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_configDefinitionList_2E_element & operator = (const GGS_configDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configDefinitionList_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_configSettingList & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configDefinitionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_immediatExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatExpression_2E_weak (const class GGS_immediatExpression & inSource) ;

  public: GGS_immediatExpression_2E_weak & operator = (const class GGS_immediatExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatExpression_2E_weak init_nil (void) {
    GGS_immediatExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatExpression bang_immediatExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatExpression unwrappedValue (void) const ;

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
  public: static GGS_immediatExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_immediatExpressionList final {
  public: DownEnumerator_immediatExpressionList (const class GGS_immediatExpressionList & inList) ;

  public: ~ DownEnumerator_immediatExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_immediatExpressionList (const DownEnumerator_immediatExpressionList &) = delete ;
  private: DownEnumerator_immediatExpressionList & operator = (const DownEnumerator_immediatExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_immediatExpressionList final {
  public: UpEnumerator_immediatExpressionList (const class GGS_immediatExpressionList & inList)  ;

  public: ~ UpEnumerator_immediatExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_immediatExpressionList (const UpEnumerator_immediatExpressionList &) = delete ;
  private: UpEnumerator_immediatExpressionList & operator = (const UpEnumerator_immediatExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @immediatExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_immediatExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_immediatExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_immediatExpressionList (void) = default ;

//--- Copy
  public: GGS_immediatExpressionList (const GGS_immediatExpressionList &) = default ;
  public: GGS_immediatExpressionList & operator = (const GGS_immediatExpressionList &) = default ;

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
  public : inline GenericArray <GGS_immediatExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_immediatExpressionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_immediatExpressionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_immediatExpression & in_mExpression,
                                                 const class GGS_location & in_mErrorLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatExpressionList class_func_listWithValue (const class GGS_immediatExpression & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_immediatExpressionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_immediatExpression & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_immediatExpressionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_immediatExpressionList add_operation (const GGS_immediatExpressionList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_immediatExpression constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_immediatExpression constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_immediatExpression & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_immediatExpression & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_immediatExpression & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_immediatExpression & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_immediatExpression & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_immediatExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_immediatExpressionList ;
  friend class DownEnumerator_immediatExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_immediatExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatExpressionList_2E_element (const GGS_immediatExpression & in_mExpression,
                                                 const GGS_location & in_mErrorLocation) ;

//--------------------------------- Copy constructor
  public: GGS_immediatExpressionList_2E_element (const GGS_immediatExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_immediatExpressionList_2E_element & operator = (const GGS_immediatExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatExpressionList_2E_element init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatExpressionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatInteger reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatInteger (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatInteger (const class cPtr_immediatInteger * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatInteger init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatInteger extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatInteger class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatInteger : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatInteger_init_21_ (const class GGS_luint & inOperand0,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mValue ;


//--- Default constructor
  public: cPtr_immediatInteger (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatInteger (const GGS_luint & in_mValue,
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
// Phase 1: @immediatInteger_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatInteger_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatInteger_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatInteger_2E_weak (const class GGS_immediatInteger & inSource) ;

  public: GGS_immediatInteger_2E_weak & operator = (const class GGS_immediatInteger & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatInteger_2E_weak init_nil (void) {
    GGS_immediatInteger_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatInteger bang_immediatInteger_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatInteger unwrappedValue (void) const ;

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
  public: static GGS_immediatInteger_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatInteger_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatInteger_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatInteger_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatRegister reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRegister (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRegister (const class cPtr_immediatRegister * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_registerExpression readProperty_mRegister (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRegister init_21_ (const class GGS_registerExpression & inOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRegister extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatRegister class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRegister : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRegister_init_21_ (const class GGS_registerExpression & inOperand0,
                                          Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_registerExpression mProperty_mRegister ;


//--- Default constructor
  public: cPtr_immediatRegister (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRegister (const GGS_registerExpression & in_mRegister,
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
// Phase 1: @immediatRegister_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRegister_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRegister_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRegister_2E_weak (const class GGS_immediatRegister & inSource) ;

  public: GGS_immediatRegister_2E_weak & operator = (const class GGS_immediatRegister & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRegister_2E_weak init_nil (void) {
    GGS_immediatRegister_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRegister bang_immediatRegister_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatRegister unwrappedValue (void) const ;

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
  public: static GGS_immediatRegister_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRegister_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRegister_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRegister_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatAdd reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAdd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAdd (const class cPtr_immediatAdd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAdd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAdd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatAdd class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAdd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAdd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAdd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatAdd_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAdd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAdd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAdd_2E_weak (const class GGS_immediatAdd & inSource) ;

  public: GGS_immediatAdd_2E_weak & operator = (const class GGS_immediatAdd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAdd_2E_weak init_nil (void) {
    GGS_immediatAdd_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAdd bang_immediatAdd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatAdd unwrappedValue (void) const ;

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
  public: static GGS_immediatAdd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAdd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAdd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAdd_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSub reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSub (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSub (const class cPtr_immediatSub * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSub init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSub extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatSub class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSub : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSub_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatSub (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSub (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatSub_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSub_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSub_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSub_2E_weak (const class GGS_immediatSub & inSource) ;

  public: GGS_immediatSub_2E_weak & operator = (const class GGS_immediatSub & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSub_2E_weak init_nil (void) {
    GGS_immediatSub_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSub bang_immediatSub_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatSub unwrappedValue (void) const ;

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
  public: static GGS_immediatSub_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSub_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSub_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSub_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatMul reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMul (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMul (const class cPtr_immediatMul * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMul init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMul extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatMul class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMul : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMul_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMul (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMul (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatMul_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMul_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMul_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMul_2E_weak (const class GGS_immediatMul & inSource) ;

  public: GGS_immediatMul_2E_weak & operator = (const class GGS_immediatMul & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMul_2E_weak init_nil (void) {
    GGS_immediatMul_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMul bang_immediatMul_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatMul unwrappedValue (void) const ;

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
  public: static GGS_immediatMul_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMul_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMul_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMul_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatDiv reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatDiv (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatDiv (const class cPtr_immediatDiv * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatDiv init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatDiv extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatDiv class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatDiv : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatDiv_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatDiv (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatDiv (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatDiv_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatDiv_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatDiv_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatDiv_2E_weak (const class GGS_immediatDiv & inSource) ;

  public: GGS_immediatDiv_2E_weak & operator = (const class GGS_immediatDiv & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatDiv_2E_weak init_nil (void) {
    GGS_immediatDiv_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatDiv bang_immediatDiv_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatDiv unwrappedValue (void) const ;

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
  public: static GGS_immediatDiv_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatDiv_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatDiv_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatDiv_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatMod reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatMod (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatMod (const class cPtr_immediatMod * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatMod init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatMod extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatMod class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatMod : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatMod_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatMod (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatMod (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatMod_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatMod_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatMod_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatMod_2E_weak (const class GGS_immediatMod & inSource) ;

  public: GGS_immediatMod_2E_weak & operator = (const class GGS_immediatMod & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatMod_2E_weak init_nil (void) {
    GGS_immediatMod_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatMod bang_immediatMod_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatMod unwrappedValue (void) const ;

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
  public: static GGS_immediatMod_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatMod_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatMod_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatMod_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatOr reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatOr (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatOr (const class cPtr_immediatOr * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatOr init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                              const class GGS_immediatExpression & inOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatOr extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatOr class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatOr : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatOr_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                        const class GGS_immediatExpression & inOperand1,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatOr (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatOr (const GGS_immediatExpression & in_mLeftExpression,
                           const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatOr_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatOr_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatOr_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatOr_2E_weak (const class GGS_immediatOr & inSource) ;

  public: GGS_immediatOr_2E_weak & operator = (const class GGS_immediatOr & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatOr_2E_weak init_nil (void) {
    GGS_immediatOr_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatOr bang_immediatOr_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatOr unwrappedValue (void) const ;

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
  public: static GGS_immediatOr_2E_weak extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatOr_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatOr_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatOr_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatAnd reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatAnd (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatAnd (const class cPtr_immediatAnd * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatAnd init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatAnd extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatAnd class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatAnd : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatAnd_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatAnd (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatAnd (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatAnd_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatAnd_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatAnd_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatAnd_2E_weak (const class GGS_immediatAnd & inSource) ;

  public: GGS_immediatAnd_2E_weak & operator = (const class GGS_immediatAnd & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatAnd_2E_weak init_nil (void) {
    GGS_immediatAnd_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatAnd bang_immediatAnd_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatAnd unwrappedValue (void) const ;

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
  public: static GGS_immediatAnd_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatAnd_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatAnd_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatAnd_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatXor reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatXor (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatXor (const class cPtr_immediatXor * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatXor init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatXor extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatXor class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatXor : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatXor_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                         const class GGS_immediatExpression & inOperand1,
                                         Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatXor (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatXor (const GGS_immediatExpression & in_mLeftExpression,
                            const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatXor_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatXor_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatXor_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatXor_2E_weak (const class GGS_immediatXor & inSource) ;

  public: GGS_immediatXor_2E_weak & operator = (const class GGS_immediatXor & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatXor_2E_weak init_nil (void) {
    GGS_immediatXor_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatXor bang_immediatXor_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatXor unwrappedValue (void) const ;

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
  public: static GGS_immediatXor_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatXor_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatXor_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatXor_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLeftShift reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLeftShift (const class cPtr_immediatLeftShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLeftShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLeftShift extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLeftShift class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLeftShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLeftShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLeftShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLeftShift (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLeftShift_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLeftShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLeftShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLeftShift_2E_weak (const class GGS_immediatLeftShift & inSource) ;

  public: GGS_immediatLeftShift_2E_weak & operator = (const class GGS_immediatLeftShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLeftShift_2E_weak init_nil (void) {
    GGS_immediatLeftShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLeftShift bang_immediatLeftShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLeftShift unwrappedValue (void) const ;

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
  public: static GGS_immediatLeftShift_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLeftShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLeftShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLeftShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatRightShift reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatRightShift (const class cPtr_immediatRightShift * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatRightShift init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatRightShift extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatRightShift class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatRightShift : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatRightShift_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                const class GGS_immediatExpression & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatRightShift (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatRightShift (const GGS_immediatExpression & in_mLeftExpression,
                                   const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatRightShift_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatRightShift_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatRightShift_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatRightShift_2E_weak (const class GGS_immediatRightShift & inSource) ;

  public: GGS_immediatRightShift_2E_weak & operator = (const class GGS_immediatRightShift & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatRightShift_2E_weak init_nil (void) {
    GGS_immediatRightShift_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatRightShift bang_immediatRightShift_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatRightShift unwrappedValue (void) const ;

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
  public: static GGS_immediatRightShift_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatRightShift_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatRightShift_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatRightShift_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatEqualTest (const class cPtr_immediatEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatEqualTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatEqualTest_2E_weak (const class GGS_immediatEqualTest & inSource) ;

  public: GGS_immediatEqualTest_2E_weak & operator = (const class GGS_immediatEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatEqualTest_2E_weak init_nil (void) {
    GGS_immediatEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatEqualTest bang_immediatEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatNotEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNotEqualTest (const class cPtr_immediatNotEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNotEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNotEqualTest extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatNotEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNotEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNotEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                  const class GGS_immediatExpression & inOperand1,
                                                  Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatNotEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNotEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                     const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatNotEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNotEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNotEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNotEqualTest_2E_weak (const class GGS_immediatNotEqualTest & inSource) ;

  public: GGS_immediatNotEqualTest_2E_weak & operator = (const class GGS_immediatNotEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNotEqualTest_2E_weak init_nil (void) {
    GGS_immediatNotEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNotEqualTest bang_immediatNotEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatNotEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatNotEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNotEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNotEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNotEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatGreaterTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterTest (const class cPtr_immediatGreaterTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                       const class GGS_immediatExpression & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterTest extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatGreaterTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                 const class GGS_immediatExpression & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterTest (const GGS_immediatExpression & in_mLeftExpression,
                                    const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatGreaterTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterTest_2E_weak (const class GGS_immediatGreaterTest & inSource) ;

  public: GGS_immediatGreaterTest_2E_weak & operator = (const class GGS_immediatGreaterTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterTest_2E_weak init_nil (void) {
    GGS_immediatGreaterTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterTest bang_immediatGreaterTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatGreaterTest unwrappedValue (void) const ;

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
  public: static GGS_immediatGreaterTest_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatGreaterOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatGreaterOrEqualTest (const class cPtr_immediatGreaterOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatGreaterOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_immediatExpression & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatGreaterOrEqualTest extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatGreaterOrEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatGreaterOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatGreaterOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_immediatExpression & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatGreaterOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatGreaterOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                           const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatGreaterOrEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatGreaterOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatGreaterOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatGreaterOrEqualTest_2E_weak (const class GGS_immediatGreaterOrEqualTest & inSource) ;

  public: GGS_immediatGreaterOrEqualTest_2E_weak & operator = (const class GGS_immediatGreaterOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatGreaterOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatGreaterOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatGreaterOrEqualTest bang_immediatGreaterOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatGreaterOrEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatGreaterOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatGreaterOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatGreaterOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatGreaterOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLowerTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerTest (const class cPtr_immediatLowerTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                     const class GGS_immediatExpression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerTest extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLowerTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                               const class GGS_immediatExpression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerTest (const GGS_immediatExpression & in_mLeftExpression,
                                  const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLowerTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerTest_2E_weak (const class GGS_immediatLowerTest & inSource) ;

  public: GGS_immediatLowerTest_2E_weak & operator = (const class GGS_immediatLowerTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerTest_2E_weak init_nil (void) {
    GGS_immediatLowerTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerTest bang_immediatLowerTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLowerTest unwrappedValue (void) const ;

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
  public: static GGS_immediatLowerTest_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatLowerOrEqualTest reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatLowerOrEqualTest (const class cPtr_immediatLowerOrEqualTest * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mLeftExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatLowerOrEqualTest init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                            const class GGS_immediatExpression & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatLowerOrEqualTest extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatLowerOrEqualTest class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatLowerOrEqualTest : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatLowerOrEqualTest_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                      const class GGS_immediatExpression & inOperand1,
                                                      Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mLeftExpression ;
  public: GGS_immediatExpression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_immediatLowerOrEqualTest (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatLowerOrEqualTest (const GGS_immediatExpression & in_mLeftExpression,
                                         const GGS_immediatExpression & in_mRightExpression,
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
// Phase 1: @immediatLowerOrEqualTest_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatLowerOrEqualTest_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatLowerOrEqualTest_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatLowerOrEqualTest_2E_weak (const class GGS_immediatLowerOrEqualTest & inSource) ;

  public: GGS_immediatLowerOrEqualTest_2E_weak & operator = (const class GGS_immediatLowerOrEqualTest & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatLowerOrEqualTest_2E_weak init_nil (void) {
    GGS_immediatLowerOrEqualTest_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatLowerOrEqualTest bang_immediatLowerOrEqualTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatLowerOrEqualTest unwrappedValue (void) const ;

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
  public: static GGS_immediatLowerOrEqualTest_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatLowerOrEqualTest_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatLowerOrEqualTest_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatLowerOrEqualTest_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatNegate reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatNegate (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatNegate (const class cPtr_immediatNegate * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatNegate init_21_ (const class GGS_immediatExpression & inOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatNegate extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatNegate class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatNegate : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatNegate_init_21_ (const class GGS_immediatExpression & inOperand0,
                                        Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatNegate (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatNegate (const GGS_immediatExpression & in_mExpression,
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
// Phase 1: @immediatNegate_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatNegate_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatNegate_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatNegate_2E_weak (const class GGS_immediatNegate & inSource) ;

  public: GGS_immediatNegate_2E_weak & operator = (const class GGS_immediatNegate & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatNegate_2E_weak init_nil (void) {
    GGS_immediatNegate_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatNegate bang_immediatNegate_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatNegate unwrappedValue (void) const ;

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
  public: static GGS_immediatNegate_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatNegate_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatNegate_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatNegate_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatComplement reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatComplement (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatComplement (const class cPtr_immediatComplement * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatComplement init_21_ (const class GGS_immediatExpression & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatComplement extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatComplement class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatComplement : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatComplement_init_21_ (const class GGS_immediatExpression & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_immediatComplement (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatComplement (const GGS_immediatExpression & in_mExpression,
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
// Phase 1: @immediatComplement_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatComplement_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatComplement_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatComplement_2E_weak (const class GGS_immediatComplement & inSource) ;

  public: GGS_immediatComplement_2E_weak & operator = (const class GGS_immediatComplement & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatComplement_2E_weak init_nil (void) {
    GGS_immediatComplement_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatComplement bang_immediatComplement_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatComplement unwrappedValue (void) const ;

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
  public: static GGS_immediatComplement_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatComplement_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatComplement_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatComplement_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSliceExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_immediatSliceExpressionList final {
  public: DownEnumerator_immediatSliceExpressionList (const class GGS_immediatSliceExpressionList & inList) ;

  public: ~ DownEnumerator_immediatSliceExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatSliceExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_immediatSliceExpressionList (const DownEnumerator_immediatSliceExpressionList &) = delete ;
  private: DownEnumerator_immediatSliceExpressionList & operator = (const DownEnumerator_immediatSliceExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_immediatSliceExpressionList final {
  public: UpEnumerator_immediatSliceExpressionList (const class GGS_immediatSliceExpressionList & inList)  ;

  public: ~ UpEnumerator_immediatSliceExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_immediatSliceExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_immediatSliceExpressionList (const UpEnumerator_immediatSliceExpressionList &) = delete ;
  private: UpEnumerator_immediatSliceExpressionList & operator = (const UpEnumerator_immediatSliceExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @immediatSliceExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_immediatSliceExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_immediatSliceExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_immediatSliceExpressionList (void) = default ;

//--- Copy
  public: GGS_immediatSliceExpressionList (const GGS_immediatSliceExpressionList &) = default ;
  public: GGS_immediatSliceExpressionList & operator = (const GGS_immediatSliceExpressionList &) = default ;

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
  public : inline GenericArray <GGS_immediatSliceExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_immediatSliceExpressionList subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_immediatSliceExpressionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSliceExpressionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_immediatExpression & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_immediatSliceExpressionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_immediatExpression & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_immediatSliceExpressionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_immediatSliceExpressionList add_operation (const GGS_immediatSliceExpressionList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_immediatExpression constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_immediatExpression constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_immediatExpression & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_immediatExpression & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_immediatExpression & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMSliceNameAtIndex (class GGS_lstring constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_immediatExpression & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_immediatExpression & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSliceNameAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_immediatSliceExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatSliceExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatSliceExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_immediatSliceExpressionList ;
  friend class DownEnumerator_immediatSliceExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSliceExpressionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_immediatSliceExpressionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceName ;
  public: inline GGS_lstring readProperty_mSliceName (void) const {
    return mProperty_mSliceName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_immediatSliceExpressionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_immediatSliceExpressionList_2E_element (const GGS_lstring & in_mSliceName,
                                                      const GGS_immediatExpression & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_immediatSliceExpressionList_2E_element (const GGS_immediatSliceExpressionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_immediatSliceExpressionList_2E_element & operator = (const GGS_immediatSliceExpressionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSliceExpressionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_immediatExpression & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSliceExpressionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @immediatSlice reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice : public GGS_immediatExpression {
//--------------------------------- Default constructor
  public: GGS_immediatSlice (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_immediatSlice (const class cPtr_immediatSlice * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mRegisterName (void) const ;

  public: class GGS_immediatSliceExpressionList readProperty_mSliceExpressionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_immediatSlice init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_immediatSliceExpressionList & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_immediatSlice extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @immediatSlice class
//--------------------------------------------------------------------------------------------------

class cPtr_immediatSlice : public cPtr_immediatExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void immediatSlice_init_21__21_ (const class GGS_lstring & inOperand0,
                                           const class GGS_immediatSliceExpressionList & inOperand1,
                                           Compiler * inCompiler) ;


//--- Extension method eval
  public: virtual void method_eval (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_sint_36__34_ & arg_outResult,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mRegisterName ;
  public: GGS_immediatSliceExpressionList mProperty_mSliceExpressionList ;


//--- Default constructor
  public: cPtr_immediatSlice (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_immediatSlice (const GGS_lstring & in_mRegisterName,
                              const GGS_immediatSliceExpressionList & in_mSliceExpressionList,
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
// Phase 1: @immediatSlice_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_immediatSlice_2E_weak : public GGS_immediatExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_immediatSlice_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_immediatSlice_2E_weak (const class GGS_immediatSlice & inSource) ;

  public: GGS_immediatSlice_2E_weak & operator = (const class GGS_immediatSlice & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_immediatSlice_2E_weak init_nil (void) {
    GGS_immediatSlice_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_immediatSlice bang_immediatSlice_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_immediatSlice unwrappedValue (void) const ;

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
  public: static GGS_immediatSlice_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_immediatSlice_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_immediatSlice_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSlice_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantDefinitionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantDefinitionList final {
  public: DownEnumerator_constantDefinitionList (const class GGS_constantDefinitionList & inList) ;

  public: ~ DownEnumerator_constantDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_constantDefinitionList (const DownEnumerator_constantDefinitionList &) = delete ;
  private: DownEnumerator_constantDefinitionList & operator = (const DownEnumerator_constantDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantDefinitionList final {
  public: UpEnumerator_constantDefinitionList (const class GGS_constantDefinitionList & inList)  ;

  public: ~ UpEnumerator_constantDefinitionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_immediatExpression current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantDefinitionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_constantDefinitionList (const UpEnumerator_constantDefinitionList &) = delete ;
  private: UpEnumerator_constantDefinitionList & operator = (const UpEnumerator_constantDefinitionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @constantDefinitionList list
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_constantDefinitionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_constantDefinitionList (void) ;

//--- Destructor
  public: virtual ~ GGS_constantDefinitionList (void) = default ;

//--- Copy
  public: GGS_constantDefinitionList (const GGS_constantDefinitionList &) = default ;
  public: GGS_constantDefinitionList & operator = (const GGS_constantDefinitionList &) = default ;

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
  public : inline GenericArray <GGS_constantDefinitionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_constantDefinitionList subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_constantDefinitionList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mConstantName,
                                                 const class GGS_immediatExpression & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantDefinitionList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_immediatExpression & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_constantDefinitionList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_immediatExpression & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_constantDefinitionList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_constantDefinitionList add_operation (const GGS_constantDefinitionList & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_immediatExpression constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_immediatExpression constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_immediatExpression & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_immediatExpression & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_immediatExpression & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMConstantNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_immediatExpression constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_immediatExpression & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_immediatExpression & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_immediatExpression getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_constantDefinitionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_constantDefinitionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_constantDefinitionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_constantDefinitionList ;
  friend class DownEnumerator_constantDefinitionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantDefinitionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_constantDefinitionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: inline GGS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GGS_immediatExpression mProperty_mExpression ;
  public: inline GGS_immediatExpression readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_constantDefinitionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_immediatExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_constantDefinitionList_2E_element (const GGS_lstring & in_mConstantName,
                                                 const GGS_immediatExpression & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_constantDefinitionList_2E_element (const GGS_constantDefinitionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_constantDefinitionList_2E_element & operator = (const GGS_constantDefinitionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantDefinitionList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_immediatExpression & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantDefinitionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualConfigurationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_actualConfigurationMap final {

  public: DownEnumerator_actualConfigurationMap (const class GGS_actualConfigurationMap & inMap) ;

  public: ~ DownEnumerator_actualConfigurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRegisterAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mRegisterValue (LOCATION_ARGS) const ;

  public: class GGS_actualConfigurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_actualConfigurationMap (const DownEnumerator_actualConfigurationMap &) = delete ;
  private: DownEnumerator_actualConfigurationMap & operator = (const DownEnumerator_actualConfigurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_actualConfigurationMap final {
  public: UpEnumerator_actualConfigurationMap (const class GGS_actualConfigurationMap & inMap)  ;

  public: ~ UpEnumerator_actualConfigurationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mRegisterValue (LOCATION_ARGS) const ;
  public: class GGS_actualConfigurationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_actualConfigurationMap (const UpEnumerator_actualConfigurationMap &) = delete ;
  private: UpEnumerator_actualConfigurationMap & operator = (const UpEnumerator_actualConfigurationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_actualConfigurationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_actualConfigurationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_actualConfigurationMap (void) ;

//--- Handle copy
  public: GGS_actualConfigurationMap (const GGS_actualConfigurationMap & inSource) ;
  public: GGS_actualConfigurationMap & operator = (const GGS_actualConfigurationMap & inSource) ;

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
  protected: void performInsert (const class GGS_actualConfigurationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_actualConfigurationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_actualConfigurationMap class_func_mapWithMapToOverride (const class GGS_actualConfigurationMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uint constinArgument1,
                                 class GGS_uint constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterAddressForKey (class GGS_uint constinArgument0,
                                                 class GGS_string constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRegisterValueForKey (class GGS_uint constinArgument0,
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

  public: class GGS_uint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_mRegisterValueForKey (const class GGS_string & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_actualConfigurationMap getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_actualConfigurationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_actualConfigurationMap ;
  friend class DownEnumerator_actualConfigurationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @actualConfigurationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mRegisterAddress ;
  public: inline GGS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GGS_uint mProperty_mRegisterValue ;
  public: inline GGS_uint readProperty_mRegisterValue (void) const {
    return mProperty_mRegisterValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMRegisterValue (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_actualConfigurationMap_2E_element (const GGS_lstring & in_lkey,
                                                 const GGS_uint & in_mRegisterAddress,
                                                 const GGS_uint & in_mRegisterValue) ;

//--------------------------------- Copy constructor
  public: GGS_actualConfigurationMap_2E_element (const GGS_actualConfigurationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_actualConfigurationMap_2E_element & operator = (const GGS_actualConfigurationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_actualConfigurationMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_uint & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_actualConfigurationMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: actualConfigurationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_actualConfigurationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_actualConfigurationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_actualConfigurationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_actualConfigurationMap_2E_element_3F_ (const GGS_actualConfigurationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_actualConfigurationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_actualConfigurationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_actualConfigurationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberExpression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_bitNumberExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberExpression_2E_weak (const class GGS_bitNumberExpression & inSource) ;

  public: GGS_bitNumberExpression_2E_weak & operator = (const class GGS_bitNumberExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberExpression_2E_weak init_nil (void) {
    GGS_bitNumberExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberExpression bang_bitNumberExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberExpression unwrappedValue (void) const ;

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
  public: static GGS_bitNumberExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLiteralExpression reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralExpression (const class cPtr_bitNumberLiteralExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mBitNumberLiteralExpression (void) const ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralExpression init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralExpression extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLiteralExpression class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralExpression : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralExpression_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mBitNumberLiteralExpression ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_bitNumberLiteralExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralExpression (const GGS_immediatExpression & in_mBitNumberLiteralExpression,
                                           const GGS_location & in_mEndOfExpression,
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
// Phase 1: @bitNumberLiteralExpression_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralExpression_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralExpression_2E_weak (const class GGS_bitNumberLiteralExpression & inSource) ;

  public: GGS_bitNumberLiteralExpression_2E_weak & operator = (const class GGS_bitNumberLiteralExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralExpression_2E_weak init_nil (void) {
    GGS_bitNumberLiteralExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralExpression bang_bitNumberLiteralExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLiteralExpression unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLiteralExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLiteralValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLiteralValue (const class cPtr_bitNumberLiteralValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mBitNumberLiteralValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLiteralValue init_21_ (const class GGS_luint & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLiteralValue extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLiteralValue class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLiteralValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLiteralValue_init_21_ (const class GGS_luint & inOperand0,
                                               Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mBitNumberLiteralValue ;


//--- Default constructor
  public: cPtr_bitNumberLiteralValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLiteralValue (const GGS_luint & in_mBitNumberLiteralValue,
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
// Phase 1: @bitNumberLiteralValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLiteralValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLiteralValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLiteralValue_2E_weak (const class GGS_bitNumberLiteralValue & inSource) ;

  public: GGS_bitNumberLiteralValue_2E_weak & operator = (const class GGS_bitNumberLiteralValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLiteralValue_2E_weak init_nil (void) {
    GGS_bitNumberLiteralValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLiteralValue bang_bitNumberLiteralValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLiteralValue unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLiteralValue_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLiteralValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLiteralValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLiteralValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitNumberLabelValue reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue : public GGS_bitNumberExpression {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitNumberLabelValue (const class cPtr_bitNumberLabelValue * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mBitNumberLabelValue (void) const ;

  public: class GGS_luint readProperty_mBitNumberIndexValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitNumberLabelValue init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_luint & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitNumberLabelValue extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitNumberLabelValue class
//--------------------------------------------------------------------------------------------------

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitNumberLabelValue_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_luint & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method getBitNumber
  public: virtual void method_getBitNumber (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           class GGS_stringset & arg_ioUsedRegisters,
           const class GGS_bitSliceTable arg_inBitSliceTable,
           class GGS_uint & arg_outBitNumber,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mBitNumberLabelValue ;
  public: GGS_luint mProperty_mBitNumberIndexValue ;


//--- Default constructor
  public: cPtr_bitNumberLabelValue (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitNumberLabelValue (const GGS_lstring & in_mBitNumberLabelValue,
                                    const GGS_luint & in_mBitNumberIndexValue,
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
// Phase 1: @bitNumberLabelValue_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitNumberLabelValue_2E_weak : public GGS_bitNumberExpression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitNumberLabelValue_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitNumberLabelValue_2E_weak (const class GGS_bitNumberLabelValue & inSource) ;

  public: GGS_bitNumberLabelValue_2E_weak & operator = (const class GGS_bitNumberLabelValue & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitNumberLabelValue_2E_weak init_nil (void) {
    GGS_bitNumberLabelValue_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitNumberLabelValue bang_bitNumberLabelValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitNumberLabelValue unwrappedValue (void) const ;

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
  public: static GGS_bitNumberLabelValue_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitNumberLabelValue_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitNumberLabelValue_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitNumberLabelValue_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @labelMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_labelMap final {

  public: DownEnumerator_labelMap (const class GGS_labelMap & inMap) ;

  public: ~ DownEnumerator_labelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_labelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_labelMap (const DownEnumerator_labelMap &) = delete ;
  private: DownEnumerator_labelMap & operator = (const DownEnumerator_labelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_labelMap final {
  public: UpEnumerator_labelMap (const class GGS_labelMap & inMap)  ;

  public: ~ UpEnumerator_labelMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_labelMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_labelMap (const UpEnumerator_labelMap &) = delete ;
  private: UpEnumerator_labelMap & operator = (const UpEnumerator_labelMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_labelMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_labelMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_labelMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_labelMap (void) ;

//--- Handle copy
  public: GGS_labelMap (const GGS_labelMap & inSource) ;
  public: GGS_labelMap & operator = (const GGS_labelMap & inSource) ;

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
  protected: void performInsert (const class GGS_labelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_labelMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_labelMap class_func_mapWithMapToOverride (const class GGS_labelMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
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

  public: class GGS_labelMap getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_labelMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_labelMap ;
  friend class DownEnumerator_labelMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @labelMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_labelMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_labelMap_2E_element (const GGS_labelMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_labelMap_2E_element & operator = (const GGS_labelMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_labelMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_labelMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: labelMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_labelMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_labelMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_labelMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_labelMap_2E_element_3F_ (const GGS_labelMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_labelMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_labelMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_labelMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ;

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
  public: static class GGS_pic_31__38__5F_dataMap class_func_mapWithMapToOverride (const class GGS_pic_31__38__5F_dataMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_uintlist constinArgument1,
                                 class GGS_bool constinArgument2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMDataForKey (class GGS_uintlist constinArgument0,
                                      class GGS_string constinArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsData_38_ForKey (class GGS_bool constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_uintlist & outArgument1,
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

  public: class GGS_uintlist getter_mDataForKey (const class GGS_string & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsData_38_ForKey (const class GGS_string & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_pic_31__38__5F_dataMap getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_pic_31__38__5F_dataMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SequentialInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SequentialInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SequentialInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_SequentialInstruction (const class cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_SequentialInstruction init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_SequentialInstruction extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_SequentialInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SequentialInstruction : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_SequentialInstruction_init_21_ (const class GGS_location & inOperand0,
                                                           Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GGS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter instructionSize
  public: virtual class GGS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GGS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_lstring arg_inBlockLabel,
           class GGS_bool & arg_outOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GGS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_ipic_31__38_SequentialInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_SequentialInstruction (const GGS_location & in_mInstructionLocation,
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SequentialInstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SequentialInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;
  public: inline GGS_ipic_31__38_SequentialInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

  public: GGS_uint mProperty_mMin ;
  public: inline GGS_uint readProperty_mMin (void) const {
    return mProperty_mMin ;
  }

  public: GGS_uint mProperty_mMax ;
  public: inline GGS_uint readProperty_mMax (void) const {
    return mProperty_mMax ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_ipic_31__38_SequentialInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

  public: inline void setter_setMMin (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMin = inValue ;
  }

  public: inline void setter_setMMax (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMax = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                const GGS_uint & in_mMin,
                                                                const GGS_uint & in_mMax) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element & operator = (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_SequentialInstructionList_2E_element init_21__21__21_ (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                        const class GGS_uint & inOperand1,
                                                                                        const class GGS_uint & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_SequentialInstructionList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractBlockTerminator : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_AbstractBlockTerminator_init_21_ (const class GGS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GGS_bool getter_isEqualToTerminator (const class GGS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter terminatorDisplay
  public: virtual class GGS_string getter_terminatorDisplay (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter terminatorSize
  public: virtual class GGS_uint getter_terminatorSize (const class GGS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_string & arg_ioGraphVizString,
           const class GGS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GGS_lstring arg_inBlockLabel,
           class GGS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GGS_stringset & arg_ioBlockToExploreSet,
           class GGS_stringset & arg_ioExploredBlockSet,
           class GGS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GGS_uint arg_inAddress,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_uint & arg_ioConversionCount,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_ipic_31__38_AbstractBlockTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractBlockTerminator (const GGS_location & in_mInstructionLocation,
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_BlockList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_BlockList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_ipic_31__38_Block mProperty_mBlock ;
  public: inline GGS_ipic_31__38_Block readProperty_mBlock (void) const {
    return mProperty_mBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ipic_31__38_BlockList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlock (const GGS_ipic_31__38_Block & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlock = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_Block & in_mBlock) ;

//--------------------------------- Copy constructor
  public: GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_BlockList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ipic_31__38_BlockList_2E_element & operator = (const GGS_ipic_31__38_BlockList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_BlockList_2E_element init_21_ (const class GGS_ipic_31__38_Block & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_BlockList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SingleInstructionTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SingleInstructionTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SingleInstructionTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_SingleInstructionTerminator (const class cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_SingleInstructionTerminator init_21_ (const class GGS_location & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_SingleInstructionTerminator extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18SingleInstructionTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SingleInstructionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_SingleInstructionTerminator_init_21_ (const class GGS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension method duration
  public: virtual void method_duration (const class GGS_blockDurationMap arg_inExploredBlockMap,
           const class GGS_string arg_inNextLabel,
           class GGS_uint & arg_outMin,
           class GGS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           class GGS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_ipic_31__38_SingleInstructionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_SingleInstructionTerminator (const GGS_location & in_mInstructionLocation,
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum jumpInstructionKind
//--------------------------------------------------------------------------------------------------

class GGS_jumpInstructionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_jumpInstructionKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_ipicRelative,
    enum_relative,
    enum_absolute
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
  public: static GGS_jumpInstructionKind extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_jumpInstructionKind class_func_absolute (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_ipicRelative (LOCATION_ARGS) ;

  public: static class GGS_jumpInstructionKind class_func_relative (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_jumpInstructionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isAbsolute (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIpicRelative (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRelative (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_jumpInstructionKind ;

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;

