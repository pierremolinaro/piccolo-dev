#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_SimpleConstantCaseItem_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak : public GALGAS_pic_31__38_AbstractCaseItem_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak (const class GALGAS_pic_31__38_SimpleConstantCaseItem & inSource) ;

  public: GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak & operator = (const class GALGAS_pic_31__38_SimpleConstantCaseItem & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_SimpleConstantCaseItem bang_pic_31__38_SimpleConstantCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_IntervalCaseItem_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IntervalCaseItem_2D_weak : public GALGAS_pic_31__38_AbstractCaseItem_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IntervalCaseItem_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_IntervalCaseItem_2D_weak (const class GALGAS_pic_31__38_IntervalCaseItem & inSource) ;

  public: GALGAS_pic_31__38_IntervalCaseItem_2D_weak & operator = (const class GALGAS_pic_31__38_IntervalCaseItem & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_IntervalCaseItem bang_pic_31__38_IntervalCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IntervalCaseItem_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_IntervalCaseItem_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_IntervalCaseItem_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_IntervalCaseItem_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_CaseExpressionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_CaseExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_pic_31__38_AbstractCaseItem mProperty_mCaseItem ;
  public: inline GALGAS_pic_31__38_AbstractCaseItem readProperty_mCaseItem (void) const {
    return mProperty_mCaseItem ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_CaseExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCaseItem (const GALGAS_pic_31__38_AbstractCaseItem & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseItem = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_CaseExpressionList_2D_element init_21_ (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_CaseExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_CaseExpressionList_2D_element class_func_new (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0,
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
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_SwitchInstructionCaseList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mStartOfCase ;
  public: inline GALGAS_location readProperty_mStartOfCase (void) const {
    return mProperty_mStartOfCase ;
  }

  public: GALGAS_pic_31__38_CaseExpressionList mProperty_mCaseExpressionList ;
  public: inline GALGAS_pic_31__38_CaseExpressionList readProperty_mCaseExpressionList (void) const {
    return mProperty_mCaseExpressionList ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartOfCase (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartOfCase = inValue ;
  }

  public: inline void setter_setMCaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCaseExpressionList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & in_mStartOfCase,
                                                                  const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element class_func_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                              const class GALGAS_pic_31__38_InstructionList & inOperand2,
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
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_switch_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_switch_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_switch_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_switch_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_switch & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_switch_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_switch & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_switch bang_pic_31__38_Instruction_5F_switch_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_switch_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_Instruction_5F_switch_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_switch_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @caseConstantMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_caseConstantMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_caseConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_caseConstantMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_caseConstantMap (const GALGAS_caseConstantMap & inSource) ;
  public: GALGAS_caseConstantMap & operator = (const GALGAS_caseConstantMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_caseConstantMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_caseConstantMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_caseConstantMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_caseConstantMap class_func_mapWithMapToOverride (const class GALGAS_caseConstantMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_caseConstantMap add_operation (const GALGAS_caseConstantMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_caseConstantMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_caseConstantMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_caseConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_caseConstantMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_caseConstantMap ;
 
} ; // End of GALGAS_caseConstantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_caseConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_caseConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@caseConstantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_caseConstantMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_caseConstantMap (const GALGAS_caseConstantMap_2D_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_caseConstantMap (const GALGAS_lstring & inKey
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
//
// Phase 1: @caseConstantMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_caseConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_caseConstantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_caseConstantMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_caseConstantMap_2D_element init_21_ (const class GALGAS_lstring & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_caseConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_caseConstantMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
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
 
} ; // End of GALGAS_caseConstantMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: caseConstantMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_caseConstantMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_caseConstantMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_caseConstantMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_caseConstantMap_2D_element_3F_ (const GALGAS_caseConstantMap_2D_element & inValue) ;
  public: static GALGAS_caseConstantMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_caseConstantMap_2D_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_caseConstantMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_caseConstantMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCaseItem (class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const class GALGAS_registerTable constin_inRegisterTable,
                                          const class GALGAS_constantMap constin_inConstantMap,
                                          const class GALGAS_lstring constin_inConditionTrueLabel,
                                          const class GALGAS_string constin_inIndexForLabels,
                                          class GALGAS_stringset & io_ioUsedRegisters,
                                          class GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                          class GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          class GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          class GALGAS_lstring & io_ioBlockLabel,
                                          class GALGAS_sint_36__34_ & io_ioLastComparisonValue,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic18BlockList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_BlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_BlockList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ipic_31__38_BlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_ipic_31__38_Block & in_mBlock
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_BlockList init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_BlockList extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_BlockList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_BlockList class_func_listWithValue (const class GALGAS_ipic_31__38_Block & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ipic_31__38_BlockList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_Block & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_BlockList add_operation (const GALGAS_ipic_31__38_BlockList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ipic_31__38_Block constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_Block constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_Block & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_Block & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_Block & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockAtIndex (class GALGAS_ipic_31__38_Block constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_Block & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_Block & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlockAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ipic_31__38_BlockList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ipic_31__38_BlockList ;
 
} ; // End of GALGAS_ipic_31__38_BlockList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ipic_31__38_BlockList : public cGenericAbstractEnumerator {
  public: cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ipic_31__38_BlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic18SequentialInstructionList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SequentialInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                 const class GALGAS_uint & in_mMin,
                                                 const class GALGAS_uint & in_mMax
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_SequentialInstructionList init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstructionList extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_SequentialInstructionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_SequentialInstructionList class_func_listWithValue (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                              const class GALGAS_uint & inOperand1,
                                                                                              const class GALGAS_uint & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ipic_31__38_SequentialInstructionList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstructionList add_operation (const GALGAS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               class GALGAS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMinAtIndex (class GALGAS_uint constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxAtIndex (const class GALGAS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinAtIndex (const class GALGAS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ipic_31__38_SequentialInstructionList ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ipic_31__38_SequentialInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMin (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ipic_31__38_SequentialInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18_dataMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38__5F_dataMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inSource) ;
  public: GALGAS_pic_31__38__5F_dataMap & operator = (const GALGAS_pic_31__38__5F_dataMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38__5F_dataMap init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataMap extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38__5F_dataMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38__5F_dataMap class_func_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataMap & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uintlist & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38__5F_dataMap add_operation (const GALGAS_pic_31__38__5F_dataMap & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uintlist constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataForKey (class GALGAS_uintlist constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsData_38_ForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uintlist & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mDataForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsData_38_ForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38__5F_dataMap getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_pic_31__38__5F_dataMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_pic_31__38__5F_dataMap ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38__5F_dataMap : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mData (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsData_38_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38__5F_dataMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@pic18_dataMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uintlist mProperty_mData ;
  public: GALGAS_bool mProperty_mIsData_38_ ;

//--- Constructors
  public: cMapElement_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap_2D_element & inValue
                                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uintlist & in_mData,
                                              const GALGAS_bool & in_mIsData_38_
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
//
// Phase 1: @pic_31__38__5F_dataMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uintlist mProperty_mData ;
  public: inline GALGAS_uintlist readProperty_mData (void) const {
    return mProperty_mData ;
  }

  public: GALGAS_bool mProperty_mIsData_38_ ;
  public: inline GALGAS_bool readProperty_mIsData_38_ (void) const {
    return mProperty_mIsData_38_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38__5F_dataMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMData (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mData = inValue ;
  }

  public: inline void setter_setMIsData_38_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsData_38_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_uintlist & in_mData,
                                                    const GALGAS_bool & in_mIsData_38_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38__5F_dataMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_uintlist & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38__5F_dataMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_uintlist & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_pic_31__38__5F_dataMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: pic18_dataMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_pic_31__38__5F_dataMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ (const GALGAS_pic_31__38__5F_dataMap_2D_element & inValue) ;
  public: static GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_pic_31__38__5F_dataMap_2D_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GALGAS_bool readProperty_isNil (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GALGAS_bool readProperty_isSome (void) const {
    return GALGAS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
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
  public: static GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_SequentialInstruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SequentialInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_SequentialInstruction (const class cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_SequentialInstruction init_21_ (const class GALGAS_location & inOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstruction extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18SequentialInstruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SequentialInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_SequentialInstruction_init_21_ (const class GALGAS_location & inOperand0,
                                                           Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_bool & arg_outOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GALGAS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_ipic_31__38_SequentialInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_SequentialInstruction (const GALGAS_location & in_mInstructionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_SequentialInstruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstruction_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SequentialInstruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_SequentialInstruction_2D_weak (const class GALGAS_ipic_31__38_SequentialInstruction & inSource) ;

  public: GALGAS_ipic_31__38_SequentialInstruction_2D_weak & operator = (const class GALGAS_ipic_31__38_SequentialInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_SequentialInstruction bang_ipic_31__38_SequentialInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_SequentialInstruction_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_SequentialInstructionList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;
  public: inline GALGAS_ipic_31__38_SequentialInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

  public: GALGAS_uint mProperty_mMin ;
  public: inline GALGAS_uint readProperty_mMin (void) const {
    return mProperty_mMin ;
  }

  public: GALGAS_uint mProperty_mMax ;
  public: inline GALGAS_uint readProperty_mMax (void) const {
    return mProperty_mMax ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_ipic_31__38_SequentialInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

  public: inline void setter_setMMin (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMin = inValue ;
  }

  public: inline void setter_setMMax (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMax = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                   const GALGAS_uint & in_mMin,
                                                                   const GALGAS_uint & in_mMax) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_SequentialInstructionList_2D_element init_21__21__21_ (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1,
                                                                                           const class GALGAS_uint & inOperand2,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_SequentialInstructionList_2D_element class_func_new (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1,
                                                                                               const class GALGAS_uint & inOperand2,
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
 
} ; // End of GALGAS_ipic_31__38_SequentialInstructionList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_AbstractBlockTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_AbstractBlockTerminator : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_AbstractBlockTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_AbstractBlockTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;
  public: void setProperty_mInstructionLocation (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_AbstractBlockTerminator init_21_ (const class GALGAS_location & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractBlockTerminator extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_AbstractBlockTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18AbstractBlockTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractBlockTerminator : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_AbstractBlockTerminator_init_21_ (const class GALGAS_location & inOperand0,
                                                             Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_ipic_31__38_AbstractBlockTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_AbstractBlockTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (const class GALGAS_ipic_31__38_AbstractBlockTerminator & inSource) ;

  public: GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_AbstractBlockTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_AbstractBlockTerminator bang_ipic_31__38_AbstractBlockTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_Block struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_Block : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mAddress ;
  public: inline GALGAS_uint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GALGAS_lstring mProperty_mLabel ;
  public: inline GALGAS_lstring readProperty_mLabel (void) const {
    return mProperty_mLabel ;
  }

  public: GALGAS_ipic_31__38_SequentialInstructionList mProperty_mInstructionList ;
  public: inline GALGAS_ipic_31__38_SequentialInstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_ipic_31__38_AbstractBlockTerminator mProperty_mTerminator ;
  public: inline GALGAS_ipic_31__38_AbstractBlockTerminator readProperty_mTerminator (void) const {
    return mProperty_mTerminator ;
  }

  public: GALGAS_uint mProperty_mTerminatorMin ;
  public: inline GALGAS_uint readProperty_mTerminatorMin (void) const {
    return mProperty_mTerminatorMin ;
  }

  public: GALGAS_uint mProperty_mTerminatorMax ;
  public: inline GALGAS_uint readProperty_mTerminatorMax (void) const {
    return mProperty_mTerminatorMax ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_Block (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMLabel (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabel = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminator = inValue ;
  }

  public: inline void setter_setMTerminatorMin (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorMin = inValue ;
  }

  public: inline void setter_setMTerminatorMax (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminatorMax = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ipic_31__38_Block (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_Block (const GALGAS_uint & in_mAddress,
                                    const GALGAS_lstring & in_mLabel,
                                    const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                    const GALGAS_uint & in_mTerminatorMin,
                                    const GALGAS_uint & in_mTerminatorMax) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_Block init_21__21__21__21__21__21_ (const class GALGAS_uint & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                                        const class GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                                        const class GALGAS_uint & inOperand4,
                                                                        const class GALGAS_uint & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_Block extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_Block class_func_new (const class GALGAS_uint & inOperand0,
                                                                const class GALGAS_lstring & inOperand1,
                                                                const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                                const class GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                                const class GALGAS_uint & inOperand4,
                                                                const class GALGAS_uint & inOperand5,
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
 
} ; // End of GALGAS_ipic_31__38_Block class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_BlockList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_BlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_ipic_31__38_Block mProperty_mBlock ;
  public: inline GALGAS_ipic_31__38_Block readProperty_mBlock (void) const {
    return mProperty_mBlock ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_BlockList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMBlock (const GALGAS_ipic_31__38_Block & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlock = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ipic_31__38_BlockList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_BlockList_2D_element init_21_ (const class GALGAS_ipic_31__38_Block & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_BlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_BlockList_2D_element class_func_new (const class GALGAS_ipic_31__38_Block & inOperand0,
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
 
} ; // End of GALGAS_ipic_31__38_BlockList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_SingleInstructionTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SingleInstructionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SingleInstructionTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_SingleInstructionTerminator (const class cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_SingleInstructionTerminator init_21_ (const class GALGAS_location & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SingleInstructionTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_SingleInstructionTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18SingleInstructionTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SingleInstructionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_SingleInstructionTerminator_init_21_ (const class GALGAS_location & inOperand0,
                                                                 Compiler * inCompiler) ;


//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_ipic_31__38_SingleInstructionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_SingleInstructionTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (const class GALGAS_ipic_31__38_SingleInstructionTerminator & inSource) ;

  public: GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_SingleInstructionTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_SingleInstructionTerminator bang_ipic_31__38_SingleInstructionTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ReturnTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ReturnTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ReturnTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ReturnTerminator (const class cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_ReturnTerminator init_21_ (const class GALGAS_location & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ReturnTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ReturnTerminator class_func_new (const class GALGAS_location & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ReturnTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ReturnTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ReturnTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ReturnTerminator_init_21_ (const class GALGAS_location & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_ipic_31__38_ReturnTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ReturnTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ReturnTerminator_2D_weak : public GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ReturnTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ReturnTerminator_2D_weak (const class GALGAS_ipic_31__38_ReturnTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ReturnTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ReturnTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ReturnTerminator bang_ipic_31__38_ReturnTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ReturnTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ReturnTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ReturnTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_RetlwTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RetlwTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RetlwTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_RetlwTerminator (const class cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;
  public: void setProperty_mLiteralValue (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_RetlwTerminator init_21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_uint & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetlwTerminator extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_RetlwTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_RetlwTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18RetlwTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_RetlwTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_RetlwTerminator_init_21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_uint & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_ipic_31__38_RetlwTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_uint & in_mLiteralValue
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_RetlwTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RetlwTerminator_2D_weak : public GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RetlwTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_RetlwTerminator_2D_weak (const class GALGAS_ipic_31__38_RetlwTerminator & inSource) ;

  public: GALGAS_ipic_31__38_RetlwTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_RetlwTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_RetlwTerminator bang_ipic_31__38_RetlwTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetlwTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_RetlwTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_RetlwTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_RetfieTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RetfieTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RetfieTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_RetfieTerminator (const class cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mFastReturn (void) const ;
  public: void setProperty_mFastReturn (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_RetfieTerminator init_21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetfieTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_RetfieTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_bool & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_RetfieTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18RetfieTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_RetfieTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_RetfieTerminator_init_21__21_ (const class GALGAS_location & inOperand0,
                                                          const class GALGAS_bool & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mFastReturn ;


//--- Default constructor
  public: cPtr_ipic_31__38_RetfieTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_RetfieTerminator (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_bool & in_mFastReturn
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_RetfieTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RetfieTerminator_2D_weak : public GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RetfieTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_RetfieTerminator_2D_weak (const class GALGAS_ipic_31__38_RetfieTerminator & inSource) ;

  public: GALGAS_ipic_31__38_RetfieTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_RetfieTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_RetfieTerminator bang_ipic_31__38_RetfieTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetfieTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_RetfieTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_RetfieTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_JumpTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_JumpTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_JumpTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_JumpTerminator (const class cPtr_ipic_31__38_JumpTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLabel (void) const ;
  public: void setProperty_mLabel (const GALGAS_lstring & inValue) ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GALGAS_jumpInstructionKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_JumpTerminator init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_JumpTerminator extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_JumpTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_jumpInstructionKind & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18JumpTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_JumpTerminator_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_jumpInstructionKind & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38_JumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_lstring & in_mLabel,
                                           const GALGAS_jumpInstructionKind & in_mKind
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_JumpTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_JumpTerminator_2D_weak : public GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak (const class GALGAS_ipic_31__38_JumpTerminator & inSource) ;

  public: GALGAS_ipic_31__38_JumpTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_JumpTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_JumpTerminator bang_ipic_31__38_JumpTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_JumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_JumpTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedGotoTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedGotoTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedGotoTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ComputedGotoTerminator (const class cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;
  public: void setProperty_mUsesRCALL (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_ComputedGotoTerminator init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedGotoTerminator extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedGotoTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedGotoTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ComputedGotoTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedGotoTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedGotoTerminator_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_lstringlist & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedGotoTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstringlist & in_mTargetLabels,
                                                   const GALGAS_bool & in_mUsesRCALL
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedGotoTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak (const class GALGAS_ipic_31__38_ComputedGotoTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ComputedGotoTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ComputedGotoTerminator bang_ipic_31__38_ComputedGotoTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedRETLWTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedRETLWTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedRETLWTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ComputedRETLWTerminator (const class cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uintlist readProperty_mLiteralValues (void) const ;
  public: void setProperty_mLiteralValues (const GALGAS_uintlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;
  public: void setProperty_mUsesRCALL (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_ComputedRETLWTerminator init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_uintlist & inOperand1,
                                                                              const class GALGAS_bool & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedRETLWTerminator extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedRETLWTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_uintlist & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedRETLWTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ComputedRETLWTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedRETLWTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_uintlist & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uintlist mProperty_mLiteralValues ;
  public: GALGAS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedRETLWTerminator (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_uintlist & in_mLiteralValues,
                                                    const GALGAS_bool & in_mUsesRCALL
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedRETLWTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak (const class GALGAS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ComputedRETLWTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ComputedRETLWTerminator bang_ipic_31__38_ComputedRETLWTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum conditionalBranchMode
//--------------------------------------------------------------------------------------------------

class GALGAS_conditionalBranchMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_conditionalBranchMode (void) ;

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
  public: static GALGAS_conditionalBranchMode extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_conditionalBranchMode class_func_ipicBRA (LOCATION_ARGS) ;

  public: static class GALGAS_conditionalBranchMode class_func_ipicGOTO (LOCATION_ARGS) ;

  public: static class GALGAS_conditionalBranchMode class_func_native (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_conditionalBranchMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_ipicBRA (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_ipicGOTO (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_native (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_conditionalBranchMode class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ConditionalJumpTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ConditionalJumpTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator (const class cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;
  public: void setProperty_mConditionalBranch (const GALGAS_conditional_5F_branch & inValue) ;

  public: class GALGAS_lstring readProperty_mTargetLabelWhenTrue (void) const ;
  public: void setProperty_mTargetLabelWhenTrue (const GALGAS_lstring & inValue) ;

  public: class GALGAS_conditionalBranchMode readProperty_mBranchModeOnTrueLabel (void) const ;
  public: void setProperty_mBranchModeOnTrueLabel (const GALGAS_conditionalBranchMode & inValue) ;

  public: class GALGAS_lstring readProperty_mTargetLabelWhenFalse (void) const ;
  public: void setProperty_mTargetLabelWhenFalse (const GALGAS_lstring & inValue) ;

  public: class GALGAS_conditionalBranchMode readProperty_mBranchModeOnFalseLabel (void) const ;
  public: void setProperty_mBranchModeOnFalseLabel (const GALGAS_conditionalBranchMode & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2,
                                                                                            const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                            const class GALGAS_lstring & inOperand4,
                                                                                            const class GALGAS_conditionalBranchMode & inOperand5,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                    const class GALGAS_lstring & inOperand4,
                                                                                    const class GALGAS_conditionalBranchMode & inOperand5
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ConditionalJumpTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ConditionalJumpTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ConditionalJumpTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ConditionalJumpTerminator_init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                   const class GALGAS_conditionalBranchMode & inOperand5,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenTrue ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnTrueLabel ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenFalse ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnFalseLabel ;


//--- Default constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ConditionalJumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                      const GALGAS_lstring & in_mTargetLabelWhenTrue,
                                                      const GALGAS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                      const GALGAS_lstring & in_mTargetLabelWhenFalse,
                                                      const GALGAS_conditionalBranchMode & in_mBranchModeOnFalseLabel
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ConditionalJumpTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (const class GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ConditionalJumpTerminator bang_ipic_31__38_ConditionalJumpTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedBraTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedBraTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedBraTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_ComputedBraTerminator (const class cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;
  public: void setProperty_mTargetLabels (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;
  public: void setProperty_mUsesRCALL (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_ComputedBraTerminator init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_lstringlist & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedBraTerminator extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedBraTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstringlist & inOperand1,
                                                                                const class GALGAS_bool & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedBraTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18ComputedBraTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_ComputedBraTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_ComputedBraTerminator_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_ComputedBraTerminator (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                  const GALGAS_bool & in_mUsesRCALL
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_ComputedBraTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak (const class GALGAS_ipic_31__38_ComputedBraTerminator & inSource) ;

  public: GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_ComputedBraTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_ComputedBraTerminator bang_ipic_31__38_ComputedBraTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38_RegisterComparison
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RegisterComparison (void) ;

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
  public: static GALGAS_ipic_31__38_RegisterComparison extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_RegisterComparison class_func_registerEqualsToW (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_RegisterComparison class_func_registerGreaterThanW (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_RegisterComparison class_func_registerLowerThanW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_registerEqualsToW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_registerGreaterThanW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_registerLowerThanW (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_RegisterComparison class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_AbstractConditionTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_AbstractConditionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_AbstractConditionTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_AbstractConditionTerminator (const class cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const ;
  public: void setProperty_mSingleInstructionTerminatorIfConditionTrue (const GALGAS_ipic_31__38_SingleInstructionTerminator & inValue) ;

  public: class GALGAS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const ;
  public: void setProperty_mSingleInstructionTerminatorIfConditionFalse (const GALGAS_ipic_31__38_SingleInstructionTerminator & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_AbstractConditionTerminator init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractConditionTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_AbstractConditionTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18AbstractConditionTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_AbstractConditionTerminator_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                         const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                         Compiler * inCompiler) ;


//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & arg_ioBlockToExploreSet,
           class GALGAS_stringset & arg_ioExploredBlockSet,
           class GALGAS_uint & arg_outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getOptimizedTerminators
  public: virtual void method_getOptimizedTerminators (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedTrueTerminator,
           class GALGAS_ipic_31__38_SingleInstructionTerminator & arg_outOptimizedFalseTerminator,
           class GALGAS_bool & arg_outIdenticalTerminators,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  public: GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionFalse ;


//--- Default constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_AbstractConditionTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (const class GALGAS_ipic_31__38_AbstractConditionTerminator & inSource) ;

  public: GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_AbstractConditionTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_AbstractConditionTerminator bang_ipic_31__38_AbstractConditionTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpression struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mAssemblyString ;
  public: inline GALGAS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GALGAS_uint mProperty_mRegisterAddress ;
  public: inline GALGAS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

  public: GALGAS_bool mProperty_mNeedsBSR ;
  public: inline GALGAS_bool readProperty_mNeedsBSR (void) const {
    return mProperty_mNeedsBSR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

  public: inline void setter_setMNeedsBSR (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsBSR = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                     const GALGAS_uint & in_mRegisterAddress,
                                                                     const GALGAS_bool & in_mNeedsBSR) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_uint & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression class_func_new (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_uint & inOperand1,
                                                                                                 const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterComparisonTerminator (const class cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_ipic_31__38_RegisterComparison readProperty_mComparison (void) const ;
  public: void setProperty_mComparison (const GALGAS_ipic_31__38_RegisterComparison & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                          const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                          const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                          const class GALGAS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                      const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                      const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                      const class GALGAS_ipic_31__38_RegisterComparison & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterComparisonTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_RegisterComparisonTerminator_init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                 const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                 const class GALGAS_ipic_31__38_RegisterComparison & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_ipic_31__38_RegisterComparison mProperty_mComparison ;


//--- Default constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonTerminator (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        const GALGAS_ipic_31__38_RegisterComparison & in_mComparison
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (const class GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) ;

  public: GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & operator = (const class GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_RegisterComparisonTerminator bang_pic_31__38_RegisterComparisonTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_IncDecRegisterTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_IncDecRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_IncDecRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_IncDecRegisterTerminator (const class cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;
  public: void setProperty_mIncrement (const GALGAS_bool & inValue) ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_IncDecRegisterTerminator init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                           const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                           const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                           const class GALGAS_bool & inOperand4,
                                                                                           const class GALGAS_bool & inOperand5,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_IncDecRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_IncDecRegisterTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                   const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                   const class GALGAS_bool & inOperand4,
                                                                                   const class GALGAS_bool & inOperand5
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_IncDecRegisterTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18IncDecRegisterTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4,
                                                                                  const class GALGAS_bool & inOperand5,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                     const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                     const GALGAS_bool & in_mIncrement,
                                                     const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_IncDecRegisterTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak (const class GALGAS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

  public: GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak & operator = (const class GALGAS_ipic_31__38_IncDecRegisterTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_IncDecRegisterTerminator bang_ipic_31__38_IncDecRegisterTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_TestRegisterTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_TestRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_TestRegisterTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_TestRegisterTerminator (const class cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_TestRegisterTerminator init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_TestRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_TestRegisterTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_TestRegisterTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18TestRegisterTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_TestRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                       const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           const class GALGAS_bool arg_inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_TestRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                  const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_TestRegisterTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_TestRegisterTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_TestRegisterTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_TestRegisterTerminator_2D_weak (const class GALGAS_pic_31__38_TestRegisterTerminator & inSource) ;

  public: GALGAS_pic_31__38_TestRegisterTerminator_2D_weak & operator = (const class GALGAS_pic_31__38_TestRegisterTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_TestRegisterTerminator bang_pic_31__38_TestRegisterTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_TestRegisterTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_TestRegisterTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_TestRegisterTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BitTestTerminator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestTerminator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_BitTestTerminator (const class cPtr_pic_31__38_BitTestTerminator * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_pic_31__38_BitTestTerminator init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                               const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                               const class GALGAS_uint & inOperand4,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BitTestTerminator class_func_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                           const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                           const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                           const class GALGAS_uint & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BitTestTerminator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18BitTestTerminator class
//
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                      const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                      const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                      const class GALGAS_uint & inOperand4,
                                                                      Compiler * inCompiler) ;


//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_blockInvocationGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_string arg_inBlockLabel,
           class GALGAS_bool & arg_ioOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_string arg_inNextBlockLabel,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & arg_outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap arg_inExploredBlockMap,
           const class GALGAS_string arg_inNextLabel,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_pic_31__38_BitTestTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestTerminator (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                             const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                             const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                             const GALGAS_uint & in_mBitNumber
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BitTestTerminator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestTerminator_2D_weak : public GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestTerminator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_BitTestTerminator_2D_weak (const class GALGAS_pic_31__38_BitTestTerminator & inSource) ;

  public: GALGAS_pic_31__38_BitTestTerminator_2D_weak & operator = (const class GALGAS_pic_31__38_BitTestTerminator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_BitTestTerminator bang_pic_31__38_BitTestTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_pic_31__38_BitTestTerminator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38_BitTestTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_InstructionWithNoOperand reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_InstructionWithNoOperand : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_InstructionWithNoOperand (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38_InstructionWithNoOperand (const class cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38_InstructionWithNoOperand init_21__21_ (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_InstructionWithNoOperand extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_InstructionWithNoOperand class_func_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_InstructionWithNoOperand class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18InstructionWithNoOperand class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_InstructionWithNoOperand : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38_InstructionWithNoOperand_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1,
                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38_InstructionWithNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38_InstructionWithNoOperand_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak (const class GALGAS_ipic_31__38_InstructionWithNoOperand & inSource) ;

  public: GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak & operator = (const class GALGAS_ipic_31__38_InstructionWithNoOperand & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38_InstructionWithNoOperand bang_ipic_31__38_InstructionWithNoOperand_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@ipic18_intermediate_registerExpression isEqualToRegister' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_isEqualToRegister (const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;
  public: void setProperty_mInstruction_5F_FDA_5F_base_5F_code (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;
  public: void setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                 const class GALGAS_bool & inOperand3,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class_func_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                 const class GALGAS_bool & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_FDA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                        const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GALGAS_bool & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum FA_5F_sequential_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) ;

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
  public: static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_CLRF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MOVWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_MULWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_NEGF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class_func_SETF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_CLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_MOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_MULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_NEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_SETF (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;
  public: void setProperty_mFAinstruction (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                            const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA class_func_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                                const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_FA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mAssemblyString ;
  public: inline GALGAS_string readProperty_mAssemblyString (void) const {
    return mProperty_mAssemblyString ;
  }

  public: GALGAS_uint mProperty_mRegisterAddress ;
  public: inline GALGAS_uint readProperty_mRegisterAddress (void) const {
    return mProperty_mRegisterAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAssemblyString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssemblyString = inValue ;
  }

  public: inline void setter_setMRegisterAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterAddress = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & in_mAssemblyString,
                                                                                         const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                                             const class GALGAS_uint & inOperand1,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication class_func_new (const class GALGAS_string & inOperand0,
                                                                                                                     const class GALGAS_uint & inOperand1,
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
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mSourceRegisterDescription (void) const ;
  public: void setProperty_mSourceRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mDestinationRegisterDescription (void) const ;
  public: void setProperty_mDestinationRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                               const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class_func_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVFF class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                      const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mSourceRegisterDescription ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mDestinationRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;
  public: void setProperty_mLiteralInstruction (const GALGAS_literal_5F_instruction_5F_opcode & inValue) ;

  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;
  public: void setProperty_mLiteralValue (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                          const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                          const class GALGAS_uint & inOperand2,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class_func_new (const class GALGAS_location & inOperand0,
                                                                                                              const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                              const class GALGAS_uint & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_literalOperation class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                 const class GALGAS_uint & inOperand2,
                                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GALGAS_uint mProperty_mLiteralValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                const GALGAS_uint & in_mLiteralValue
                                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mFSRindex (void) const ;
  public: void setProperty_mFSRindex (const GALGAS_luint & inValue) ;

  public: class GALGAS_uint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_luint & inOperand1,
                                                                                              const class GALGAS_uint & inOperand2,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class_func_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_luint & inOperand1,
                                                                                                  const class GALGAS_uint & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_LFSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_luint & inOperand1,
                                                                                     const class GALGAS_uint & inOperand2,
                                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mFSRindex ;
  public: GALGAS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_luint & in_mFSRindex,
                                                                    const GALGAS_uint & in_mValue
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;
  public: void setProperty_mBitOrientedOp (const GALGAS_bit_5F_oriented_5F_op & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class_func_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_FBA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                        const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                        const class GALGAS_uint & inOperand3,
                                                                                        Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GALGAS_uint & in_mBitNumber
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_JSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR (const class cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;
  public: void setProperty_mTargetLabel (const GALGAS_lstring & inValue) ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GALGAS_jumpInstructionKind & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_jumpInstructionKind & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR class_func_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_jumpInstructionKind & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_JSR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_JSR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_JSR : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_JSR_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_jumpInstructionKind & inOperand2,
                                                                     Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_bool & arg_outOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GALGAS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mTargetLabel,
                                                    const GALGAS_jumpInstructionKind & in_mKind
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_JSR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_JSR bang_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mBankIndex (void) const ;
  public: void setProperty_mBankIndex (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_luint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class_func_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_luint & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_MOVLB class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_luint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mBankIndex ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_luint & in_mBankIndex
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mBlankValue (void) const ;
  public: void setProperty_mBlankValue (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class_func_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_uint & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_FNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_uint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_uint & in_mBlankValue
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mBlankValue (void) const ;
  public: void setProperty_mBlankValue (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class_func_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_uint & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_BLANK class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mBlankValue ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_uint & in_mBlankValue
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GALGAS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_tableAccessOption & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class_func_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_tableAccessOption & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLRD class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_tableAccessOption & in_mOption
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;
  public: void setProperty_mOption (const GALGAS_tableAccessOption & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_tableAccessOption & inOperand1,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class_func_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_tableAccessOption & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_TBLWT class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_tableAccessOption & inOperand1,
                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_tableAccessOption & in_mOption
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_luint & inOperand1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class_func_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_luint & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_MNOP class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_luint & inOperand1,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_luint & in_mOccurrenceFactor
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;
  public: void setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_luint & inOperand1,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class_func_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_luint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_NOPBRA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_luint & inOperand1,
                                                                                   Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_luint & in_mOccurrenceFactor
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLabel (void) const ;
  public: void setProperty_mLabel (const GALGAS_lstring & inValue) ;

  public: class GALGAS_uint readProperty_mOffset (void) const ;
  public: void setProperty_mOffset (const GALGAS_uint & inValue) ;

  public: class GALGAS_uint readProperty_mRightShift (void) const ;
  public: void setProperty_mRightShift (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                const class GALGAS_uint & inOperand2,
                                                                                                const class GALGAS_uint & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class_func_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_lstring & inOperand1,
                                                                                                const class GALGAS_uint & inOperand2,
                                                                                                const class GALGAS_uint & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_MOV_LABEL_W class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_uint & inOperand2,
                                                                                       const class GALGAS_uint & inOperand3,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_uint mProperty_mOffset ;
  public: GALGAS_uint mProperty_mRightShift ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_lstring & in_mLabel,
                                                                  const GALGAS_uint & in_mOffset,
                                                                  const GALGAS_uint & in_mRightShift
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38_SequentialInstructionList readProperty_mTargetInstructions (void) const ;
  public: void setProperty_mTargetInstructions (const GALGAS_ipic_31__38_SequentialInstructionList & inValue) ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;
  public: void setProperty_mUsesRCALL (const GALGAS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                           const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                           const class GALGAS_bool & inOperand2,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class_func_new (const class GALGAS_location & inOperand0,
                                                                                                               const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                               const class GALGAS_bool & inOperand2
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_intermediate_instruction_computed_rcall class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                  Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_bool & arg_outOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GALGAS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SequentialInstructionList mProperty_mTargetInstructions ;
  public: GALGAS_bool mProperty_mUsesRCALL ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                 const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                 const GALGAS_bool & in_mUsesRCALL
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction : public GALGAS_ipic_31__38_SequentialInstruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38_SequentialInstruction readProperty_mEmbeddedInstruction (void) const ;
  public: void setProperty_mEmbeddedInstruction (const GALGAS_ipic_31__38_SequentialInstruction & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction init_21__21_ (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_condition_skip_instruction class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction : public cPtr_ipic_31__38_SequentialInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_condition_5F_skip_5F_instruction_init_21__21_ (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                              Compiler * inCompiler) ;


//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & arg_ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_string & arg_ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           class GALGAS_stringset & arg_ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_branchOverflowMap & arg_ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap arg_inExploredBlockMap,
           class GALGAS_uint & arg_outMin,
           class GALGAS_uint & arg_outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SequentialInstruction mProperty_mEmbeddedInstruction ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak : public GALGAS_ipic_31__38_SequentialInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (const class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;
  public: void setProperty_mSkipIfSet (const GALGAS_bool & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;
  public: void setProperty_mBitNumber (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                     const class GALGAS_bool & inOperand2,
                                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                     const class GALGAS_uint & inOperand4,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class_func_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                 const class GALGAS_bool & inOperand2,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                 const class GALGAS_uint & inOperand4
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_skip_instruction_BitTestSkip class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                            const class GALGAS_bool & inOperand2,
                                                                                            const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                            const class GALGAS_uint & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_bool & arg_outOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GALGAS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                   const GALGAS_bool & in_mSkipIfSet,
                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GALGAS_uint & in_mBitNumber
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) ;

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
  public: static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSEQ (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSGT (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_CPFSLT (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class_func_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_CPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_CPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_CPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_TSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code readProperty_mCompareInstruction (void) const ;
  public: void setProperty_mCompareInstruction (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inValue) ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;
  public: void setProperty_mRegisterDescription (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                         const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                         const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                         const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class_func_new (const class GALGAS_location & inOperand0,
                                                                                                         const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                         const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                         const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_skip_instruction_compare_register class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                Compiler * inCompiler) ;


//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint arg_inAddress,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap arg_inDataMap,
           class GALGAS_codeList & arg_outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization arg_inSymbolTable,
           const class GALGAS_optimizeFlagStruct arg_inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList arg_inBlockList,
           const class GALGAS_lstring arg_inBlockLabel,
           class GALGAS_bool & arg_outOptimizationDone,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outOptimizedInstruction,
           class GALGAS_bool & arg_outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint arg_inAddress,
           const class GALGAS_string arg_inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution arg_inSymbolTable,
           class GALGAS_uint & arg_ioConversionCount,
           class GALGAS_string & arg_ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & arg_outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mProperty_mCompareInstruction ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;


//--- Default constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                           const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                           const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ;

//--------------------------------------------------------------------------------------------------
//   enum skip_5F_instruction_5F_FDA_5F_base_5F_code
//--------------------------------------------------------------------------------------------------

class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

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
  public: static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DCFSNZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_DECFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INCFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class_func_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_DCFSNZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_DECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_INCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_INFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

