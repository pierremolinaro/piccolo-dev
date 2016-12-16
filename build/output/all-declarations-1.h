#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @baseline_5F_andCondition class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_andCondition : public GALGAS_baseline_5F_conditionExpression {
//--- Constructor
  public : GALGAS_baseline_5F_andCondition (void) ;

//---
  public : inline const class cPtr_baseline_5F_andCondition * ptr (void) const { return (const cPtr_baseline_5F_andCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_andCondition constructor_new (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                         const class GALGAS_baseline_5F_conditionExpression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_andCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @baseline_andCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_andCondition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_baseline_5F_conditionExpression mProperty_mLeftExpression ;
  public : GALGAS_baseline_5F_conditionExpression mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_baseline_5F_andCondition (const GALGAS_baseline_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_baseline_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_5F_instruction_5F_structured_5F_if class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_instruction_5F_structured_5F_if : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_baseline_5F_conditionExpression & inOperand1,
                                                                                            const class GALGAS_baseline_5F_instructionList & inOperand2,
                                                                                            const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                            const class GALGAS_location & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_structured_5F_if class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_instruction_structured_if class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_structured_5F_if : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_conditionExpression mProperty_mIfCondition ;
  public : GALGAS_baseline_5F_instructionList mProperty_mThenInstructionList ;
  public : GALGAS_baseline_5F_instructionList mProperty_mElseInstructionList ;
  public : GALGAS_location mProperty_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_baseline_5F_conditionExpression & in_mIfCondition,
                                                             const GALGAS_baseline_5F_instructionList & in_mThenInstructionList,
                                                             const GALGAS_baseline_5F_instructionList & in_mElseInstructionList,
                                                             const GALGAS_location & in_mEndOfElsePartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @baseline_partList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_partList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_baseline_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                  const class GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfPartLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_partList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_partList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_partList constructor_listWithValue (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                               const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_partList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                      const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_partList add_operation (const GALGAS_baseline_5F_partList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_conditionExpression constinArgument0,
                                                       class GALGAS_baseline_5F_instructionList constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                  class GALGAS_baseline_5F_instructionList & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                 class GALGAS_baseline_5F_instructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                       class GALGAS_baseline_5F_instructionList & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                               class GALGAS_baseline_5F_instructionList & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                              class GALGAS_baseline_5F_instructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_partList ;
 
} ; // End of GALGAS_baseline_5F_partList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_partList : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_partList (const GALGAS_baseline_5F_partList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_baseline_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public : class GALGAS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_partList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_partList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_partList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_baseline_5F_conditionExpression mProperty_mCondition ;
  public : GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfPartLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_partList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_partList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_partList_2D_element (const GALGAS_baseline_5F_conditionExpression & in_mCondition,
                                                   const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_partList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_partList_2D_element constructor_new (const class GALGAS_baseline_5F_conditionExpression & inOperand0,
                                                                                const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_partList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_partList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_5F_instruction_5F_do_5F_while class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_instruction_5F_do_5F_while : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_baseline_5F_instructionList & inOperand1,
                                                                                       const class GALGAS_location & inOperand2,
                                                                                       const class GALGAS_baseline_5F_partList & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_do_5F_while class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @baseline_instruction_do_while class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_instruction_5F_do_5F_while : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_instructionList mProperty_mRepeatedInstructionList ;
  public : GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public : GALGAS_baseline_5F_partList mProperty_mWhilePartList ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                        const GALGAS_baseline_5F_partList & in_mWhilePartList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baseline_routineDefinitionList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_baseline_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_luint & in_mPage,
                                                  const class GALGAS_bool & in_mIsNoReturn,
                                                  const class GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfRoutineLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_routineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_routineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_routineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_luint & inOperand1,
                                                                                            const class GALGAS_bool & inOperand2,
                                                                                            const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                            const class GALGAS_location & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_routineDefinitionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_routineDefinitionList add_operation (const GALGAS_baseline_5F_routineDefinitionList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_luint constinArgument1,
                                                       class GALGAS_bool constinArgument2,
                                                       class GALGAS_baseline_5F_instructionList constinArgument3,
                                                       class GALGAS_location constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_baseline_5F_instructionList & outArgument3,
                                                  class GALGAS_location & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_baseline_5F_instructionList & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_luint & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       class GALGAS_baseline_5F_instructionList & outArgument3,
                                                       class GALGAS_location & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_baseline_5F_instructionList & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_baseline_5F_instructionList & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_routineDefinitionList ;
 
} ; // End of GALGAS_baseline_5F_routineDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_routineDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_routineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_baseline_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_routineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_routineDefinitionList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_routineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mProperty_mRoutineName ;
  public : GALGAS_luint mProperty_mPage ;
  public : GALGAS_bool mProperty_mIsNoReturn ;
  public : GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfRoutineLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_routineDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_routineDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_routineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                                const GALGAS_luint & in_mPage,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_routineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_routineDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_luint & inOperand1,
                                                                                             const class GALGAS_bool & inOperand2,
                                                                                             const class GALGAS_baseline_5F_instructionList & inOperand3,
                                                                                             const class GALGAS_location & inOperand4
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_routineDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_routineDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@baseline_instruction addUsedRoutines'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_instruction_addUsedRoutines) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                  class GALGAS_stringset & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addUsedRoutines (const int32_t inClassIndex,
                                           extensionMethodSignature_baseline_5F_instruction_addUsedRoutines inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addUsedRoutines (const class cPtr_baseline_5F_instruction * inObject,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @baseline_declaredRoutineMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baseline_5F_declaredRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_baseline_5F_declaredRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inSource) ;
  public : GALGAS_baseline_5F_declaredRoutineMap & operator = (const GALGAS_baseline_5F_declaredRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_baseline_5F_declaredRoutineMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_declaredRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_baseline_5F_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_declaredRoutineMap ;
 
} ; // End of GALGAS_baseline_5F_declaredRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_declaredRoutineMap (const GALGAS_baseline_5F_declaredRoutineMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@baseline_declaredRoutineMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baseline_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_baseline_5F_declaredRoutineMap (const GALGAS_lstring & inKey
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_declaredRoutineMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mProperty_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_declaredRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@baseline_instruction shouldTerminateWithMOVLW'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                           const class GALGAS_string constinArgument0,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_shouldTerminateWithMOVLW (const int32_t inClassIndex,
                                                    extensionMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_shouldTerminateWithMOVLW (const class cPtr_baseline_5F_instruction * inObject,
                                                   const GALGAS_string constin_inErrorMessage,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@baseline_instruction shouldNotContinueInSequence'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                              const class GALGAS_string constinArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_shouldNotContinueInSequence (const int32_t inClassIndex,
                                                       extensionMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_shouldNotContinueInSequence (const class cPtr_baseline_5F_instruction * inObject,
                                                      const GALGAS_string constin_inErrorMessage,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @baseline_5F_intermediate_5F_registerExpression struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mProperty_mAssemblyString ;
  public : GALGAS_uint mProperty_mRegisterAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                  const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_registerExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_registerExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_5F_intermediate_5F_instruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction (const cPtr_baseline_5F_intermediate_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_intermediate_instruction class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_intermediate_instructionList list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_baseline_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_intermediate_5F_instructionList constructor_listWithValue (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_instructionList add_operation (const GALGAS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_baseline_5F_intermediate_5F_instruction constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_intermediate_5F_instructionList ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_intermediate_5F_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_intermediate_5F_instructionList (const GALGAS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_baseline_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @baseline_5F_intermediate_5F_instructionList_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_baseline_5F_intermediate_5F_instruction mProperty_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element (const GALGAS_baseline_5F_intermediate_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element constructor_new (const class GALGAS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_NULL class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_NULL : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_NULL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_NULL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_NULL * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_NULL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_NULL extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_NULL constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_NULL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_NULL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_NULL class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_NULL : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_NULL (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baseline_5F_intermediate_5F_pseudo class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_intermediate_pseudo class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_intermediate_5F_pseudo_5F_PAGE class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public GALGAS_baseline_5F_intermediate_5F_pseudo {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE constructor_new (const class GALGAS_uint & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @baseline_intermediate_pseudo_PAGE class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE : public cPtr_baseline_5F_intermediate_5F_pseudo {
//--- Attributes
  public : GALGAS_uint mProperty_mPage ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GALGAS_uint & in_mPage
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mPage (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_intermediate_5F_actualInstruction class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_actualInstruction : public GALGAS_baseline_5F_intermediate_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_actualInstruction (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_actualInstruction * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_actualInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @baseline_intermediate_actualInstruction class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_actualInstruction : public cPtr_baseline_5F_intermediate_5F_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_intermediate_5F_instruction_5F_FD class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                              const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GALGAS_bool & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @baseline_intermediate_instruction_FD class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FD : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @baseline_5F_intermediate_5F_instruction_5F_F class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_F * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                             const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_F class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @baseline_intermediate_instruction_F class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_F : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @baseline_5F_intermediate_5F_instruction_5F_FB class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                              const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                              const class GALGAS_uint & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @baseline_intermediate_instruction_FB class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_FB : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               const GALGAS_uint & in_mBitNumber
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1,
                                                                                                       const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                       const class GALGAS_uint & inOperand3
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @baseline_intermediate_instruction_BitTestSkip class                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_bool mProperty_mSkipIfSet ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_bool & in_mSkipIfSet,
                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GALGAS_uint & in_mBitNumber
                                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_intermediate_5F_WO_5F_OPERAND class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_intermediate_WO_OPERAND class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_WO_5F_OPERAND_5F_group getter_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         @baseline_5F_intermediate_5F_instruction_5F_literalOperation class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                            const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                            const class GALGAS_uint & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Pointer class for @baseline_intermediate_instruction_literalOperation class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public : GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                             const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                             const GALGAS_uint & in_mLiteralValue
                                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_literal_5F_instruction_5F_opcode getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @baseline_5F_intermediate_5F_instruction_5F_MNOP class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP (const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_luint & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @baseline_intermediate_instruction_MNOP class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @baseline_5F_intermediate_5F_incDecRegisterInCondition class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition (const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                      const class GALGAS_string & inOperand2,
                                                                                                      const class GALGAS_bool & inOperand3,
                                                                                                      const class GALGAS_bool & inOperand4,
                                                                                                      const class GALGAS_bool & inOperand5
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @baseline_intermediate_incDecRegisterInCondition class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_string mProperty_mTargetLabel ;
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                       const GALGAS_string & in_mTargetLabel,
                                                                       const GALGAS_bool & in_mIncrement,
                                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                       const GALGAS_bool & in_mBranchIfZero
                                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @baselineRoutineMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baselineRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_baselineRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baselineRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_baselineRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_baselineRoutineMap (const GALGAS_baselineRoutineMap & inSource) ;
  public : GALGAS_baselineRoutineMap & operator = (const GALGAS_baselineRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineRoutineMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baselineRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_baselineRoutineMap constructor_mapWithMapToOverride (const class GALGAS_baselineRoutineMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_luint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPageForKey (class GALGAS_luint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPageForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baselineRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_baselineRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baselineRoutineMap ;
 
} ; // End of GALGAS_baselineRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baselineRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_baselineRoutineMap (const GALGAS_baselineRoutineMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baselineRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@baselineRoutineMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baselineRoutineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsNoReturn ;
  public : GALGAS_luint mProperty_mPage ;

//--- Constructor
  public : cMapElement_baselineRoutineMap (const GALGAS_lstring & inKey,
                                           const GALGAS_bool & in_mIsNoReturn,
                                           const GALGAS_luint & in_mPage
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @baselineRoutineMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baselineRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mProperty_lkey ;
  public : GALGAS_bool mProperty_mIsNoReturn ;
  public : GALGAS_luint mProperty_mPage ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baselineRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baselineRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baselineRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baselineRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_bool & in_mIsNoReturn,
                                                 const GALGAS_luint & in_mPage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baselineRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_bool & inOperand1,
                                                                              const class GALGAS_luint & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baselineRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mPage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baselineRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Abstract extension method '@baseline_instruction build_baseline_intermediate_instructionList'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                                                       const class GALGAS_uint constinArgument0,
                                                                                                                       const class GALGAS_baselineRoutineMap constinArgument1,
                                                                                                                       const class GALGAS_registerTable constinArgument2,
                                                                                                                       const class GALGAS_constantMap constinArgument3,
                                                                                                                       class GALGAS_uint & ioArgument4,
                                                                                                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument5,
                                                                                                                       class GALGAS_string & ioArgument6,
                                                                                                                       class GALGAS_bool & ioArgument7,
                                                                                                                       const class GALGAS_routineKind constinArgument8,
                                                                                                                       const class GALGAS_bool constinArgument9,
                                                                                                                       class GALGAS_stringset & ioArgument10,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const int32_t inClassIndex,
                                                                                extensionMethodSignature_baseline_5F_instruction_build_5F_baseline_5F_intermediate_5F_instructionList inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_build_5F_baseline_5F_intermediate_5F_instructionList (const class cPtr_baseline_5F_instruction * inObject,
                                                                               const GALGAS_uint constin_inCurrentPage,
                                                                               const GALGAS_baselineRoutineMap constin_inRoutineMap,
                                                                               const GALGAS_registerTable constin_inRegisterTable,
                                                                               const GALGAS_constantMap constin_inConstantMap,
                                                                               GALGAS_uint & io_ioLocalLabelIndex,
                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                               GALGAS_string & io_ioListFileContents,
                                                                               GALGAS_bool & io_ioContinuesInSequence,
                                                                               const GALGAS_routineKind constin_inRoutineKind,
                                                                               const GALGAS_bool constin_inLastInstructionShouldReturn,
                                                                               GALGAS_stringset & io_ioUsedRegisters,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract extension method '@baseline_conditionExpression build_intermediate_condition_instructions'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions) (const class cPtr_baseline_5F_conditionExpression * inObject,
                                                                                                                             const class GALGAS_uint constinArgument0,
                                                                                                                             const class GALGAS_registerTable constinArgument1,
                                                                                                                             const class GALGAS_constantMap constinArgument2,
                                                                                                                             class GALGAS_uint & ioArgument3,
                                                                                                                             const class GALGAS_bool constinArgument4,
                                                                                                                             const class GALGAS_location constinArgument5,
                                                                                                                             const class GALGAS_string constinArgument6,
                                                                                                                             class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument7,
                                                                                                                             class GALGAS_stringset & ioArgument8,
                                                                                                                             class C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (const int32_t inClassIndex,
                                                                              extensionMethodSignature_baseline_5F_conditionExpression_build_5F_intermediate_5F_condition_5F_instructions inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions (const class cPtr_baseline_5F_conditionExpression * inObject,
                                                                             const GALGAS_uint constin_inCurrentPage,
                                                                             const GALGAS_registerTable constin_inRegisterTable,
                                                                             const GALGAS_constantMap constin_inConstantMap,
                                                                             GALGAS_uint & io_ioLocalLabelIndex,
                                                                             const GALGAS_bool constin_inComplementaryBranch,
                                                                             const GALGAS_location constin_inInstructionLocation,
                                                                             const GALGAS_string constin_inTargetLabel,
                                                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                                                             GALGAS_stringset & io_ioUsedRegisters,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension method '@baseline_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_instruction_print) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                        class GALGAS_string & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_print (const int32_t inClassIndex,
                                 extensionMethodSignature_baseline_5F_intermediate_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_print (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract extension getter '@baseline_intermediate_instruction length'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*enterExtensionGetter_baseline_5F_intermediate_5F_instruction_length) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_length (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_intermediate_5F_instruction_length inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callExtensionGetter_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @baselineSymbolTableForOptimizations map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baselineSymbolTableForOptimizations ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_baselineSymbolTableForOptimizations_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baselineSymbolTableForOptimizations : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_baselineSymbolTableForOptimizations (void) ;

//--------------------------------- Handle copy
  public : GALGAS_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;
  public : GALGAS_baselineSymbolTableForOptimizations & operator = (const GALGAS_baselineSymbolTableForOptimizations & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineSymbolTableForOptimizations extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baselineSymbolTableForOptimizations constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_baselineSymbolTableForOptimizations constructor_mapWithMapToOverride (const class GALGAS_baselineSymbolTableForOptimizations & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDefinitionLineIndexForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionLineIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baselineSymbolTableForOptimizations getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_baselineSymbolTableForOptimizations * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baselineSymbolTableForOptimizations ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baselineSymbolTableForOptimizations : public cGenericAbstractEnumerator {
  public : cEnumerator_baselineSymbolTableForOptimizations (const GALGAS_baselineSymbolTableForOptimizations & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDefinitionLineIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baselineSymbolTableForOptimizations_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@baselineSymbolTableForOptimizations' map                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baselineSymbolTableForOptimizations : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mDefinitionLineIndex ;

//--- Constructor
  public : cMapElement_baselineSymbolTableForOptimizations (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mDefinitionLineIndex
                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @baselineSymbolTableForOptimizations_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baselineSymbolTableForOptimizations_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mProperty_lkey ;
  public : GALGAS_uint mProperty_mDefinitionLineIndex ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baselineSymbolTableForOptimizations_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baselineSymbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baselineSymbolTableForOptimizations_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baselineSymbolTableForOptimizations_2D_element (const GALGAS_lstring & in_lkey,
                                                                  const GALGAS_uint & in_mDefinitionLineIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baselineSymbolTableForOptimizations_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baselineSymbolTableForOptimizations_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                               const class GALGAS_uint & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baselineSymbolTableForOptimizations_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionLineIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baselineSymbolTableForOptimizations_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension method '@baseline_intermediate_instruction setCurrentAddress'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                    class GALGAS_uint & ioArgument0,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_setCurrentAddress (const int32_t inClassIndex,
                                             extensionMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_setCurrentAddress (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                            GALGAS_uint & io_ioCurrentWordAdress,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@baseline_intermediate_instruction isLABEL'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isLABEL (const int32_t inClassIndex,
                                   enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isLABEL inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension getter '@baseline_intermediate_instruction isNULL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isNULL (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isNULL inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_isNULL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension getter '@baseline_intermediate_instruction isSkippingInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_isSkippingInstruction (const int32_t inClassIndex,
                                                 enterExtensionGetter_baseline_5F_intermediate_5F_instruction_isSkippingInstruction inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_isSkippingInstruction (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension getter '@baseline_intermediate_instruction nextInstructionIsReachable'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_nextInstructionIsReachable (const int32_t inClassIndex,
                                                      enterExtensionGetter_baseline_5F_intermediate_5F_instruction_nextInstructionIsReachable inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension method '@baseline_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                       class GALGAS_stringset & ioArgument0,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterReferencedLabel (const int32_t inClassIndex,
                                                extensionMethodSignature_baseline_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterReferencedLabel (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               GALGAS_stringset & io_ioReferencedLabelSet,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@baseline_intermediate_instruction defineLabel'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                              class GALGAS_baselineSymbolTableForOptimizations & ioArgument0,
                                                                                              const class GALGAS_uint constinArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_defineLabel (const int32_t inClassIndex,
                                       extensionMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_defineLabel (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                      GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@baseline_intermediate_incDecRegisterInCondition optimizeTestDecInc'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc) (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                                                                                                   const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                                                   const class GALGAS_uint constinArgument1,
                                                                                                                   class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                                                   class GALGAS_string & ioArgument3,
                                                                                                                   class GALGAS_bool & ioArgument4,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_optimizeTestDecInc (const int32_t inClassIndex,
                                              extensionMethodSignature_baseline_5F_intermediate_5F_incDecRegisterInCondition_optimizeTestDecInc inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_optimizeTestDecInc (const class cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                             const GALGAS_uint constin_inLineIndex,
                                             GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_bool & io_ioOptimizationsDone,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_5F_intermediate_5F_GOTO class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_intermediate_5F_GOTO : public GALGAS_baseline_5F_intermediate_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_intermediate_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_intermediate_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_intermediate_5F_GOTO * ptr (void) const { return (const cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_intermediate_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_intermediate_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_intermediate_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_intermediate_5F_GOTO class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @baseline_intermediate_GOTO class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_intermediate_5F_GOTO : public cPtr_baseline_5F_intermediate_5F_actualInstruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_intermediate_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Routine 'findBaselineFirstInstructionFromAddress'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_findBaselineFirstInstructionFromAddress (const class GALGAS_uint constinArgument0,
                                                      const class GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument1,
                                                      class GALGAS_baseline_5F_intermediate_5F_instruction & outArgument2,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_5F_assembly_5F_instruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction (const cPtr_baseline_5F_assembly_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @baseline_assembly_instruction class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @baseline_assembly_instructionList list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_assembly_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_baseline_5F_assembly_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_assembly_5F_instructionList constructor_listWithValue (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_baseline_5F_assembly_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_assembly_5F_instructionList add_operation (const GALGAS_baseline_5F_assembly_5F_instructionList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_baseline_5F_assembly_5F_instruction constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_baseline_5F_assembly_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_assembly_5F_instructionList ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_assembly_5F_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_assembly_5F_instructionList (const GALGAS_baseline_5F_assembly_5F_instructionList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_baseline_5F_assembly_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @baseline_5F_assembly_5F_instructionList_2D_element struct                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_baseline_5F_assembly_5F_instruction mProperty_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_assembly_5F_instructionList_2D_element (const GALGAS_baseline_5F_assembly_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instructionList_2D_element constructor_new (const class GALGAS_baseline_5F_assembly_5F_instruction & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_assembly_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_5F_assembly_5F_pseudo_5F_ORG class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG constructor_new (const class GALGAS_uint & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mOrigin (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_assembly_pseudo_ORG class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_uint mProperty_mOrigin ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mOrigin (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_assembly_5F_actualInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_actualInstruction : public GALGAS_baseline_5F_assembly_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_actualInstruction (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_actualInstruction * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_actualInstruction extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_actualInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @baseline_assembly_actualInstruction class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_actualInstruction : public cPtr_baseline_5F_assembly_5F_instruction {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_assembly_5F_instruction_5F_FD class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction_5F_FD : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                                          const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                          const class GALGAS_bool & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_5F_FD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_assembly_instruction_FD class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_FD : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @baseline_5F_assembly_5F_instruction_5F_F class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction_5F_F : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction_5F_F * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_F (const cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                         const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_5F_F class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_assembly_instruction_F class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_F : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                          const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @baseline_5F_assembly_5F_instruction_5F_FB class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction_5F_FB : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                                          const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                          const class GALGAS_uint & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_5F_FB class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @baseline_assembly_instruction_FB class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_FB : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mInstruction ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           const GALGAS_uint & in_mBitNumber
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @baseline_5F_assembly_5F_instruction_5F_BitTestSkip class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bool & inOperand1,
                                                                                                   const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                   const class GALGAS_uint & inOperand3
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @baseline_assembly_instruction_BitTestSkip class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_bool mProperty_mSkipIfSet ;
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bool & in_mSkipIfSet,
                                                                    const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @baseline_5F_assembly_5F_SKIP class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_SKIP : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_SKIP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_SKIP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_SKIP * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_SKIP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_SKIP extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_SKIP constructor_new (const class GALGAS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_SKIP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_SKIP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @baseline_assembly_SKIP class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_SKIP : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_SKIP (const GALGAS_location & in_mInstructionLocation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @baseline_5F_assembly_5F_WO_5F_OPERAND class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @baseline_assembly_WO_OPERAND class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_WO_5F_OPERAND_5F_group mProperty_mInstruction ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_WO_5F_OPERAND_5F_group getter_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @baseline_5F_assembly_5F_instruction_5F_literalOperation class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                        const class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                        const class GALGAS_uint & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @baseline_assembly_instruction_literalOperation class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_literal_5F_instruction_5F_opcode mProperty_mInstruction ;
  public : GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                         const GALGAS_uint & in_mLiteralValue
                                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_literal_5F_instruction_5F_opcode getter_mInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @baseline_5F_assembly_5F_incDecRegisterInCondition class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_assembly_5F_actualInstruction {
//--- Constructor
  public : GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_baseline_5F_intermediate_5F_registerExpression & inOperand1,
                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                  const class GALGAS_bool & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @baseline_assembly_incDecRegisterInCondition class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition : public cPtr_baseline_5F_assembly_5F_actualInstruction {
//--- Attributes
  public : GALGAS_baseline_5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GALGAS_bool & in_mIncrement,
                                                                   const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@baseline_assembly_instruction print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_assembly_5F_instruction_print) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                    class GALGAS_string & ioArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_print (const int32_t inClassIndex,
                                 extensionMethodSignature_baseline_5F_assembly_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_print (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension getter '@baseline_assembly_instruction length'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*enterExtensionGetter_baseline_5F_assembly_5F_instruction_length) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_length (const int32_t inClassIndex,
                                  enterExtensionGetter_baseline_5F_assembly_5F_instruction_length inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callExtensionGetter_length (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                       const class GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument0,
                                                                                                       const class GALGAS_bitSliceTable constinArgument1,
                                                                                                       class GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument2,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateAssemblyCode (const int32_t inClassIndex,
                                                extensionMethodSignature_baseline_5F_intermediate_5F_instruction_generateAssemblyCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateAssemblyCode (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const GALGAS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               GALGAS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @baseline_symbolTable map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baseline_5F_symbolTable ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_baseline_5F_symbolTable_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inSource) ;
  public : GALGAS_baseline_5F_symbolTable & operator = (const GALGAS_baseline_5F_symbolTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_symbolTable extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_symbolTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_baseline_5F_symbolTable constructor_mapWithMapToOverride (const class GALGAS_baseline_5F_symbolTable & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_symbolTable getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_baseline_5F_symbolTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_baseline_5F_symbolTable ;
 
} ; // End of GALGAS_baseline_5F_symbolTable class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_baseline_5F_symbolTable : public cGenericAbstractEnumerator {
  public : cEnumerator_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_baseline_5F_symbolTable_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@baseline_symbolTable' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_baseline_5F_symbolTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mRoutineAddress ;

//--- Constructor
  public : cMapElement_baseline_5F_symbolTable (const GALGAS_lstring & inKey,
                                                const GALGAS_uint & in_mRoutineAddress
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @baseline_5F_symbolTable_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_symbolTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mProperty_lkey ;
  public : GALGAS_uint mProperty_mRoutineAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_symbolTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_symbolTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_symbolTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_symbolTable_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_symbolTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_symbolTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_symbolTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRoutineAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_symbolTable_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension method '@baseline_assembly_instruction enterLabelAtAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                  class GALGAS_baseline_5F_symbolTable & ioArgument0,
                                                                                                  class GALGAS_uint & ioArgument1,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                               extensionMethodSignature_baseline_5F_assembly_5F_instruction_enterLabelAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterLabelAtAddress (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              GALGAS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioWordAddress,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                                          const class GALGAS_baseline_5F_symbolTable constinArgument0,
                                                                                                          class GALGAS_string & ioArgument1,
                                                                                                          class GALGAS_uint & ioArgument2,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateBinaryCodeAtAddress (const int32_t inClassIndex,
                                                       extensionMethodSignature_baseline_5F_assembly_5F_instruction_generateBinaryCodeAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateBinaryCodeAtAddress (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const GALGAS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GALGAS_string & io_ioListFileContents,
                                                      GALGAS_uint & io_ioWordAddress,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_5F_instruction class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_midrange_5F_instruction (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction * ptr (void) const { return (const cPtr_midrange_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction (const cPtr_midrange_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @midrange_instruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_midrange_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_instructionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_instructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_midrange_5F_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instructionList constructor_listWithValue (const class GALGAS_midrange_5F_instruction & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_instructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_midrange_5F_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList add_operation (const GALGAS_midrange_5F_instructionList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_midrange_5F_instruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_midrange_5F_instruction & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_midrange_5F_instruction & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_midrange_5F_instruction & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_midrange_5F_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_midrange_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_instructionList ;
 
} ; // End of GALGAS_midrange_5F_instructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_instructionList (const GALGAS_midrange_5F_instructionList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_midrange_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_5F_instructionList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_midrange_5F_instruction mProperty_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_instructionList_2D_element (const GALGAS_midrange_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instructionList_2D_element constructor_new (const class GALGAS_midrange_5F_instruction & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_5F_instruction_5F_nobanksel class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_nobanksel : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_nobanksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_nobanksel * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_nobanksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_nobanksel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_nobanksel class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_nobanksel : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_banksel class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_banksel : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_banksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_banksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_banksel * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_banksel extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_luint & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_banksel class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_banksel : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_luint mProperty_mBankIndex ;
  public : GALGAS_bool mProperty_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_luint & in_mBankIndex,
                                                    const GALGAS_bool & in_mWarningOnUselessBanksel
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrangeInstruction_5F_checkbank class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrangeInstruction_5F_checkbank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrangeInstruction_5F_checkbank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrangeInstruction_5F_checkbank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrangeInstruction_5F_checkbank * ptr (void) const { return (const cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrangeInstruction_5F_checkbank extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrangeInstruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_uint & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrangeInstruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrangeInstruction_5F_checkbank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @midrangeInstruction_checkbank class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrangeInstruction_5F_checkbank : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_uint mProperty_mBankIndex ;

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_uint & in_mBankIndex
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrangeInstruction_5F_checknobank class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrangeInstruction_5F_checknobank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrangeInstruction_5F_checknobank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrangeInstruction_5F_checknobank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrangeInstruction_5F_checknobank * ptr (void) const { return (const cPtr_midrangeInstruction_5F_checknobank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrangeInstruction_5F_checknobank extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrangeInstruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrangeInstruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrangeInstruction_5F_checknobank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @midrangeInstruction_checknobank class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrangeInstruction_5F_checknobank : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_FD_5F_base_5F_code enum                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_ADDWF,
    kEnum_ANDWF,
    kEnum_COMF,
    kEnum_DECF,
    kEnum_DECFSZ,
    kEnum_INCF,
    kEnum_INCFSZ,
    kEnum_IORWF,
    kEnum_MOVF,
    kEnum_RLF,
    kEnum_RRF,
    kEnum_SUBWF,
    kEnum_SWAPF,
    kEnum_XORWF
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_ADDWF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_ANDWF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_COMF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_DECF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_INCF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_IORWF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_MOVF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_RLF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_RRF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_SUBWF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_SWAPF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCOMF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRLF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRRF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSWAPF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension getter '@midrange_instruction_FD_base_code mnemonic' (as function)                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_F_5F_instruction_5F_base_5F_code enum                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_MOVWF
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Extension getter '@midrange_F_instruction_base_code mnemonic' (as function)                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_bit_5F_oriented_5F_op enum                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_BCF,
    kEnum_BSF
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_bit_5F_oriented_5F_op extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_bit_5F_oriented_5F_op constructor_BCF (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_bit_5F_oriented_5F_op constructor_BSF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBSF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_bit_5F_oriented_5F_op class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension getter '@midrange_bit_oriented_op mnemonic' (as function)                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_CLRWDT class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_CLRWDT : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CLRWDT (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CLRWDT * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CLRWDT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_CLRWDT constructor_new (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CLRWDT class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_CLRWDT class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_CLRWDT : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_CLRW class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_CLRW : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CLRW (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CLRW constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CLRW * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CLRW *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CLRW extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_CLRW constructor_new (const class GALGAS_location & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRW & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CLRW class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_CLRW class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_CLRW : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_NOP class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_NOP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_NOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_NOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_NOP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_NOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_NOP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_NOP constructor_new (const class GALGAS_location & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_NOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_NOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_NOP class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_NOP : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_SLEEP class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_SLEEP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_SLEEP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_SLEEP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_SLEEP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_SLEEP constructor_new (const class GALGAS_location & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_SLEEP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_SLEEP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_SLEEP class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_SLEEP : public cPtr_midrange_5F_instruction {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_literal_5F_instruction_5F_opcode enum                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_ADDLW,
    kEnum_ANDLW,
    kEnum_IORLW,
    kEnum_MOVLW,
    kEnum_RETLW,
    kEnum_SUBLW,
    kEnum_XORLW
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_literal_5F_instruction_5F_opcode extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_ADDLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_ANDLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_IORLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_MOVLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_RETLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_SUBLW (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode constructor_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isADDLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isANDLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIORLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRETLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSUBLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_literal_5F_instruction_5F_opcode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@midrange_literal_instruction_opcode mnemonic' (as function)                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_literalOperation class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_literalOperation : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                            const class GALGAS_immediatExpression & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mImmediatExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @midrange_instruction_literalOperation class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_literalOperation : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public : GALGAS_immediatExpression mProperty_mImmediatExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                             const GALGAS_immediatExpression & in_mImmediatExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_MNOP class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_MNOP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_luint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_MNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_MNOP class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_MNOP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @midrange_5F_instruction_5F_FOREVER class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_FOREVER : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FOREVER * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                   const class GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FOREVER class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @midrange_instruction_FOREVER class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_FOREVER : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_IF_SEMI_COLON class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction mProperty_mInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction getter_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_conditionExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_conditionExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_midrange_5F_conditionExpression (void) ;

//---
  public : inline const class cPtr_midrange_5F_conditionExpression * ptr (void) const { return (const cPtr_midrange_5F_conditionExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_conditionExpression extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_conditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_conditionExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @midrange_conditionExpression class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_conditionExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_conditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @midrange_5F_negateCondition class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_negateCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_negateCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_negateCondition * ptr (void) const { return (const cPtr_midrange_5F_negateCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_negateCondition extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_negateCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_negateCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_negateCondition class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_negateCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mCondition ;

//--- Constructor
  public : cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @midrange_5F_andCondition class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_andCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_andCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_andCondition * ptr (void) const { return (const cPtr_midrange_5F_andCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_andCondition extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_andCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                         const class GALGAS_midrange_5F_conditionExpression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_andCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @midrange_andCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_andCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mLeftExpression ;
  public : GALGAS_midrange_5F_conditionExpression mProperty_mRightExpression ;

//--- Constructor
  public : cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @midrange_5F_instruction_5F_structured_5F_if class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_structured_5F_if : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_midrange_5F_conditionExpression & inOperand1,
                                                                                            const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                            const class GALGAS_midrange_5F_instructionList & inOperand3,
                                                                                            const class GALGAS_location & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_structured_5F_if class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_structured_if class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_structured_5F_if : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_conditionExpression mProperty_mIfCondition ;
  public : GALGAS_midrange_5F_instructionList mProperty_mThenInstructionList ;
  public : GALGAS_midrange_5F_instructionList mProperty_mElseInstructionList ;
  public : GALGAS_location mProperty_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                             const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                             const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                             const GALGAS_location & in_mEndOfElsePartLocation
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression getter_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @midrange_partList list                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_partList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_partList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_partList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfPartLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_partList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_partList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_midrange_5F_partList constructor_listWithValue (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                               const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_midrange_5F_partList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList add_operation (const GALGAS_midrange_5F_partList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_midrange_5F_conditionExpression constinArgument0,
                                                       class GALGAS_midrange_5F_instructionList constinArgument1,
                                                       class GALGAS_location constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                  class GALGAS_midrange_5F_instructionList & outArgument1,
                                                  class GALGAS_location & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                 class GALGAS_midrange_5F_instructionList & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                       class GALGAS_midrange_5F_instructionList & outArgument1,
                                                       class GALGAS_location & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                               class GALGAS_midrange_5F_instructionList & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                              class GALGAS_midrange_5F_instructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_partList ;
 
} ; // End of GALGAS_midrange_5F_partList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_partList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_partList (const GALGAS_midrange_5F_partList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_midrange_5F_conditionExpression current_mCondition (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_partList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_partList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_partList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_midrange_5F_conditionExpression mProperty_mCondition ;
  public : GALGAS_midrange_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfPartLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_partList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_partList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_partList_2D_element (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                   const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_partList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_partList_2D_element constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_partList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression getter_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfPartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_partList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_5F_instruction_5F_do_5F_while class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_do_5F_while : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                       const class GALGAS_location & inOperand2,
                                                                                       const class GALGAS_midrange_5F_partList & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_do_5F_while class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_do_while class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_do_5F_while : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instructionList mProperty_mRepeatedInstructionList ;
  public : GALGAS_location mProperty_mEndOfRepeatedInstructionList ;
  public : GALGAS_midrange_5F_partList mProperty_mWhilePartList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                        const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList getter_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList getter_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
