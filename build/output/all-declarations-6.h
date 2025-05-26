#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SimpleConstantCaseItem_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak : public GGS_pic_31__38_AbstractCaseItem_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

  public: GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & operator = (const class GGS_pic_31__38_SimpleConstantCaseItem & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak init_nil (void) {
    GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_SimpleConstantCaseItem bang_pic_31__38_SimpleConstantCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_SimpleConstantCaseItem unwrappedValue (void) const {
    GGS_pic_31__38_SimpleConstantCaseItem result ;
    if (isValid ()) {
      const cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_SimpleConstantCaseItem (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_pic_31__38_SimpleConstantCaseItem_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_IntervalCaseItem bang_pic_31__38_IntervalCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_IntervalCaseItem unwrappedValue (void) const {
    GGS_pic_31__38_IntervalCaseItem result ;
    if (isValid ()) {
      const cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_IntervalCaseItem (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_CaseExpressionList_2E_element class_func_new (const class GGS_pic_31__38_AbstractCaseItem & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2E_element ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SwitchInstructionCaseList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                                           const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                           const class GGS_pic_31__38_InstructionList & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch_2E_weak : public GGS_pic_31__38_PiccoloInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

  public: GGS_pic_31__38_Instruction_5F_switch_2E_weak & operator = (const class GGS_pic_31__38_Instruction_5F_switch & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_pic_31__38_Instruction_5F_switch_2E_weak init_nil (void) {
    GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_pic_31__38_Instruction_5F_switch bang_pic_31__38_Instruction_5F_switch_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_pic_31__38_Instruction_5F_switch unwrappedValue (void) const {
    GGS_pic_31__38_Instruction_5F_switch result ;
    if (isValid ()) {
      const cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_Instruction_5F_switch (p) ;
      }
    }
    return result ;
  }

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
  public: static GGS_pic_31__38_Instruction_5F_switch_2E_weak extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @caseConstantMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_caseConstantMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_caseConstantMap (const class GGS_caseConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_caseConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_caseConstantMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_caseConstantMap (const class GGS_caseConstantMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_caseConstantMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @caseConstantMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_caseConstantMap ;

//--------------------------------------------------------------------------------------------------

class GGS_caseConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_caseConstantMap (void) ;

//--------------------------------- Handle copy
  public: GGS_caseConstantMap (const GGS_caseConstantMap & inSource) ;
  public: GGS_caseConstantMap & operator = (const GGS_caseConstantMap & inSource) ;
  
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
  public: static class GGS_caseConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_caseConstantMap class_func_mapWithMapToOverride (const class GGS_caseConstantMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_caseConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_caseConstantMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_caseConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_caseConstantMap ;
  friend class DownEnumerator_caseConstantMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@caseConstantMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_caseConstantMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_caseConstantMap (const GGS_caseConstantMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_caseConstantMap (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_caseConstantMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ;

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

class DownEnumerator_ipic_31__38_BlockList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_ipic_31__38_BlockList (const class GGS_ipic_31__38_BlockList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_BlockList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ipic_31__38_BlockList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_ipic_31__38_BlockList (const class GGS_ipic_31__38_BlockList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_BlockList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic18BlockList list
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_BlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_BlockList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_ipic_31__38_BlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_ipic_31__38_BlockList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_BlockList class_func_listWithValue (const class GGS_ipic_31__38_Block & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ipic_31__38_BlockList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ipic_31__38_Block & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ipic_31__38_BlockList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ipic_31__38_BlockList add_operation (const GGS_ipic_31__38_BlockList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ipic_31__38_Block constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ipic_31__38_Block constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ipic_31__38_Block & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ipic_31__38_Block & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ipic_31__38_Block & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockAtIndex (class GGS_ipic_31__38_Block constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ipic_31__38_Block & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ipic_31__38_Block & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_Block getter_mBlockAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_BlockList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_BlockList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_BlockList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ipic_31__38_BlockList ;
  friend class DownEnumerator_ipic_31__38_BlockList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_SequentialInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_ipic_31__38_SequentialInstructionList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_ipic_31__38_SequentialInstructionList (const class GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMin (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_SequentialInstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ipic_31__38_SequentialInstructionList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_ipic_31__38_SequentialInstructionList (const class GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMin (LOCATION_ARGS) const ;
  public: class GGS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_ipic_31__38_SequentialInstructionList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic18SequentialInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_SequentialInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_SequentialInstructionList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: static class GGS_ipic_31__38_SequentialInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_ipic_31__38_SequentialInstructionList class_func_listWithValue (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                           const class GGS_uint & inOperand1,
                                                                                           const class GGS_uint & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                    const class GGS_uint & inOperand1,
                                                    const class GGS_uint & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_ipic_31__38_SequentialInstructionList add_operation (const GGS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                               class GGS_uint constinArgument1,
                                               class GGS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                                class GGS_uint & outArgument1,
                                                class GGS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_ipic_31__38_SequentialInstruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxAtIndex (class GGS_uint constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMinAtIndex (class GGS_uint constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                              class GGS_uint & outArgument1,
                                              class GGS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_ipic_31__38_SequentialInstruction & outArgument0,
                                             class GGS_uint & outArgument1,
                                             class GGS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_SequentialInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mMaxAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mMinAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_SequentialInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_SequentialInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ipic_31__38_SequentialInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ipic_31__38_SequentialInstructionList ;
  friend class DownEnumerator_ipic_31__38_SequentialInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38__5F_dataMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38__5F_dataMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_pic_31__38__5F_dataMap (const class GGS_pic_31__38__5F_dataMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mData (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsData_38_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38__5F_dataMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38__5F_dataMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_pic_31__38__5F_dataMap (const class GGS_pic_31__38__5F_dataMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mData (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsData_38_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38__5F_dataMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic18_dataMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38__5F_dataMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_pic_31__38__5F_dataMap (void) ;

//--------------------------------- Handle copy
  public: GGS_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inSource) ;
  public: GGS_pic_31__38__5F_dataMap & operator = (const GGS_pic_31__38__5F_dataMap & inSource) ;
  
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GGS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38__5F_dataMap ;
  friend class DownEnumerator_pic_31__38__5F_dataMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;

//--------------------------------------------------------------------------------------------------
// Phase 2: class for element of '@pic18_dataMap' map
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap : public cMapElement {
//--- Map attributes
  public: GGS_uintlist mProperty_mData ;
  public: GGS_bool mProperty_mIsData_38_ ;

//--- Constructors
  public: cMapElement_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_pic_31__38__5F_dataMap (const GGS_lstring & inKey,
                                              const GGS_uintlist & in_mData,
                                              const GGS_bool & in_mIsData_38_
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SequentialInstruction : public acStrongPtr_class {

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

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
  public: inline GGS_ipic_31__38_SequentialInstruction unwrappedValue (void) const {
    GGS_ipic_31__38_SequentialInstruction result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_SequentialInstruction (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_SequentialInstructionList_2E_element class_func_new (const class GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                            const class GGS_uint & inOperand1,
                                                                                            const class GGS_uint & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractBlockTerminator : public acStrongPtr_class {

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

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
  public: inline GGS_ipic_31__38_AbstractBlockTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_AbstractBlockTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_AbstractBlockTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_Block class_func_new (const class GGS_uint & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                             const class GGS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                             const class GGS_uint & inOperand4,
                                                             const class GGS_uint & inOperand5,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ;

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

//--------------------------------- GALGAS class functions
  public: static class GGS_ipic_31__38_BlockList_2E_element class_func_new (const class GGS_ipic_31__38_Block & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

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
  public: inline GGS_ipic_31__38_SingleInstructionTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_SingleInstructionTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_SingleInstructionTerminator * p = (cPtr_ipic_31__38_SingleInstructionTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_SingleInstructionTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_ReturnTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_ReturnTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_ReturnTerminator * p = (cPtr_ipic_31__38_ReturnTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_ReturnTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_RetlwTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_RetlwTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_RetlwTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_RetfieTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_RetfieTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_RetfieTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_JumpTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_JumpTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_JumpTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_ComputedGotoTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_ComputedGotoTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_ComputedGotoTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_ComputedRETLWTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_ComputedRETLWTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_ComputedRETLWTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_ConditionalJumpTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_ConditionalJumpTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_ConditionalJumpTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_ComputedBraTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_ComputedBraTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_ComputedBraTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ipic_31__38_AbstractConditionTerminator reference class
//--------------------------------------------------------------------------------------------------

class GGS_ipic_31__38_AbstractConditionTerminator : public GGS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GGS_ipic_31__38_AbstractConditionTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ipic_31__38_AbstractConditionTerminator (const class cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const ;

  public: class GGS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ipic_31__38_AbstractConditionTerminator init_21__21__21_ (const class GGS_location & inOperand0,
                                                                               const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                               const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ipic_31__38_AbstractConditionTerminator extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ipic18AbstractConditionTerminator class
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_AbstractConditionTerminator_init_21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                         const class GGS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension getter needToInsertJumpInstruction
  public: virtual class GGS_bool getter_needToInsertJumpInstruction (const class GGS_string inNextBlockLabel,
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

//--- Extension method getOptimizedTerminators
  public: virtual void method_getOptimizedTerminators (const class GGS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GGS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GGS_ipic_31__38_BlockList arg_inBlockList,
           const class GGS_string arg_inBlockLabel,
           class GGS_bool & arg_ioOptimizationDone,
           class GGS_string & arg_ioListFileContents,
           class GGS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedTrueTerminator,
           class GGS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedFalseTerminator,
           class GGS_bool & arg_outIdenticalTerminators,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GGS_uint arg_inAddress,
           const class GGS_string arg_inBlockLabel,
           const class GGS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GGS_string arg_inNextBlockLabel,
           class GGS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  public: GGS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionFalse ;


//--- Default constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

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
  public: inline GGS_ipic_31__38_AbstractConditionTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_AbstractConditionTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_AbstractConditionTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_pic_31__38_RegisterComparisonTerminator unwrappedValue (void) const {
    GGS_pic_31__38_RegisterComparisonTerminator result ;
    if (isValid ()) {
      const cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_RegisterComparisonTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_IncDecRegisterTerminator unwrappedValue (void) const {
    GGS_ipic_31__38_IncDecRegisterTerminator result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_IncDecRegisterTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_pic_31__38_TestRegisterTerminator unwrappedValue (void) const {
    GGS_pic_31__38_TestRegisterTerminator result ;
    if (isValid ()) {
      const cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_TestRegisterTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_pic_31__38_BitTestTerminator unwrappedValue (void) const {
    GGS_pic_31__38_BitTestTerminator result ;
    if (isValid ()) {
      const cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) ptr () ;
      if (nullptr != p) {
        result = GGS_pic_31__38_BitTestTerminator (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38_InstructionWithNoOperand unwrappedValue (void) const {
    GGS_ipic_31__38_InstructionWithNoOperand result ;
    if (isValid ()) {
      const cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38_InstructionWithNoOperand (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_JSR unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_JSR (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall unwrappedValue (void) const {
    GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

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
  public: inline GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction unwrappedValue (void) const {
    GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip unwrappedValue (void) const {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register unwrappedValue (void) const {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

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
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

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
  public: inline GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA unwrappedValue (void) const {
    GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
    if (isValid ()) {
      const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr () ;
      if (nullptr != p) {
        result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (p) ;
      }
    }
    return result ;
  }

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;

