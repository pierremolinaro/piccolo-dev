#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_NegateCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_NegateCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_NegateCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_NegateCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_NegateCondition_2D_weak (const class GALGAS_pic_31__38_NegateCondition & inSource) ;

  public: GALGAS_pic_31__38_NegateCondition_2D_weak & operator = (const class GALGAS_pic_31__38_NegateCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_NegateCondition bang_pic_31__38_NegateCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_NegateCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_NegateCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_NegateCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_NegateCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AndCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AndCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AndCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_AndCondition (const class cPtr_pic_31__38_AndCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AndCondition extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_AndCondition constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                       const class GALGAS_pic_31__38_ConditionExpression & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_AndCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_pic_31__38_ConditionExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_pic_31__38_ConditionExpression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AndCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18AndCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_AndCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mLeftExpression ;
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                        const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AndCondition_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AndCondition_2D_weak : public GALGAS_pic_31__38_ConditionExpression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AndCondition_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_AndCondition_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_AndCondition_2D_weak (const class GALGAS_pic_31__38_AndCondition & inSource) ;

  public: GALGAS_pic_31__38_AndCondition_2D_weak & operator = (const class GALGAS_pic_31__38_AndCondition & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_AndCondition bang_pic_31__38_AndCondition_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AndCondition_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_AndCondition_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_AndCondition_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AndCondition_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_structured_5F_if : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const class cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mIfCondition (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mThenInstructionList (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfElsePartLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                                          const class GALGAS_location & inOperand4
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfElsePartLocation (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIfCondition (class GALGAS_pic_31__38_ConditionExpression inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_structured_5F_if class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_structured_if class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mIfCondition ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mThenInstructionList ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mElseInstructionList ;
  public: GALGAS_location mProperty_mEndOfElsePartLocation ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                           const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                           const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                           const GALGAS_location & in_mEndOfElsePartLocation
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_structured_5F_if_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_structured_5F_if bang_pic_31__38_Instruction_5F_structured_5F_if_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18DoWhilePartList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_DoWhilePartList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_DoWhilePartList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfPartLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_DoWhilePartList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_DoWhilePartList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_DoWhilePartList constructor_listWithValue (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_DoWhilePartList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList add_operation (const GALGAS_pic_31__38_DoWhilePartList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_DoWhilePartList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConditionAtIndex (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfPartLocationAtIndex (class GALGAS_location constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                             class GALGAS_pic_31__38_InstructionList & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_DoWhilePartList ;
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_DoWhilePartList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_DoWhilePartList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_DoWhilePartList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_DoWhilePartList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: inline GALGAS_pic_31__38_ConditionExpression readProperty_mCondition (void) const {
    return mProperty_mCondition ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfPartLocation ;
  public: inline GALGAS_location readProperty_mEndOfPartLocation (void) const {
    return mProperty_mEndOfPartLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCondition (const GALGAS_pic_31__38_ConditionExpression & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCondition = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfPartLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfPartLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                        const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                        const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_DoWhilePartList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_DoWhilePartList_2D_element constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                     const class GALGAS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_do_5F_while : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while (const class cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_InstructionList readProperty_mRepeatedInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfRepeatedInstructionList (void) const ;

  public: class GALGAS_pic_31__38_DoWhilePartList readProperty_mWhilePartList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                     const class GALGAS_location & inOperand2,
                                                                                     const class GALGAS_pic_31__38_DoWhilePartList & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRepeatedInstructionList (class GALGAS_location inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRepeatedInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWhilePartList (class GALGAS_pic_31__38_DoWhilePartList inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_do_while class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_pic_31__38_InstructionList mProperty_mRepeatedInstructionList ;
  public: GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public: GALGAS_pic_31__38_DoWhilePartList mProperty_mWhilePartList ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                      const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                      const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_do_5F_while_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak : public GALGAS_pic_31__38_PiccoloInstruction_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak (const class GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & operator = (const class GALGAS_pic_31__38_Instruction_5F_do_5F_while & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_pic_31__38_Instruction_5F_do_5F_while bang_pic_31__38_Instruction_5F_do_5F_while_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18InterruptDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InterruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInterruptName,
                                                 const class GALGAS_bool & in_mFastReturn,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfInterruptLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InterruptDefinitionList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_InterruptDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_InterruptDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_bool & inOperand1,
                                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                            const class GALGAS_location & inOperand3
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_InterruptDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                     const class GALGAS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InterruptDefinitionList add_operation (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_InterruptDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInterruptLocationAtIndex (class GALGAS_location constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFastReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInterruptNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFastReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInterruptNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_InterruptDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_InterruptDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_InterruptDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_InterruptDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_InterruptDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInterruptName ;
  public: inline GALGAS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GALGAS_bool mProperty_mFastReturn ;
  public: inline GALGAS_bool readProperty_mFastReturn (void) const {
    return mProperty_mFastReturn ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfInterruptLocation ;
  public: inline GALGAS_location readProperty_mEndOfInterruptLocation (void) const {
    return mProperty_mEndOfInterruptLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_InterruptDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMFastReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFastReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfInterruptLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInterruptLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & in_mInterruptName,
                                                                const GALGAS_bool & in_mFastReturn,
                                                                const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfInterruptLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_InterruptDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_InterruptDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_bool & inOperand1,
                                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                             const class GALGAS_location & inOperand3
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18RoutineDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RoutineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_luint & in_mRequiredBank,
                                                 const class GALGAS_luint & in_mReturnedBank,
                                                 const class GALGAS_bool & in_mPreservesBank,
                                                 const class GALGAS_bool & in_mIsNoReturn,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfRoutineLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RoutineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RoutineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_RoutineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_luint & inOperand1,
                                                                                          const class GALGAS_luint & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3,
                                                                                          const class GALGAS_bool & inOperand4,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                          const class GALGAS_location & inOperand6
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_RoutineDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                     const class GALGAS_location & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_RoutineDefinitionList add_operation (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_RoutineDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_luint constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument5,
                                                      class GALGAS_location constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_luint & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                 class GALGAS_location & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_luint & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                class GALGAS_location & outArgument6,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_luint & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                      class GALGAS_location & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineLocationAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_pic_31__38_InstructionList & outArgument5,
                                              class GALGAS_location & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_luint & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_pic_31__38_InstructionList & outArgument5,
                                             class GALGAS_location & outArgument6,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_RoutineDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_RoutineDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_RoutineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RoutineDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RoutineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_luint mProperty_mRequiredBank ;
  public: inline GALGAS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_luint mProperty_mReturnedBank ;
  public: inline GALGAS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfRoutineLocation ;
  public: inline GALGAS_location readProperty_mEndOfRoutineLocation (void) const {
    return mProperty_mEndOfRoutineLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_RoutineDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfRoutineLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfRoutineLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                              const GALGAS_luint & in_mRequiredBank,
                                                              const GALGAS_luint & in_mReturnedBank,
                                                              const GALGAS_bool & in_mPreservesBank,
                                                              const GALGAS_bool & in_mIsNoReturn,
                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                              const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RoutineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RoutineDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_luint & inOperand1,
                                                                                           const class GALGAS_luint & inOperand2,
                                                                                           const class GALGAS_bool & inOperand3,
                                                                                           const class GALGAS_bool & inOperand4,
                                                                                           const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                           const class GALGAS_location & inOperand6
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18MacroDefinitionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMacroName,
                                                 const class GALGAS_lstringlist & in_mConstantNameList,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroDefinitionList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_MacroDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_MacroDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                                        const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_MacroDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_MacroDefinitionList add_operation (const GALGAS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_MacroDefinitionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMacroNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_MacroDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_MacroDefinitionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_MacroDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_MacroDefinitionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMacroName ;
  public: inline GALGAS_lstring readProperty_mMacroName (void) const {
    return mProperty_mMacroName ;
  }

  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: inline GALGAS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_MacroDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMacroName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroName = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & in_mMacroName,
                                                            const GALGAS_lstringlist & in_mConstantNameList,
                                                            const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_MacroDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18MacroMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inSource) ;
  public: GALGAS_pic_31__38_MacroMap & operator = (const GALGAS_pic_31__38_MacroMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_MacroMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_MacroMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38_MacroMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist constinArgument1,
                                                  class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameListForKey (class GALGAS_lstringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantNameListForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstringlist & outOperand1,
                                                    class GALGAS_pic_31__38_InstructionList & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_pic_31__38_MacroMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_MacroMap ;
 
} ; // End of GALGAS_pic_31__38_MacroMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_MacroMap : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_MacroMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@pic18MacroMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38_MacroMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructor
  public: cMapElement_pic_31__38_MacroMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lstringlist & in_mConstantNameList,
                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_MacroMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_MacroMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstringlist mProperty_mConstantNameList ;
  public: inline GALGAS_lstringlist readProperty_mConstantNameList (void) const {
    return mProperty_mConstantNameList ;
  }

  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: inline GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_MacroMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConstantNameList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantNameList = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_pic_31__38_InstructionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lstringlist & in_mConstantNameList,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_MacroMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_MacroMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstringlist & inOperand1,
                                                                              const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_MacroMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineDeclarationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_luint & in_mRequiredBank,
                                                 const class GALGAS_luint & in_mReturnedBank,
                                                 const class GALGAS_bool & in_mPreservesBank,
                                                 const class GALGAS_bool & in_mIsNoReturn
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_luint & inOperand1,
                                                                                const class GALGAS_luint & inOperand2,
                                                                                const class GALGAS_bool & inOperand3,
                                                                                const class GALGAS_bool & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineDeclarationList add_operation (const GALGAS_routineDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_routineDeclarationList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_luint constinArgument1,
                                                      class GALGAS_luint constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_luint & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_luint & outArgument1,
                                                class GALGAS_luint & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_luint & outArgument1,
                                                      class GALGAS_luint & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsNoReturnAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesBankAtIndex (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRequiredBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedBankAtIndex (class GALGAS_luint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_luint & outArgument1,
                                             class GALGAS_luint & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineDeclarationList ;
 
} ; // End of GALGAS_routineDeclarationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_routineDeclarationList (const GALGAS_routineDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_luint mProperty_mRequiredBank ;
  public: inline GALGAS_luint readProperty_mRequiredBank (void) const {
    return mProperty_mRequiredBank ;
  }

  public: GALGAS_luint mProperty_mReturnedBank ;
  public: inline GALGAS_luint readProperty_mReturnedBank (void) const {
    return mProperty_mReturnedBank ;
  }

  public: GALGAS_bool mProperty_mPreservesBank ;
  public: inline GALGAS_bool readProperty_mPreservesBank (void) const {
    return mProperty_mPreservesBank ;
  }

  public: GALGAS_bool mProperty_mIsNoReturn ;
  public: inline GALGAS_bool readProperty_mIsNoReturn (void) const {
    return mProperty_mIsNoReturn ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_routineDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMRequiredBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredBank = inValue ;
  }

  public: inline void setter_setMReturnedBank (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedBank = inValue ;
  }

  public: inline void setter_setMPreservesBank (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesBank = inValue ;
  }

  public: inline void setter_setMIsNoReturn (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsNoReturn = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                    const GALGAS_luint & in_mRequiredBank,
                                                    const GALGAS_luint & in_mReturnedBank,
                                                    const GALGAS_bool & in_mPreservesBank,
                                                    const GALGAS_bool & in_mIsNoReturn) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_luint & inOperand1,
                                                                                 const class GALGAS_luint & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @programKind enum                                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_programKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_programKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_regularProgram,
    kEnum_bootloaderProgram,
    kEnum_userProgram
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_programKind extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_programKind constructor_bootloaderProgram (LOCATION_ARGS) ;

  public: static class GALGAS_programKind constructor_regularProgram (LOCATION_ARGS) ;

  public: static class GALGAS_programKind constructor_userProgram (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_programKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBootloaderProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegularProgram (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUserProgram (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_bootloaderProgram () const ;

  public: VIRTUAL_IN_DEBUG bool optional_regularProgram () const ;

  public: VIRTUAL_IN_DEBUG bool optional_userProgram () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dataList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dataList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_dataList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_dataList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mDataName,
                                                 const class GALGAS_immediatExpressionList & in_mValueList,
                                                 const class GALGAS_bool & in_mIsByteList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dataList extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dataList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_dataList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_immediatExpressionList & inOperand1,
                                                                  const class GALGAS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_dataList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_immediatExpressionList & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_dataList add_operation (const GALGAS_dataList & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_dataList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_immediatExpressionList constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_immediatExpressionList & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_immediatExpressionList & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_immediatExpressionList & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsByteListAtIndex (class GALGAS_bool constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_immediatExpressionList constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_immediatExpressionList & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_immediatExpressionList & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDataNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsByteListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dataList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_dataList ;
 
} ; // End of GALGAS_dataList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_dataList : public cGenericAbstractEnumerator {
  public: cEnumerator_dataList (const GALGAS_dataList & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mDataName (LOCATION_ARGS) const ;
  public: class GALGAS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsByteList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_dataList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dataList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dataList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: inline GALGAS_lstring readProperty_mDataName (void) const {
    return mProperty_mDataName ;
  }

  public: GALGAS_immediatExpressionList mProperty_mValueList ;
  public: inline GALGAS_immediatExpressionList readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

  public: GALGAS_bool mProperty_mIsByteList ;
  public: inline GALGAS_bool readProperty_mIsByteList (void) const {
    return mProperty_mIsByteList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dataList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_dataList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDataName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataName = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_immediatExpressionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

  public: inline void setter_setMIsByteList (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsByteList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_dataList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_dataList_2D_element (const GALGAS_lstring & in_mDataName,
                                      const GALGAS_immediatExpressionList & in_mValueList,
                                      const GALGAS_bool & in_mIsByteList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dataList_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dataList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_immediatExpressionList & inOperand1,
                                                                   const class GALGAS_bool & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dataList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dataList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @checkpicList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_checkpicList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_checkpicList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_checkpicList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mErrorLocation,
                                                 const class GALGAS_lstringlist & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_checkpicList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_checkpicList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_checkpicList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_lstringlist & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_checkpicList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_checkpicList add_operation (const GALGAS_checkpicList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_checkpicList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_checkpicList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_checkpicList ;
 
} ; // End of GALGAS_checkpicList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_checkpicList : public cGenericAbstractEnumerator {
  public: cEnumerator_checkpicList (const GALGAS_checkpicList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_checkpicList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @checkpicList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_checkpicList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mErrorLocation ;
  public: inline GALGAS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

  public: GALGAS_lstringlist mProperty_mValueList ;
  public: inline GALGAS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_checkpicList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMErrorLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

  public: inline void setter_setMValueList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_checkpicList_2D_element (const GALGAS_location & in_mErrorLocation,
                                          const GALGAS_lstringlist & in_mValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_checkpicList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_checkpicList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_lstringlist & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_checkpicList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkpicList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18RegisterComparison mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_pic_31__38_RegisterComparison & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch condition' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_condition (const class GALGAS_conditional_5F_branch & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind assemblyCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_assemblyCode (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@FA_instruction_base_code mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@bit_oriented_op mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_bit_5F_oriented_5F_op & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_conditional_5F_branch & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@literal_instruction_opcode mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@tableAccessOption mnemonic' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_tableAccessOption & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GALGAS_lstringlist & ioArgument3,
                                    class GALGAS_lstringlist & ioArgument4,
                                    class GALGAS_ramDefinitionList & ioArgument5,
                                    class GALGAS_lstringlist & ioArgument6,
                                    class GALGAS_configDefinitionList & ioArgument7,
                                    class GALGAS_constantDefinitionList & ioArgument8,
                                    class GALGAS_checkpicList & ioArgument9,
                                    class GALGAS_dataList & ioArgument10,
                                    class GALGAS_bool & ioArgument11,
                                    class GALGAS_bool & ioArgument12,
                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GALGAS_checkpicList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GALGAS_dataList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GALGAS_pic_31__38_InstructionList & outArgument0,
                                                   class GALGAS_bool & ioArgument1,
                                                   class GALGAS_bool & ioArgument2,
                                                   class GALGAS_labelMap & ioArgument3,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GALGAS_bool & ioArgument1,
                                                       class GALGAS_bool & ioArgument2,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GALGAS_bool & ioArgument1,
                                                     class GALGAS_bool & ioArgument2,
                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                               class GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GALGAS_bool & ioArgument2,
                                                               class GALGAS_bool & ioArgument3,
                                                               class GALGAS_labelMap & ioArgument4,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GALGAS_bool & ioArgument1,
                                                         class GALGAS_bool & ioArgument2,
                                                         class GALGAS_labelMap & ioArgument3,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                       GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                       GALGAS_lstringlist & ioArgument3,
                                                       GALGAS_lstringlist & ioArgument4,
                                                       GALGAS_ramDefinitionList & ioArgument5,
                                                       GALGAS_lstringlist & ioArgument6,
                                                       GALGAS_configDefinitionList & ioArgument7,
                                                       GALGAS_constantDefinitionList & ioArgument8,
                                                       GALGAS_checkpicList & ioArgument9,
                                                       GALGAS_dataList & ioArgument10,
                                                       GALGAS_bool & ioArgument11,
                                                       GALGAS_bool & ioArgument12,
                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GALGAS_checkpicList & ioArgument0,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GALGAS_dataList & ioArgument0,
                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GALGAS_dataList & ioArgument0,
                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                                      GALGAS_bool & ioArgument1,
                                                                      GALGAS_bool & ioArgument2,
                                                                      GALGAS_labelMap & ioArgument3,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GALGAS_bool & ioArgument1,
                                                                          GALGAS_bool & ioArgument2,
                                                                          C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GALGAS_bool & ioArgument1,
                                                                        GALGAS_bool & ioArgument2,
                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GALGAS_bool & ioArgument1,
                                                                             GALGAS_bool & ioArgument2,
                                                                             GALGAS_labelMap & ioArgument3,
                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GALGAS_lstring constinArgument0,
                                                                                   GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GALGAS_bool & ioArgument2,
                                                                                   GALGAS_bool & ioArgument3,
                                                                                   GALGAS_labelMap & ioArgument4,
                                                                                   C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_47 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_48 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_49 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_50 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_51 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_52 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_53 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_54 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_55 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_56 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_57 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_58 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_59 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_60 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_61 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_62 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_63 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_64 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @gotoTerminationForBlockInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_gotoTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GALGAS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_gotoTerminationForBlockInstruction constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_gotoTerminationForBlockInstruction (const class cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mNextBlock (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_gotoTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_gotoTerminationForBlockInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMNextBlock (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @gotoTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_gotoTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mNextBlock ;

//--- Constructor
  public: cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_BitTestInStructuredCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_BitTestInStructuredCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_BitTestInStructuredCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_BitTestInStructuredCondition (const class cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_BitTestInStructuredCondition extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_BitTestInStructuredCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                       const class GALGAS_bitNumberExpression & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BitTestInStructuredCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerExpression reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerExpression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_registerExpression (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_registerExpression (const class cPtr_registerExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRegisterName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mOffset (void) const ;

  public: class GALGAS_location readProperty_mEndOfOffsetExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_registerExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_immediatExpression & inOperand1,
                                                                  const class GALGAS_location & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfOffsetExpression (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOffset (class GALGAS_immediatExpression inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerExpression class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerExpression ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @registerExpression class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_registerExpression : public acStrongPtr_class {
//--- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: GALGAS_immediatExpression mProperty_mOffset ;
  public: GALGAS_location mProperty_mEndOfOffsetExpression ;

//--- Constructor
  public: cPtr_registerExpression (const GALGAS_lstring & in_mRegisterName,
                                   const GALGAS_immediatExpression & in_mOffset,
                                   const GALGAS_location & in_mEndOfOffsetExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18BitTestInStructuredCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_IncDecRegisterInCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IncDecRegisterInCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IncDecRegisterInCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_IncDecRegisterInCondition (const class cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IncDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_IncDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                    const class GALGAS_bool & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18IncDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IncDecRegisterInCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_pic_31__38_IncDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                     const GALGAS_bool & in_mIncrement,
                                                     const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                     const GALGAS_bool & in_mBranchIfZero
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FA reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FA (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FA (const class cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_FA_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                            const class GALGAS_registerExpression & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_FA_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FA class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FA class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Properties
  public: GALGAS_FA_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GALGAS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FBA reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FBA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FBA (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FBA (const class cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bitNumberExpression & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FBA class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FBA class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FBA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Properties
  public: GALGAS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_FDA reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_FDA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_FDA (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_FDA (const class cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FDA_5F_base_5F_code (class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_FDA class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_FDA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Properties
  public: GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_BitTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_registerExpression & inOperand3,
                                                                                       const class GALGAS_bitNumberExpression & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_BitTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                        const GALGAS_bool & in_mSkipIfSet,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bitNumberExpression & in_mBitNumber
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_if_5F_semi_5F_colon_5F_op readProperty_mOpCode (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                                   const class GALGAS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                                   const class GALGAS_registerExpression & inOperand3
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOpCode (class GALGAS_if_5F_semi_5F_colon_5F_op inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_FA_SEMI_COLON class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_if_5F_semi_5F_colon_5F_op mProperty_mOpCode ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                    const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                    const GALGAS_registerExpression & in_mRegisterExpression
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_IF_5F_IncDec reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_mSkipIfZero (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3,
                                                                                      const class GALGAS_registerExpression & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfZero (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_IF_IncDec class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_mSkipIfZero ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                       const GALGAS_bool & in_mIncrement,
                                                       const GALGAS_bool & in_mSkipIfZero,
                                                       const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JSR (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JSR (const class cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_jumpInstructionKind & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mTargetLabel,
                                              const GALGAS_jumpInstructionKind & in_mKind
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMP : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMP (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JUMP (const class cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_jumpInstructionKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_jumpInstructionKind & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMP : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               const GALGAS_jumpInstructionKind & in_mKind
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_JUMPCC reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_JUMPCC : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_JUMPCC (const class cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

  public: class GALGAS_conditional_5F_branch readProperty_mConditionalBranch (void) const ;

  public: class GALGAS_bool readProperty_mIsBcc (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_JUMPCC extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_JUMPCC constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_conditional_5F_branch & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConditionalBranch (class GALGAS_conditional_5F_branch inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsBcc (class GALGAS_bool inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMPCC class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_JUMPCC class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_JUMPCC : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;
  public: GALGAS_conditional_5F_branch mProperty_mConditionalBranch ;
  public: GALGAS_bool mProperty_mIsBcc ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel,
                                                 const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                 const GALGAS_bool & in_mIsBcc
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_31__36_PTR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_luint & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LDATA16PTR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_lstring & in_mDataName,
                                                           const GALGAS_luint & in_mDataIndex
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_LDATA_38_PTR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR (const class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mDataName (void) const ;

  public: class GALGAS_luint readProperty_mDataIndex (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_luint & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDataIndex (class GALGAS_luint inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDataName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_LDATA8PTR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mDataName ;
  public: GALGAS_luint mProperty_mDataIndex ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mDataName,
                                                       const GALGAS_luint & in_mDataIndex
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_MOVFF reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_MOVFF : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_MOVFF (const class cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mSourceRegisterName (void) const ;

  public: class GALGAS_registerExpression readProperty_mDestinationRegisterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_registerExpression & inOperand1,
                                                                               const class GALGAS_registerExpression & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDestinationRegisterName (class GALGAS_registerExpression inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSourceRegisterName (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MOVFF class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_MOVFF class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_MOVFF : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Properties
  public: GALGAS_registerExpression mProperty_mSourceRegisterName ;
  public: GALGAS_registerExpression mProperty_mDestinationRegisterName ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_registerExpression & in_mSourceRegisterName,
                                                const GALGAS_registerExpression & in_mDestinationRegisterName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_banksel_5F_register reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_registerExpression & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_5F_register class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_banksel_register class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_banksel_5F_register : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                                              const GALGAS_bool & in_mWarningOnUselessBanksel
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_block reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_block : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_block constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_block (const class cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mStartBlockName (void) const ;

  public: class GALGAS_pic_31__38_BlockInstructionBlockList readProperty_mBlockList (void) const ;

  public: class GALGAS_location readProperty_mEndOfBlockInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_block extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_block constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                               const class GALGAS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBlockList (class GALGAS_pic_31__38_BlockInstructionBlockList inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBlockInstruction (class GALGAS_location inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartBlockName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_block class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_block class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_block : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mStartBlockName ;
  public: GALGAS_pic_31__38_BlockInstructionBlockList mProperty_mBlockList ;
  public: GALGAS_location mProperty_mEndOfBlockInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mStartBlockName,
                                                const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                const GALGAS_location & in_mEndOfBlockInstruction
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_macro reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_macro : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_macro (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_macro constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_macro (const class cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mMacroName (void) const ;

  public: class GALGAS_immediatExpressionList readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_macro extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_macro constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_immediatExpressionList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_immediatExpressionList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMacroName (class GALGAS_lstring inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_macro class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_macro class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_macro : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mMacroName ;
  public: GALGAS_immediatExpressionList mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mMacroName,
                                                const GALGAS_immediatExpressionList & in_mExpressionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_repetitionStatique reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_repetitionStatique : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_repetitionStatique extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_repetitionStatique constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_immediatExpression & inOperand2,
                                                                                            const class GALGAS_immediatExpression & inOperand3,
                                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand4,
                                                                                            const class GALGAS_location & inOperand5
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_repetitionStatique class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_repetitionStatique class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_repetitionStatique : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_lstring & in_mConstantName,
                                                             const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                             const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstruction
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_savebank reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_savebank : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_savebank (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_savebank (const class cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegister (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSaveBankInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_registerExpression & inOperand1,
                                                                                  const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                  const class GALGAS_location & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfSaveBankInstruction (class GALGAS_location inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_savebank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_savebank class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_savebank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegister ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfSaveBankInstruction ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_registerExpression & in_mRegister,
                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfSaveBankInstruction
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_Instruction_5F_switch : public GALGAS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_pic_31__38_Instruction_5F_switch constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;

  public: class GALGAS_location readProperty_mElseBranchStartLocation (void) const ;

  public: class GALGAS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_Instruction_5F_switch extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_Instruction_5F_switch constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCaseList (class GALGAS_pic_31__38_SwitchInstructionCaseList inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchStartLocation (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseInstructionList (class GALGAS_pic_31__38_InstructionList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_switch class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18SwitchInstructionCaseList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SwitchInstructionCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mStartOfCase,
                                                 const class GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SwitchInstructionCaseList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_SwitchInstructionCaseList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                              const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList add_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_pic_31__38_CaseExpressionList constinArgument1,
                                                      class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                 class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                      class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionListAtIndex (class GALGAS_pic_31__38_CaseExpressionList constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartOfCaseAtIndex (class GALGAS_location constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                             class GALGAS_pic_31__38_InstructionList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartOfCaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_SwitchInstructionCaseList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18Instruction_switch class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {
//--- Properties
  public: GALGAS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GALGAS_location mProperty_mElseBranchStartLocation ;
  public: GALGAS_pic_31__38_InstructionList mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GALGAS_location & in_mElseBranchStartLocation,
                                                 const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_IntervalCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mMinExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mMaxExpression (void) const ;

  public: class GALGAS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_IntervalCaseItem extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_IntervalCaseItem constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                           const class GALGAS_immediatExpression & inOperand1,
                                                                           const class GALGAS_location & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionLocation (class GALGAS_location inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMaxExpression (class GALGAS_immediatExpression inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMinExpression (class GALGAS_immediatExpression inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IntervalCaseItem class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18IntervalCaseItem class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {
//--- Properties
  public: GALGAS_immediatExpression mProperty_mMinExpression ;
  public: GALGAS_immediatExpression mProperty_mMaxExpression ;
  public: GALGAS_location mProperty_mCaseExpressionLocation ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                            const GALGAS_immediatExpression & in_mMaxExpression,
                                            const GALGAS_location & in_mCaseExpressionLocation
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterComparisonCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterComparisonCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterComparisonCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterComparisonCondition (const class cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_pic_31__38_RegisterComparison readProperty_mComparison (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterComparisonCondition extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterComparisonCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                      const class GALGAS_pic_31__38_RegisterComparison & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_pic_31__38_RegisterComparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterComparisonCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterComparisonCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_pic_31__38_RegisterComparison mProperty_mComparison ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_pic_31__38_RegisterComparison & in_mComparison
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_RegisterTestCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_RegisterTestCondition : public GALGAS_pic_31__38_ConditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_RegisterTestCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_RegisterTestCondition (const class cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_RegisterTestCondition extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_RegisterTestCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                const class GALGAS_bool & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterTestCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18RegisterTestCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                 const GALGAS_bool & in_mBranchIfZero
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_SimpleConstantCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_immediatExpression readProperty_mCaseExpression (void) const ;

  public: class GALGAS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_SimpleConstantCaseItem extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_SimpleConstantCaseItem constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpression (class GALGAS_immediatExpression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionLocation (class GALGAS_location inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_SimpleConstantCaseItem class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {
//--- Properties
  public: GALGAS_immediatExpression mProperty_mCaseExpression ;
  public: GALGAS_location mProperty_mCaseExpressionLocation ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                  const GALGAS_location & in_mCaseExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testTerminationForBlockInstruction reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--------------------------------- Default constructor
  public: GALGAS_testTerminationForBlockInstruction (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_testTerminationForBlockInstruction (const class cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_pic_31__38_ConditionExpression readProperty_mCondition (void) const ;

  public: class GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mTrueTermination (void) const ;

  public: class GALGAS_abstractBlockTerminationForBlockInstruction readProperty_mFalseTermination (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testTerminationForBlockInstruction constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                  const class GALGAS_location & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCondition (class GALGAS_pic_31__38_ConditionExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFalseTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTrueTermination (class GALGAS_abstractBlockTerminationForBlockInstruction inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testTerminationForBlockInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testTerminationForBlockInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_testTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Properties
  public: GALGAS_pic_31__38_ConditionExpression mProperty_mCondition ;
  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mTrueTermination ;
  public: GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mFalseTermination ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                   const GALGAS_location & in_mLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'communs' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) {}

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GALGAS_immediatExpression & outArgument0,
                                                              class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GALGAS_immediatExpression & outArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GALGAS_immediatExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GALGAS_immediatExpression & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GALGAS_immediatExpression & outArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GALGAS_configDefinitionList & ioArgument0,
                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GALGAS_declarationInRam & outArgument0,
                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GALGAS_ramDefinitionList & ioArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GALGAS_constantDefinitionList & ioArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GALGAS_immediatExpression & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GALGAS_immediatExpression & outArgument0,
                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GALGAS_immediatExpression & outArgument0,
                                                                   C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GALGAS_immediatExpression & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GALGAS_immediatExpression & outArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GALGAS_immediatExpression & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GALGAS_registerExpression & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GALGAS_bitNumberExpression & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GALGAS_bitNumberExpression & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GALGAS_bitNumberExpression & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GALGAS_bool & outArgument0,
                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_communs_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_include_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GALGAS_lstringlist & ioArgument3,
                                 GALGAS_lstringlist & ioArgument4,
                                 GALGAS_ramDefinitionList & ioArgument5,
                                 GALGAS_lstringlist & ioArgument6,
                                 GALGAS_configDefinitionList & ioArgument7,
                                 GALGAS_constantDefinitionList & ioArgument8,
                                 GALGAS_checkpicList & ioArgument9,
                                 GALGAS_dataList & ioArgument10,
                                 GALGAS_bool & ioArgument11,
                                 GALGAS_bool & ioArgument12,
                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                  GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                  GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                  GALGAS_lstringlist & ioArgument3,
                                                  GALGAS_lstringlist & ioArgument4,
                                                  GALGAS_ramDefinitionList & ioArgument5,
                                                  GALGAS_lstringlist & ioArgument6,
                                                  GALGAS_configDefinitionList & ioArgument7,
                                                  GALGAS_constantDefinitionList & ioArgument8,
                                                  GALGAS_checkpicList & ioArgument9,
                                                  GALGAS_dataList & ioArgument10,
                                                  GALGAS_bool & ioArgument11,
                                                  GALGAS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                    GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                    GALGAS_lstringlist & ioArgument3,
                                                    GALGAS_lstringlist & ioArgument4,
                                                    GALGAS_ramDefinitionList & ioArgument5,
                                                    GALGAS_lstringlist & ioArgument6,
                                                    GALGAS_configDefinitionList & ioArgument7,
                                                    GALGAS_constantDefinitionList & ioArgument8,
                                                    GALGAS_checkpicList & ioArgument9,
                                                    GALGAS_dataList & ioArgument10,
                                                    GALGAS_bool & ioArgument11,
                                                    GALGAS_bool & ioArgument12
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (C_Compiler * inCompiler,
                                       const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                 const C_String & inSourceFilePath) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                GALGAS_bool & ioArgument1,
                                                GALGAS_bool & ioArgument2,
                                                GALGAS_labelMap & ioArgument3,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_bool & ioArgument1,
                                                    GALGAS_bool & ioArgument2,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                              C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GALGAS_bool & ioArgument1,
                                                  GALGAS_bool & ioArgument2,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_bool & ioArgument3,
                                                            GALGAS_labelMap & ioArgument4,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GALGAS_bool & ioArgument1,
                                                      GALGAS_bool & ioArgument2,
                                                      GALGAS_labelMap & ioArgument3,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (C_Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (C_Lexique_piccolo_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic18CaseExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_CaseExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_CaseExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_CaseExpressionList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_CaseExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_pic_31__38_CaseExpressionList constructor_listWithValue (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_pic_31__38_CaseExpressionList add_operation (const GALGAS_pic_31__38_CaseExpressionList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_pic_31__38_CaseExpressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseItemAtIndex (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_CaseExpressionList ;
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38_CaseExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_pic_31__38_CaseExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_start_symbol' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) {}

//--- Non terminal declarations
  protected: virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GALGAS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GALGAS_lstringlist & ioArgument3,
                                    class GALGAS_lstringlist & ioArgument4,
                                    class GALGAS_ramDefinitionList & ioArgument5,
                                    class GALGAS_lstringlist & ioArgument6,
                                    class GALGAS_configDefinitionList & ioArgument7,
                                    class GALGAS_constantDefinitionList & ioArgument8,
                                    class GALGAS_checkpicList & ioArgument9,
                                    class GALGAS_dataList & ioArgument10,
                                    class GALGAS_bool & ioArgument11,
                                    class GALGAS_bool & ioArgument12,
                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                        GALGAS_string & outArgument1,
                                                                                                        GALGAS_uint & outArgument2,
                                                                                                        GALGAS_ramBankTable & outArgument3,
                                                                                                        GALGAS_registerTable & outArgument4,
                                                                                                        GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                        GALGAS_routineDeclarationList & outArgument6,
                                                                                                        GALGAS_routineDeclarationList & outArgument7,
                                                                                                        GALGAS_luint & outArgument8,
                                                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ramBankTable map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_ramBankTable_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramBankTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_ramBankTable (void) ;

//--------------------------------- Handle copy
  public: GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) ;
  public: GALGAS_ramBankTable & operator = (const GALGAS_ramBankTable & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ramBankTable extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ramBankTable constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_ramBankTable constructor_mapWithMapToOverride (const class GALGAS_ramBankTable & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_uint & inOperand3,
                                                     const class GALGAS_uintlist & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_uint constinArgument3,
                                                  class GALGAS_uintlist constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstAddressForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstFreeAddressForKey (class GALGAS_uint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLastAddressPlusOneForKey (class GALGAS_uint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMirrorOffsetListForKey (class GALGAS_uintlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_uint & outArgument3,
                                                  class GALGAS_uintlist & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstAddressForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstFreeAddressForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLastAddressPlusOneForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mMirrorOffsetListForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ramBankTable getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_uint & outOperand3,
                                                    class GALGAS_uintlist & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_ramBankTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ramBankTable ;
 
} ; // End of GALGAS_ramBankTable class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ramBankTable : public cGenericAbstractEnumerator {
  public: cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ramBankTable_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@ramBankTable' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_ramBankTable : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mFirstAddress ;
  public: GALGAS_uint mProperty_mFirstFreeAddress ;
  public: GALGAS_uint mProperty_mLastAddressPlusOne ;
  public: GALGAS_uintlist mProperty_mMirrorOffsetList ;

//--- Constructor
  public: cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                    const GALGAS_uint & in_mFirstAddress,
                                    const GALGAS_uint & in_mFirstFreeAddress,
                                    const GALGAS_uint & in_mLastAddressPlusOne,
                                    const GALGAS_uintlist & in_mMirrorOffsetList
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze (const class GALGAS_pic_31__38_AST constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @pic_31__38_AST struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_programKind mProperty_mProgramKind ;
  public: inline GALGAS_programKind readProperty_mProgramKind (void) const {
    return mProperty_mProgramKind ;
  }

  public: GALGAS_lstring mProperty_mDeviceNameOrBootLoaderReference ;
  public: inline GALGAS_lstring readProperty_mDeviceNameOrBootLoaderReference (void) const {
    return mProperty_mDeviceNameOrBootLoaderReference ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_checkpicList mProperty_mCheckpicList ;
  public: inline GALGAS_checkpicList readProperty_mCheckpicList (void) const {
    return mProperty_mCheckpicList ;
  }

  public: GALGAS_dataList mProperty_mDataList ;
  public: inline GALGAS_dataList readProperty_mDataList (void) const {
    return mProperty_mDataList ;
  }

  public: GALGAS_pic_31__38_InterruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GALGAS_pic_31__38_InterruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_pic_31__38_RoutineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_pic_31__38_RoutineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_pic_31__38_MacroDefinitionList mProperty_mMacroDefinitionList ;
  public: inline GALGAS_pic_31__38_MacroDefinitionList readProperty_mMacroDefinitionList (void) const {
    return mProperty_mMacroDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_lstringlist mProperty_mInlinedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mInlinedRoutineList (void) const {
    return mProperty_mInlinedRoutineList ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMProgramKind (const GALGAS_programKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramKind = inValue ;
  }

  public: inline void setter_setMDeviceNameOrBootLoaderReference (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceNameOrBootLoaderReference = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMCheckpicList (const GALGAS_checkpicList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckpicList = inValue ;
  }

  public: inline void setter_setMDataList (const GALGAS_dataList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMMacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMInlinedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInlinedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Native constructor
  public: GALGAS_pic_31__38_AST (const GALGAS_lstring & in_mProgramName,
                                 const GALGAS_programKind & in_mProgramKind,
                                 const GALGAS_lstring & in_mDeviceNameOrBootLoaderReference,
                                 const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                 const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                 const GALGAS_lstringlist & in_mUnusedRegisterList,
                                 const GALGAS_checkpicList & in_mCheckpicList,
                                 const GALGAS_dataList & in_mDataList,
                                 const GALGAS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                                 const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                 const GALGAS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                                 const GALGAS_pic_31__38_MacroDefinitionList & in_mMacroDefinitionList,
                                 const GALGAS_lstringlist & in_mUnusedRoutineList,
                                 const GALGAS_lstringlist & in_mInlinedRoutineList,
                                 const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                 const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                 const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_pic_31__38_AST extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_pic_31__38_AST constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_programKind & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              const class GALGAS_configDefinitionList & inOperand3,
                                                              const class GALGAS_ramDefinitionList & inOperand4,
                                                              const class GALGAS_lstringlist & inOperand5,
                                                              const class GALGAS_checkpicList & inOperand6,
                                                              const class GALGAS_dataList & inOperand7,
                                                              const class GALGAS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                              const class GALGAS_constantDefinitionList & inOperand9,
                                                              const class GALGAS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                              const class GALGAS_pic_31__38_MacroDefinitionList & inOperand11,
                                                              const class GALGAS_lstringlist & inOperand12,
                                                              const class GALGAS_lstringlist & inOperand13,
                                                              const class GALGAS_bool & inOperand14,
                                                              const class GALGAS_bool & inOperand15,
                                                              const class GALGAS_location & inOperand16
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_pic_31__38_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                             Phase 1: @processorType enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_processorType (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_pic_31__38__5F__36__30_,
    kEnum_pic_31__38__5F__38__30_,
    kEnum_midrange,
    kEnum_baseline
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_processorType extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_processorType constructor_baseline (LOCATION_ARGS) ;

  public: static class GALGAS_processorType constructor_midrange (LOCATION_ARGS) ;

  public: static class GALGAS_processorType constructor_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public: static class GALGAS_processorType constructor_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_processorType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_baseline () const ;

  public: VIRTUAL_IN_DEBUG bool optional_midrange () const ;

  public: VIRTUAL_IN_DEBUG bool optional_pic_31__38__5F__36__30_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_pic_31__38__5F__38__30_ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_processorType class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_processorType ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @configRegisterMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_configRegisterMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) ;
  public: GALGAS_configRegisterMap & operator = (const GALGAS_configRegisterMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_configRegisterMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_configRegisterMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_configRegisterMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_luint & inOperand1,
                                                     const class GALGAS_luint & inOperand2,
                                                     const class GALGAS_configRegisterMaskMap & inOperand3,
                                                     const class GALGAS_illegalMaskList & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint constinArgument1,
                                                  class GALGAS_luint constinArgument2,
                                                  class GALGAS_configRegisterMaskMap constinArgument3,
                                                  class GALGAS_illegalMaskList constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfigRegisterMaskMapForKey (class GALGAS_configRegisterMaskMap constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskListForKey (class GALGAS_illegalMaskList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GALGAS_luint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterWidthForKey (class GALGAS_luint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_luint & outArgument2,
                                                  class GALGAS_configRegisterMaskMap & outArgument3,
                                                  class GALGAS_illegalMaskList & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_mIllegalMaskListForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterAddressForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterWidthForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_luint & outOperand1,
                                                    class GALGAS_luint & outOperand2,
                                                    class GALGAS_configRegisterMaskMap & outOperand3,
                                                    class GALGAS_illegalMaskList & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_configRegisterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMap ;
 
} ; // End of GALGAS_configRegisterMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMap : public cGenericAbstractEnumerator {
  public: cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GALGAS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public: class GALGAS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public: class GALGAS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_configRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @piccoloDeviceModel struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_processorType mProperty_mProcessorType ;
  public: inline GALGAS_processorType readProperty_mProcessorType (void) const {
    return mProperty_mProcessorType ;
  }

  public: GALGAS_luint mProperty_mRomSize ;
  public: inline GALGAS_luint readProperty_mRomSize (void) const {
    return mProperty_mRomSize ;
  }

  public: GALGAS_luint mProperty_mBankCount ;
  public: inline GALGAS_luint readProperty_mBankCount (void) const {
    return mProperty_mBankCount ;
  }

  public: GALGAS_registerTable mProperty_mRegisterTable ;
  public: inline GALGAS_registerTable readProperty_mRegisterTable (void) const {
    return mProperty_mRegisterTable ;
  }

  public: GALGAS_ramBankTable mProperty_mRamBankTable ;
  public: inline GALGAS_ramBankTable readProperty_mRamBankTable (void) const {
    return mProperty_mRamBankTable ;
  }

  public: GALGAS_uint mProperty_mEepromSize ;
  public: inline GALGAS_uint readProperty_mEepromSize (void) const {
    return mProperty_mEepromSize ;
  }

  public: GALGAS_uint mProperty_mEepromAddress ;
  public: inline GALGAS_uint readProperty_mEepromAddress (void) const {
    return mProperty_mEepromAddress ;
  }

  public: GALGAS_configRegisterMap mProperty_mConfigRegisterMap ;
  public: inline GALGAS_configRegisterMap readProperty_mConfigRegisterMap (void) const {
    return mProperty_mConfigRegisterMap ;
  }

  public: GALGAS_string mProperty_mSharedBankName ;
  public: inline GALGAS_string readProperty_mSharedBankName (void) const {
    return mProperty_mSharedBankName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMProcessorType (const GALGAS_processorType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcessorType = inValue ;
  }

  public: inline void setter_setMRomSize (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRomSize = inValue ;
  }

  public: inline void setter_setMBankCount (const GALGAS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankCount = inValue ;
  }

  public: inline void setter_setMRegisterTable (const GALGAS_registerTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTable = inValue ;
  }

  public: inline void setter_setMRamBankTable (const GALGAS_ramBankTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamBankTable = inValue ;
  }

  public: inline void setter_setMEepromSize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromSize = inValue ;
  }

  public: inline void setter_setMEepromAddress (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromAddress = inValue ;
  }

  public: inline void setter_setMConfigRegisterMap (const GALGAS_configRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMap = inValue ;
  }

  public: inline void setter_setMSharedBankName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSharedBankName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Native constructor
  public: GALGAS_piccoloDeviceModel (const GALGAS_lstring & in_mDeviceName,
                                     const GALGAS_processorType & in_mProcessorType,
                                     const GALGAS_luint & in_mRomSize,
                                     const GALGAS_luint & in_mBankCount,
                                     const GALGAS_registerTable & in_mRegisterTable,
                                     const GALGAS_ramBankTable & in_mRamBankTable,
                                     const GALGAS_uint & in_mEepromSize,
                                     const GALGAS_uint & in_mEepromAddress,
                                     const GALGAS_configRegisterMap & in_mConfigRegisterMap,
                                     const GALGAS_string & in_mSharedBankName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_piccoloDeviceModel extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_piccoloDeviceModel constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_processorType & inOperand1,
                                                                  const class GALGAS_luint & inOperand2,
                                                                  const class GALGAS_luint & inOperand3,
                                                                  const class GALGAS_registerTable & inOperand4,
                                                                  const class GALGAS_ramBankTable & inOperand5,
                                                                  const class GALGAS_uint & inOperand6,
                                                                  const class GALGAS_uint & inOperand7,
                                                                  const class GALGAS_configRegisterMap & inOperand8,
                                                                  const class GALGAS_string & inOperand9
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_piccoloDeviceModel class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'midrange_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_midrange_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_midrange_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_ (class GALGAS_midrange_5F_instructionList & outArgument0,
                                                               class GALGAS_bool & ioArgument1,
                                                               class GALGAS_bool & ioArgument2,
                                                               class GALGAS_labelMap & ioArgument3,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_ (class GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                   class GALGAS_bool & ioArgument1,
                                                                   class GALGAS_bool & ioArgument2,
                                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_ (class GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                 class GALGAS_bool & ioArgument1,
                                                                 class GALGAS_bool & ioArgument2,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_midrange_5F_instruction & outArgument1,
                                                                           class GALGAS_bool & ioArgument2,
                                                                           class GALGAS_bool & ioArgument3,
                                                                           class GALGAS_labelMap & ioArgument4,
                                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                     class GALGAS_bool & ioArgument1,
                                                                     class GALGAS_bool & ioArgument2,
                                                                     class GALGAS_labelMap & ioArgument3,
                                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                            GALGAS_string & outArgument1,
                                                                                            GALGAS_uint & outArgument2,
                                                                                            GALGAS_ramBankTable & outArgument3,
                                                                                            GALGAS_registerTable & outArgument4,
                                                                                            GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                            GALGAS_routineDeclarationList & outArgument6,
                                                                                            GALGAS_routineDeclarationList & outArgument7,
                                                                                            GALGAS_luint & outArgument8,
                                                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                                               GALGAS_bool & ioArgument1,
                                                                               GALGAS_bool & ioArgument2,
                                                                               GALGAS_labelMap & ioArgument3,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                   GALGAS_bool & ioArgument1,
                                                                                   GALGAS_bool & ioArgument2,
                                                                                   C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                 GALGAS_bool & ioArgument1,
                                                                                 GALGAS_bool & ioArgument2,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                     GALGAS_bool & ioArgument1,
                                                                                     GALGAS_bool & ioArgument2,
                                                                                     GALGAS_labelMap & ioArgument3,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_midrange_5F_instruction & outArgument1,
                                                                                           GALGAS_bool & ioArgument2,
                                                                                           GALGAS_bool & ioArgument3,
                                                                                           GALGAS_labelMap & ioArgument4,
                                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_midrange_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                          const class GALGAS_bitNumberExpression & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_bitTest_in_structured_if_condition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_midrange_5F_conditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                           const GALGAS_bitNumberExpression & in_mBitNumber
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_incDecRegisterInCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_incDecRegisterInCondition (const class cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_incDecRegisterInCondition : public cPtr_midrange_5F_conditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                      const GALGAS_bool & in_mBranchIfZero
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_CALL : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_CALL (const class cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_CALL : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_F reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_F : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_F (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_F (const class cPtr_midrange_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                            const class GALGAS_registerExpression & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_F class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GALGAS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FB reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FB : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_FB (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_FB (const class cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bitNumberExpression & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_midrange_5F_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FB : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_midrange_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_FD reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_FD : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_FD (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_FD (const class cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_FD : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_GOTO reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_GOTO : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_GOTO (const class cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_GOTO : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_registerExpression & inOperand3,
                                                                                        const class GALGAS_bitNumberExpression & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_BitTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mSkipIfSet,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_registerExpression & inOperand3,
                                                                                       const class GALGAS_bool & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_IF_IncDec class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                        const GALGAS_bool & in_mIncrement,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JSR : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_JSR (const class cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JSR : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_JUMP : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_JUMP (const class cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GALGAS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_immediatExpression & inOperand2,
                                                                                           const class GALGAS_immediatExpression & inOperand3,
                                                                                           const class GALGAS_midrange_5F_instructionList & inOperand4,
                                                                                           const class GALGAS_location & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_STATIC_REPEAT class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_lstring & in_mConstantName,
                                                            const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                            const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                            const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                            const GALGAS_location & in_mEndOfInstruction
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_banksel_5F_register reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_banksel_5F_register : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const class cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegister (void) const ;

  public: class GALGAS_bool readProperty_mWarningOnUselessBanksel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_registerExpression & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningOnUselessBanksel (class GALGAS_bool inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel_5F_register class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_banksel_register class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegister ;
  public: GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_registerExpression & in_mRegister,
                                                               const GALGAS_bool & in_mWarningOnUselessBanksel
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_instruction_5F_savebank reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_instruction_5F_savebank : public GALGAS_midrange_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_instruction_5F_savebank (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_midrange_5F_instruction_5F_savebank (const class cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegister (void) const ;

  public: class GALGAS_midrange_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfSaveBankInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_registerExpression & inOperand1,
                                                                                   const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                   const class GALGAS_location & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfSaveBankInstruction (class GALGAS_location inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_midrange_5F_instructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegister (class GALGAS_registerExpression inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_savebank class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @midrange_instruction_savebank class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_midrange_5F_instruction_5F_savebank : public cPtr_midrange_5F_instruction {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegister ;
  public: GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfSaveBankInstruction ;

//--- Constructor
  public: cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_registerExpression & in_mRegister,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze (const class GALGAS_midrange_5F_model constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @midrange_5F_model struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_midrange_5F_interruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GALGAS_midrange_5F_interruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_midrange_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_midrange_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GALGAS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GALGAS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_midrange_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_midrange_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_midrange_5F_model (void) ;

//--------------------------------- Native constructor
  public: GALGAS_midrange_5F_model (const GALGAS_lstring & in_mProgramName,
                                    const GALGAS_lstring & in_mDeviceName,
                                    const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                    const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                    const GALGAS_lstringlist & in_mUnusedRegisterList,
                                    const GALGAS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                    const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                    const GALGAS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                    const GALGAS_lstringlist & in_mUnusedRoutineList,
                                    const GALGAS_bool & in_mNeedsComputedGoto_32_,
                                    const GALGAS_bool & in_mNeedsComputedGoto_34_,
                                    const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_midrange_5F_model extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_midrange_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_configDefinitionList & inOperand2,
                                                                 const class GALGAS_ramDefinitionList & inOperand3,
                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                 const class GALGAS_midrange_5F_interruptDefinitionList & inOperand5,
                                                                 const class GALGAS_constantDefinitionList & inOperand6,
                                                                 const class GALGAS_midrange_5F_routineDefinitionList & inOperand7,
                                                                 const class GALGAS_lstringlist & inOperand8,
                                                                 const class GALGAS_bool & inOperand9,
                                                                 const class GALGAS_bool & inOperand10,
                                                                 const class GALGAS_location & inOperand11
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_midrange_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_model class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_baseline_5F_condition_5F_expression_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GALGAS_baseline_5F_instructionList & outArgument0,
                                                               class GALGAS_labelMap & ioArgument1,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_baseline_5F_instruction & outArgument1,
                                                                           class GALGAS_labelMap & ioArgument2,
                                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                     class GALGAS_labelMap & ioArgument1,
                                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GALGAS_lstringlist & ioArgument1,
                                               class GALGAS_ramDefinitionList & ioArgument2,
                                               class GALGAS_lstringlist & ioArgument3,
                                               class GALGAS_configDefinitionList & ioArgument4,
                                               class GALGAS_constantDefinitionList & ioArgument5,
                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GALGAS_lstringlist & ioArgument1,
                                                               GALGAS_ramDefinitionList & ioArgument2,
                                                               GALGAS_lstringlist & ioArgument3,
                                                               GALGAS_configDefinitionList & ioArgument4,
                                                               GALGAS_constantDefinitionList & ioArgument5,
                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                               GALGAS_labelMap & ioArgument1,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                     GALGAS_labelMap & ioArgument1,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_baseline_5F_instruction & outArgument1,
                                                                                           GALGAS_labelMap & ioArgument2,
                                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                   C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                          const class GALGAS_bitNumberExpression & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_bitTest_in_structured_if_condition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                           const GALGAS_bitNumberExpression & in_mBitNumber
                                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_incDecRegisterInCondition reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_conditionExpression {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_incDecRegisterInCondition (const class cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

  public: class GALGAS_bool readProperty_mBranchIfZero (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                     const class GALGAS_bool & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBranchIfZero (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_incDecRegisterInCondition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_incDecRegisterInCondition class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_incDecRegisterInCondition : public cPtr_baseline_5F_conditionExpression {
//--- Properties
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public: GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public: cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                      const GALGAS_bool & in_mBranchIfZero
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_CALL reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_CALL : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_CALL (const class cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_CALL class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_CALL class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_CALL : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_F reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_F : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_F (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_F (const class cPtr_baseline_5F_instruction_5F_F * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code readProperty_mFAinstruction (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                            const class GALGAS_registerExpression & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFAinstruction (class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_F class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_F class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_F : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                             const GALGAS_registerExpression & in_mRegisterExpression
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FB reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FB : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FB (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_FB (const class cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_bit_5F_oriented_5F_op readProperty_mBitOrientedOp (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bitNumberExpression & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitOrientedOp (class GALGAS_baseline_5F_bit_5F_oriented_5F_op inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FB class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_FB class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bitNumberExpression & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_FD reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_FD : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_FD (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_FD (const class cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2,
                                                                             const class GALGAS_bool & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstruction_5F_FD_5F_base_5F_code (class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_FD class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_FD : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                              const GALGAS_registerExpression & in_mRegisterExpression,
                                              const GALGAS_bool & in_m_5F_W_5F_isDestination
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_GOTO reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_GOTO : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_GOTO (const class cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_GOTO class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_GOTO class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_GOTO : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_BitTest reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mSkipIfSet (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bitNumberExpression readProperty_mBitNumber (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_registerExpression & inOperand3,
                                                                                        const class GALGAS_bitNumberExpression & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBitNumber (class GALGAS_bitNumberExpression inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSkipIfSet (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_IF_BitTest class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mSkipIfSet ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mSkipIfSet,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_IF_5F_IncDec reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIncrement (void) const ;

  public: class GALGAS_registerExpression readProperty_mRegisterExpression (void) const ;

  public: class GALGAS_bool readProperty_m_5F_W_5F_isDestination (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_registerExpression & inOperand3,
                                                                                       const class GALGAS_bool & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIncrement (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterExpression (class GALGAS_registerExpression inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setM_5F_W_5F_isDestination (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_IF_IncDec class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Properties
  public: GALGAS_bool mProperty_mIncrement ;
  public: GALGAS_registerExpression mProperty_mRegisterExpression ;
  public: GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                        const GALGAS_bool & in_mIncrement,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JSR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JSR : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_JSR (const class cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JSR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_JSR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_JUMP reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_JUMP : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_JUMP (const class cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetLabel (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTargetLabel (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JUMP class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_JUMP class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_JUMP : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_STATIC_5F_REPEAT reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mConstantName (void) const ;

  public: class GALGAS_immediatExpression readProperty_mLowerBoundExpression (void) const ;

  public: class GALGAS_immediatExpression readProperty_mUpperBoundExpression (void) const ;

  public: class GALGAS_baseline_5F_instructionList readProperty_mInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_immediatExpression & inOperand2,
                                                                                           const class GALGAS_immediatExpression & inOperand3,
                                                                                           const class GALGAS_baseline_5F_instructionList & inOperand4,
                                                                                           const class GALGAS_location & inOperand5
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstruction (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_baseline_5F_instructionList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLowerBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUpperBoundExpression (class GALGAS_immediatExpression inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_STATIC_REPEAT class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public: GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public: GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public: GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_lstring & in_mConstantName,
                                                            const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                            const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                            const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                            const GALGAS_location & in_mEndOfInstruction
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_instruction_5F_TRIS reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_instruction_5F_TRIS : public GALGAS_baseline_5F_instruction {
//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_instruction_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_baseline_5F_instruction_5F_TRIS constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_baseline_5F_instruction_5F_TRIS (const class cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_instruction_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_instruction_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_TRIS class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @baseline_instruction_TRIS class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_baseline_5F_instruction_5F_TRIS : public cPtr_baseline_5F_instruction {
//--- Properties
  public: GALGAS_lstring mProperty_mOperand ;

//--- Constructor
  public: cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mOperand
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

