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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IntervalCaseItem_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_IntervalCaseItem_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_IntervalCaseItem_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_CaseExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_CaseExpressionList_2D_element constructor_new (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & in_mStartOfCase,
                                                                  const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                                               const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                               class Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_switch_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_switch_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_caseConstantMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_caseConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_caseConstantMap constructor_mapWithMapToOverride (const class GALGAS_caseConstantMap & inOperand0
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


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_caseConstantMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_caseConstantMap ;
 
} ; // End of GALGAS_caseConstantMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_caseConstantMap : public cGenericAbstractEnumerator {
  public: cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

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

//--- Constructor
  public: cMapElement_caseConstantMap (const GALGAS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_caseConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_caseConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_caseConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_caseConstantMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_BlockList extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_BlockList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_BlockList constructor_listWithValue (const class GALGAS_ipic_31__38_Block & inOperand0
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ipic_31__38_BlockList ;
 
} ; // End of GALGAS_ipic_31__38_BlockList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ipic_31__38_BlockList : public cGenericAbstractEnumerator {
  public: cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstructionList extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_SequentialInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_SequentialInstructionList constructor_listWithValue (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_ipic_31__38_SequentialInstructionList ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstructionList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ipic_31__38_SequentialInstructionList : public cGenericAbstractEnumerator {
  public: cEnumerator_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

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
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataMap extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38__5F_dataMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38__5F_dataMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataMap & inOperand0
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


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uintlist & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38__5F_dataMap ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38__5F_dataMap : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

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

//--- Constructor
  public: cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uintlist & in_mData,
                                              const GALGAS_bool & in_mIsData_38_
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_uintlist & in_mData,
                                                    const GALGAS_bool & in_mIsData_38_) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38__5F_dataMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38__5F_dataMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_uintlist & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;

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

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstruction extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_ipic_31__38_SequentialInstruction (const GALGAS_location & in_mInstructionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_SequentialInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                   const GALGAS_uint & in_mMin,
                                                                   const GALGAS_uint & in_mMax) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SequentialInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_SequentialInstructionList_2D_element constructor_new (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                const class GALGAS_uint & inOperand1,
                                                                                                const class GALGAS_uint & inOperand2,
                                                                                                class Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractBlockTerminator extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ipic_31__38_Block (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_Block (const GALGAS_uint & in_mAddress,
                                    const GALGAS_lstring & in_mLabel,
                                    const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                    const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                    const GALGAS_uint & in_mTerminatorMin,
                                    const GALGAS_uint & in_mTerminatorMax) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_Block extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_Block constructor_new (const class GALGAS_uint & inOperand0,
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
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_Block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ipic_31__38_BlockList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_BlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_BlockList_2D_element constructor_new (const class GALGAS_ipic_31__38_Block & inOperand0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SingleInstructionTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ReturnTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ReturnTerminator constructor_new (const class GALGAS_location & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ReturnTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ReturnTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetlwTerminator extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_RetlwTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLiteralValue (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mLiteralValue ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetlwTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_RetlwTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mFastReturn (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetfieTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_RetfieTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_bool & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFastReturn (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mFastReturn ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RetfieTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_RetfieTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_JumpTerminator extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_JumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_jumpInstructionKind & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method duration
  public: virtual void method_duration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_JumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_JumpTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedGotoTerminator extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedGotoTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabels (class GALGAS_lstringlist inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsesRCALL (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRCALL ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_uintlist readProperty_mLiteralValues (void) const ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedRETLWTerminator extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedRETLWTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_uintlist & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLiteralValues (class GALGAS_uintlist inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsesRCALL (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uintlist mProperty_mLiteralValues ;
  public: GALGAS_bool mProperty_mUsesRCALL ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @conditionalBranchMode enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_conditionalBranchMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_conditionalBranchMode (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_native,
    kEnum_ipicBRA,
    kEnum_ipicGOTO
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_conditionalBranchMode extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_conditionalBranchMode constructor_ipicBRA (LOCATION_ARGS) ;

  public: static class GALGAS_conditionalBranchMode constructor_ipicGOTO (LOCATION_ARGS) ;

  public: static class GALGAS_conditionalBranchMode constructor_native (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_conditionalBranchMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIpicBRA (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIpicGOTO (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNative (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_ipicBRA () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ipicGOTO () const ;

  public: VIRTUAL_IN_DEBUG bool optional_native () const ;


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

//--------------------------------- Property read access
  public: class GALGAS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GALGAS_lstring readProperty_mTargetLabelWhenTrue (void) const ;

  public: class GALGAS_conditionalBranchMode readProperty_mBranchModeOnTrueLabel (void) const ;

  public: class GALGAS_lstring readProperty_mTargetLabelWhenFalse (void) const ;

  public: class GALGAS_conditionalBranchMode readProperty_mBranchModeOnFalseLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_conditional_5F_branch & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_conditionalBranchMode & inOperand3,
                                                                                     const class GALGAS_lstring & inOperand4,
                                                                                     const class GALGAS_conditionalBranchMode & inOperand5
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnFalseLabel (class GALGAS_conditionalBranchMode inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBranchModeOnTrueLabel (class GALGAS_conditionalBranchMode inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenFalse (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabelWhenTrue (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenTrue ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnTrueLabel ;
  public: GALGAS_lstring mProperty_mTargetLabelWhenFalse ;
  public: GALGAS_conditionalBranchMode mProperty_mBranchModeOnFalseLabel ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mTargetLabels (void) const ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedBraTerminator extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedBraTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabels (class GALGAS_lstringlist inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsesRCALL (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstringlist mProperty_mTargetLabels ;
  public: GALGAS_bool mProperty_mUsesRCALL ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                    Phase 1: @ipic_31__38_RegisterComparison enum                                    *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_registerEqualsToW,
    kEnum_registerGreaterThanW,
    kEnum_registerLowerThanW
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_RegisterComparison extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_RegisterComparison constructor_registerEqualsToW (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_RegisterComparison constructor_registerGreaterThanW (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38_RegisterComparison constructor_registerLowerThanW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterEqualsToW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterGreaterThanW (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterLowerThanW (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_registerEqualsToW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_registerGreaterThanW () const ;

  public: VIRTUAL_IN_DEBUG bool optional_registerLowerThanW () const ;


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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const ;

  public: class GALGAS_ipic_31__38_SingleInstructionTerminator readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractConditionTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSingleInstructionTerminatorIfConditionFalse (class GALGAS_ipic_31__38_SingleInstructionTerminator inArgument0
                                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSingleInstructionTerminatorIfConditionTrue (class GALGAS_ipic_31__38_SingleInstructionTerminator inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter needToInsertJumpInstruction
  public: virtual class GALGAS_bool getter_needToInsertJumpInstruction (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorSize
  public: virtual class GALGAS_uint getter_terminatorSize (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorInvocationGraph
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterTerminatorReferencedLabels
  public: virtual void method_enterTerminatorReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method exploreAccessibleBlocksForStackComputations
  public: virtual void method_exploreAccessibleBlocksForStackComputations (class GALGAS_stringset & ioBlockToExploreSet,
           class GALGAS_stringset & ioExploredBlockSet,
           class GALGAS_uint & outStackNeeds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method getOptimizedTerminators
  public: virtual void method_getOptimizedTerminators (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SingleInstructionTerminator & outOptimizedTrueTerminator,
           class GALGAS_ipic_31__38_SingleInstructionTerminator & outOptimizedFalseTerminator,
           class GALGAS_bool & outIdenticalTerminators,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method terminatorRelativeBranchOverflow
  public: virtual void method_terminatorRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  public: GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionFalse ;

//--- Constructor
  public: cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                     const GALGAS_uint & in_mRegisterAddress,
                                                                     const GALGAS_bool & in_mNeedsBSR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_uint & inOperand1,
                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                  class Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_ipic_31__38_RegisterComparison readProperty_mComparison (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                       const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                       const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                       const class GALGAS_ipic_31__38_RegisterComparison & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_ipic_31__38_RegisterComparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_ipic_31__38_RegisterComparison mProperty_mComparison ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_IncDecRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_IncDecRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                    const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                    const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4,
                                                                                    const class GALGAS_bool & inOperand5
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_TestRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_TestRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                 const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
  public: virtual void method_buildTerminatorInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           const class GALGAS_bool inDottedArrow,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_TestRegisterTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_TestRegisterTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestTerminator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BitTestTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                            const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                            const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                            const class GALGAS_uint & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter isEqualToTerminator
  public: virtual class GALGAS_bool getter_isEqualToTerminator (const class GALGAS_ipic_31__38_AbstractBlockTerminator inTerminator,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter terminatorDisplay
  public: virtual class GALGAS_string getter_terminatorDisplay (const class GALGAS_string inNextBlockLabel,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildTerminatorOrderedGraph
  public: virtual void method_buildTerminatorOrderedGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_blockInvocationGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateTerminatorCode
  public: virtual void method_generateTerminatorCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeTerminator
  public: virtual void method_optimizeTerminator (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_string inBlockLabel,
           class GALGAS_bool & ioOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outOptimizedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performTerminatorRelativeBranchResolution
  public: virtual void method_performTerminatorRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_string inNextBlockLabel,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_AbstractBlockTerminator & outModifiedTerminator,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method terminatorMinMaxDuration
  public: virtual void method_terminatorMinMaxDuration (const class GALGAS_blockDurationMap inExploredBlockMap,
           const class GALGAS_string inNextLabel,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestTerminator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BitTestTerminator_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_InstructionWithNoOperandKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_InstructionWithNoOperand extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_InstructionWithNoOperand constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_pic_31__38_InstructionWithNoOperandKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GALGAS_bool & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                            Phase 1: @FA_5F_sequential_5F_instruction_5F_base_5F_code enum                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_MOVWF,
    kEnum_MULWF,
    kEnum_NEGF,
    kEnum_SETF
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public: static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSETF (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CLRF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MOVWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_MULWF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_NEGF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_SETF () const ;


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

//--------------------------------- Property read access
  public: class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                                 const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & in_mAssemblyString,
                                                                                         const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication constructor_new (const class GALGAS_string & inOperand0,
                                                                                                                      const class GALGAS_uint & inOperand1,
                                                                                                                      class Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mSourceRegisterDescription (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication readProperty_mDestinationRegisterDescription (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                                    const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mSourceRegisterDescription ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mDestinationRegisterDescription ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_literal_5F_instruction_5F_opcode readProperty_mLiteralInstruction (void) const ;

  public: class GALGAS_uint readProperty_mLiteralValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                               const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                               const class GALGAS_uint & inOperand2
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLiteralInstruction (class GALGAS_literal_5F_instruction_5F_opcode inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLiteralValue (class GALGAS_uint inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public: GALGAS_uint mProperty_mLiteralValue ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mFSRindex (void) const ;

  public: class GALGAS_uint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_luint & inOperand1,
                                                                                                   const class GALGAS_uint & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFSRindex (class GALGAS_luint inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mFSRindex ;
  public: GALGAS_uint mProperty_mValue ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                  const class GALGAS_uint & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_jumpInstructionKind & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_jumpInstructionKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mBankIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_luint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBankIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mBankIndex ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mBlankValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_uint & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBlankValue (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mBlankValue ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mBlankValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_uint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBlankValue (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mBlankValue ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_tableAccessOption & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_tableAccessOption inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_tableAccessOption readProperty_mOption (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_tableAccessOption & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_tableAccessOption inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_tableAccessOption mProperty_mOption ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_luint & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mOccurrenceFactor (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_luint & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOccurrenceFactor (class GALGAS_luint inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mOccurrenceFactor ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLabel (void) const ;

  public: class GALGAS_uint readProperty_mOffset (void) const ;

  public: class GALGAS_uint readProperty_mRightShift (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W constructor_new (const class GALGAS_location & inOperand0,
                                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                                 const class GALGAS_uint & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLabel (class GALGAS_lstring inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightShift (class GALGAS_uint inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLabel ;
  public: GALGAS_uint mProperty_mOffset ;
  public: GALGAS_uint mProperty_mRightShift ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38_SequentialInstructionList readProperty_mTargetInstructions (void) const ;

  public: class GALGAS_bool readProperty_mUsesRCALL (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall constructor_new (const class GALGAS_location & inOperand0,
                                                                                                                const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                                const class GALGAS_bool & inOperand2
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetInstructions (class GALGAS_ipic_31__38_SequentialInstructionList inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUsesRCALL (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SequentialInstructionList mProperty_mTargetInstructions ;
  public: GALGAS_bool mProperty_mUsesRCALL ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38_SequentialInstruction readProperty_mEmbeddedInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEmbeddedInstruction (class GALGAS_ipic_31__38_SequentialInstruction inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionSize
  public: virtual class GALGAS_uint getter_instructionSize (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildCalledRoutineSetForStackComputations
  public: virtual void method_buildCalledRoutineSetForStackComputations (class GALGAS_stringset & ioRoutineCalledSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method buildInstructionInvocationGraph
  public: virtual void method_buildInstructionInvocationGraph (const class GALGAS_lstring inBlockLabel,
           class GALGAS_string & ioGraphVizString,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionReferencedLabels
  public: virtual void method_enterInstructionReferencedLabels (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           class GALGAS_stringset & ioReferencedBlockSet,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method instructionRelativeBranchOverflow
  public: virtual void method_instructionRelativeBranchOverflow (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_branchOverflowMap & ioOverflowMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method minMaxDuration
  public: virtual void method_minMaxDuration (class GALGAS_blockDurationMap inExploredBlockMap,
           class GALGAS_uint & outMin,
           class GALGAS_uint & outMax,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38_SequentialInstruction mProperty_mEmbeddedInstruction ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_uint readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                  const class GALGAS_uint & inOperand4
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_uint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_uint mProperty_mBitNumber ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                  Phase 1: @ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code enum                  *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_CPFSEQ,
    kEnum_CPFSGT,
    kEnum_CPFSLT,
    kEnum_TSTFSZ
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public: static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_CPFSEQ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CPFSGT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_CPFSLT () const ;

  public: VIRTUAL_IN_DEBUG bool optional_TSTFSZ () const ;


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

//--------------------------------- Property read access
  public: class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code readProperty_mCompareInstruction (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                                          const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                          const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                          const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCompareInstruction (class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

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
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mProperty_mCompareInstruction ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

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

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

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

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                              Phase 1: @skip_5F_instruction_5F_FDA_5F_base_5F_code enum                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_DECFSZ,
    kEnum_DCFSNZ,
    kEnum_INCFSZ,
    kEnum_INFSNZ
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DCFSNZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public: static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDCFSNZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_DCFSNZ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_DECFSZ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_INCFSZ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_INFSNZ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression readProperty_mRegisterDescription (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                          const class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                          const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterDescription (class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ipic18_skip_instruction_FDA class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter instructionDisplay
  public: virtual class GALGAS_stringlist getter_instructionDisplay (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_uint inAddress,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           const class GALGAS_pic_31__38__5F_dataAddressMap inDataMap,
           class GALGAS_codeList & outCode,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method optimizeInstruction
  public: virtual void method_optimizeInstruction (const class GALGAS_symbolTableForBlockOptimization inSymbolTable,
           const class GALGAS_optimizeFlagStruct inOptimizeFlagStruct,
           const class GALGAS_ipic_31__38_BlockList inBlockList,
           const class GALGAS_lstring inBlockLabel,
           class GALGAS_bool & outOptimizationDone,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outOptimizedInstruction,
           class GALGAS_bool & outNOPsubstitution,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method performInstructionRelativeBranchResolution
  public: virtual void method_performInstructionRelativeBranchResolution (const class GALGAS_uint inAddress,
           const class GALGAS_string inBlockLabel,
           const class GALGAS_symbolTableForRelativesResolution inSymbolTable,
           class GALGAS_uint & ioConversionCount,
           class GALGAS_string & ioListFileContents,
           class GALGAS_ipic_31__38_SequentialInstruction & outModifiedInstruction,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                           const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                           const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & operator = (const class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForBlockOptimization map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForBlockOptimization : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_symbolTableForBlockOptimization (void) ;

//--------------------------------- Handle copy
  public: GALGAS_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inSource) ;
  public: GALGAS_symbolTableForBlockOptimization & operator = (const GALGAS_symbolTableForBlockOptimization & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForBlockOptimization extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForBlockOptimization constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_symbolTableForBlockOptimization constructor_mapWithMapToOverride (const class GALGAS_symbolTableForBlockOptimization & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_symbolTableForBlockOptimization add_operation (const GALGAS_symbolTableForBlockOptimization & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefinitionBlockIndexForKey (class GALGAS_uint constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionBlockIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_symbolTableForBlockOptimization getter_overriddenMap (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_symbolTableForBlockOptimization * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForBlockOptimization ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForBlockOptimization : public cGenericAbstractEnumerator {
  public: cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_symbolTableForBlockOptimization_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@symbolTableForBlockOptimization' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mDefinitionBlockIndex ;

//--- Constructor
  public: cMapElement_symbolTableForBlockOptimization (const GALGAS_lstring & inKey,
                                                       const GALGAS_uint & in_mDefinitionBlockIndex
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @symbolTableForBlockOptimization_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForBlockOptimization_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mDefinitionBlockIndex ;
  public: inline GALGAS_uint readProperty_mDefinitionBlockIndex (void) const {
    return mProperty_mDefinitionBlockIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDefinitionBlockIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefinitionBlockIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_uint & in_mDefinitionBlockIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_symbolTableForBlockOptimization_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_symbolTableForBlockOptimization_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;

