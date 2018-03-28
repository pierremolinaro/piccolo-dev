#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @pic_31__38_CaseExpressionList_2D_element struct                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38_CaseExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_pic_31__38_AbstractCaseItem mProperty_mCaseItem ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_CaseExpressionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_CaseExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_CaseExpressionList_2D_element (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_CaseExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_CaseExpressionList_2D_element constructor_new (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_AbstractCaseItem getter_mCaseItem (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @pic_31__38_SwitchInstructionCaseList_2D_element struct                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_location mProperty_mStartOfCase ;

  public : GALGAS_pic_31__38_CaseExpressionList mProperty_mCaseExpressionList ;

  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element (const GALGAS_location & in_mStartOfCase,
                                                                   const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                                                const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList getter_mCaseExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mStartOfCase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @caseConstantMap map                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_caseConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_caseConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_caseConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_caseConstantMap (const GALGAS_caseConstantMap & inSource) ;
  public : GALGAS_caseConstantMap & operator = (const GALGAS_caseConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_caseConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_caseConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_caseConstantMap constructor_mapWithMapToOverride (const class GALGAS_caseConstantMap & inOperand0
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
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_caseConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_caseConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_caseConstantMap ;
 
} ; // End of GALGAS_caseConstantMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_caseConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_caseConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@caseConstantMap' map                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_caseConstantMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_caseConstantMap (const GALGAS_lstring & inKey
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @caseConstantMap_2D_element struct                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_caseConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_caseConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_caseConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_caseConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_caseConstantMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_caseConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_caseConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_caseConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_caseConstantMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem) (const class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                                                                      const class GALGAS_registerTable constinArgument0,
                                                                                      const class GALGAS_constantMap constinArgument1,
                                                                                      const class GALGAS_lstring constinArgument2,
                                                                                      const class GALGAS_string constinArgument3,
                                                                                      class GALGAS_stringset & ioArgument4,
                                                                                      class GALGAS_caseConstantMap & ioArgument5,
                                                                                      class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument6,
                                                                                      class GALGAS_ipic_31__38_BlockList & ioArgument7,
                                                                                      class GALGAS_lstring & ioArgument8,
                                                                                      class GALGAS_sint_36__34_ & ioArgument9,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeCaseItem (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_AbstractCaseItem_analyzeCaseItem inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeCaseItem (const class cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const GALGAS_registerTable constin_inRegisterTable,
                                          const GALGAS_constantMap constin_inConstantMap,
                                          const GALGAS_lstring constin_inConditionTrueLabel,
                                          const GALGAS_string constin_inIndexForLabels,
                                          GALGAS_stringset & io_ioUsedRegisters,
                                          GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                          GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          GALGAS_lstring & io_ioBlockLabel,
                                          GALGAS_sint_36__34_ & io_ioLastComparisonValue,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @ipic18BlockList list                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_BlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_BlockList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ipic_31__38_BlockList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_ipic_31__38_Block & in_mBlock
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_BlockList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_BlockList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38_BlockList constructor_listWithValue (const class GALGAS_ipic_31__38_Block & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ipic_31__38_BlockList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_Block & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_BlockList add_operation (const GALGAS_ipic_31__38_BlockList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_Block constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_Block & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_Block & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_Block & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_Block & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_Block & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlockAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ipic_31__38_BlockList ;
 
} ; // End of GALGAS_ipic_31__38_BlockList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_ipic_31__38_BlockList : public cGenericAbstractEnumerator {
  public : cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ipic_31__38_BlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @ipic18SequentialInstructionList list                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_SequentialInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_SequentialInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                  const class GALGAS_uint & in_mMin,
                                                  const class GALGAS_uint & in_mMax
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SequentialInstructionList extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_SequentialInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38_SequentialInstructionList constructor_listWithValue (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                const class GALGAS_uint & inOperand1,
                                                                                                const class GALGAS_uint & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ipic_31__38_SequentialInstructionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstructionList add_operation (const GALGAS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_SequentialInstruction & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxAtIndex (const class GALGAS_uint & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinAtIndex (const class GALGAS_uint & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_ipic_31__38_SequentialInstructionList ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstructionList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_ipic_31__38_SequentialInstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMin (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMax (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ipic_31__38_SequentialInstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @pic18_dataMap map                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_pic_31__38__5F_dataMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38__5F_dataMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38__5F_dataMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inSource) ;
  public : GALGAS_pic_31__38__5F_dataMap & operator = (const GALGAS_pic_31__38__5F_dataMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38__5F_dataMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38__5F_dataMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38__5F_dataMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uintlist & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDataForKey (class GALGAS_uintlist constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsData_38_ForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mDataForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsData_38_ForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38__5F_dataMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38__5F_dataMap ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_pic_31__38__5F_dataMap : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mData (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsData_38_ (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38__5F_dataMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@pic18_dataMap' map                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_pic_31__38__5F_dataMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uintlist mProperty_mData ;
  public : GALGAS_bool mProperty_mIsData_38_ ;

//--- Constructor
  public : cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                               const GALGAS_uintlist & in_mData,
                                               const GALGAS_bool & in_mIsData_38_
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @pic_31__38__5F_dataMap_2D_element struct                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38__5F_dataMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uintlist mProperty_mData ;

  public : GALGAS_bool mProperty_mIsData_38_ ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38__5F_dataMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38__5F_dataMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38__5F_dataMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38__5F_dataMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_uintlist & in_mData,
                                                     const GALGAS_bool & in_mIsData_38_) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38__5F_dataMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38__5F_dataMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_uintlist & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38__5F_dataMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mData (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsData_38_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @ipic_31__38_SequentialInstruction class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_SequentialInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_ipic_31__38_SequentialInstruction (void) ;

//---
  public : inline const class cPtr_ipic_31__38_SequentialInstruction * ptr (void) const { return (const cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SequentialInstruction extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstruction class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @ipic18SequentialInstruction class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_SequentialInstruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_ipic_31__38_SequentialInstruction (const GALGAS_location & in_mInstructionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @ipic_31__38_SequentialInstructionList_2D_element struct                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_SequentialInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_ipic_31__38_SequentialInstruction mProperty_mInstruction ;

  public : GALGAS_uint mProperty_mMin ;

  public : GALGAS_uint mProperty_mMax ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38_SequentialInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38_SequentialInstructionList_2D_element (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                    const GALGAS_uint & in_mMin,
                                                                    const GALGAS_uint & in_mMax) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SequentialInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_SequentialInstructionList_2D_element constructor_new (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                 const class GALGAS_uint & inOperand1,
                                                                                                 const class GALGAS_uint & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMax (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMin (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_SequentialInstructionList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @ipic_31__38_AbstractBlockTerminator class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_AbstractBlockTerminator : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_ipic_31__38_AbstractBlockTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_AbstractBlockTerminator * ptr (void) const { return (const cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_AbstractBlockTerminator extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_AbstractBlockTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @ipic18AbstractBlockTerminator class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_AbstractBlockTerminator : public acPtr_class {
//--- Attributes
  public : GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public : cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @ipic_31__38_Block struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_Block : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_uint mProperty_mAddress ;

  public : GALGAS_lstring mProperty_mLabel ;

  public : GALGAS_ipic_31__38_SequentialInstructionList mProperty_mInstructionList ;

  public : GALGAS_ipic_31__38_AbstractBlockTerminator mProperty_mTerminator ;

  public : GALGAS_uint mProperty_mTerminatorMin ;

  public : GALGAS_uint mProperty_mTerminatorMax ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_Block (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38_Block (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38_Block (const GALGAS_uint & in_mAddress,
                                     const GALGAS_lstring & in_mLabel,
                                     const GALGAS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                     const GALGAS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                     const GALGAS_uint & in_mTerminatorMin,
                                     const GALGAS_uint & in_mTerminatorMax) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_Block extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_Block constructor_new (const class GALGAS_uint & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand2,
                                                                  const class GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                                                  const class GALGAS_uint & inOperand4,
                                                                  const class GALGAS_uint & inOperand5
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_Block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_AbstractBlockTerminator getter_mTerminator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorMax (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorMin (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_Block class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @ipic_31__38_BlockList_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_BlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_ipic_31__38_Block mProperty_mBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_BlockList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38_BlockList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38_BlockList_2D_element (const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_BlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_BlockList_2D_element constructor_new (const class GALGAS_ipic_31__38_Block & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_BlockList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlock (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_BlockList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @ipic_31__38_SingleInstructionTerminator class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_SingleInstructionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_SingleInstructionTerminator * ptr (void) const { return (const cPtr_ipic_31__38_SingleInstructionTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_SingleInstructionTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_SingleInstructionTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @ipic18SingleInstructionTerminator class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_SingleInstructionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes

//--- Constructor
  public : cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @ipic_31__38_ReturnTerminator class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_ReturnTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ReturnTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ReturnTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ReturnTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ReturnTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ReturnTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_ReturnTerminator constructor_new (const class GALGAS_location & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ReturnTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @ipic18ReturnTerminator class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_ReturnTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes

//--- Constructor
  public : cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @ipic_31__38_RetlwTerminator class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_RetlwTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_RetlwTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_RetlwTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_RetlwTerminator * ptr (void) const { return (const cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_RetlwTerminator extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_RetlwTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_RetlwTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @ipic18RetlwTerminator class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_RetlwTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public : cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_uint & in_mLiteralValue
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @ipic_31__38_RetfieTerminator class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_RetfieTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_RetfieTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_RetfieTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_RetfieTerminator * ptr (void) const { return (const cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_RetfieTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_RetfieTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFastReturn (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_RetfieTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @ipic18RetfieTerminator class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_RetfieTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_bool mProperty_mFastReturn ;

//--- Constructor
  public : cPtr_ipic_31__38_RetfieTerminator (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_bool & in_mFastReturn
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mFastReturn (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @ipic_31__38_ComputedGotoTerminator class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_ComputedGotoTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedGotoTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedGotoTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedGotoTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedGotoTerminator (const cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedGotoTerminator extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_ComputedGotoTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedGotoTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @ipic18ComputedGotoTerminator class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_ComputedGotoTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_lstringlist mProperty_mTargetLabels ;
  public : GALGAS_bool mProperty_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstringlist & in_mTargetLabels,
                                                    const GALGAS_bool & in_mUsesRCALL
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @ipic_31__38_ComputedRETLWTerminator class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_ComputedRETLWTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedRETLWTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedRETLWTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedRETLWTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedRETLWTerminator extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_ComputedRETLWTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_uintlist & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mLiteralValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedRETLWTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @ipic18ComputedRETLWTerminator class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_ComputedRETLWTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_uintlist mProperty_mLiteralValues ;
  public : GALGAS_bool mProperty_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedRETLWTerminator (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_uintlist & in_mLiteralValues,
                                                     const GALGAS_bool & in_mUsesRCALL
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uintlist getter_mLiteralValues (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @conditionalBranchMode enum                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_conditionalBranchMode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_conditionalBranchMode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_native,
    kEnum_ipicBRA,
    kEnum_ipicGOTO
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
  public : static GALGAS_conditionalBranchMode extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_conditionalBranchMode constructor_ipicBRA (LOCATION_ARGS) ;

  public : static class GALGAS_conditionalBranchMode constructor_ipicGOTO (LOCATION_ARGS) ;

  public : static class GALGAS_conditionalBranchMode constructor_native (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_conditionalBranchMode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIpicBRA (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIpicGOTO (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNative (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_conditionalBranchMode class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @ipic_31__38_ComputedBraTerminator class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_ComputedBraTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_ComputedBraTerminator (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38_ComputedBraTerminator constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38_ComputedBraTerminator * ptr (void) const { return (const cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_ComputedBraTerminator extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_ComputedBraTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_ComputedBraTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @ipic18ComputedBraTerminator class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_ComputedBraTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_lstringlist mProperty_mTargetLabels ;
  public : GALGAS_bool mProperty_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38_ComputedBraTerminator (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_lstringlist & in_mTargetLabels,
                                                   const GALGAS_bool & in_mUsesRCALL
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @ipic_31__38_RegisterComparison enum                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_registerEqualsToW,
    kEnum_registerGreaterThanW,
    kEnum_registerLowerThanW
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
  public : static GALGAS_ipic_31__38_RegisterComparison extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_RegisterComparison constructor_registerEqualsToW (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38_RegisterComparison constructor_registerGreaterThanW (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38_RegisterComparison constructor_registerLowerThanW (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterEqualsToW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterGreaterThanW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRegisterLowerThanW (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_RegisterComparison class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @ipic_31__38_AbstractConditionTerminator class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_AbstractConditionTerminator : public GALGAS_ipic_31__38_AbstractBlockTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_AbstractConditionTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_AbstractConditionTerminator * ptr (void) const { return (const cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_AbstractConditionTerminator extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionFalse (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionTrue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_AbstractConditionTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @ipic18AbstractConditionTerminator class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_AbstractConditionTerminator : public cPtr_ipic_31__38_AbstractBlockTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  public : GALGAS_ipic_31__38_SingleInstructionTerminator mProperty_mSingleInstructionTerminatorIfConditionFalse ;

//--- Constructor
  public : cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionTrue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SingleInstructionTerminator getter_mSingleInstructionTerminatorIfConditionFalse (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_registerExpression struct                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mAssemblyString ;

  public : GALGAS_uint mProperty_mRegisterAddress ;

  public : GALGAS_bool mProperty_mNeedsBSR ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & in_mAssemblyString,
                                                                      const GALGAS_uint & in_mRegisterAddress,
                                                                      const GALGAS_bool & in_mNeedsBSR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression constructor_new (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_uint & inOperand1,
                                                                                                   const class GALGAS_bool & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsBSR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @ipic_31__38_IncDecRegisterTerminator class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_IncDecRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_IncDecRegisterTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_IncDecRegisterTerminator * ptr (void) const { return (const cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_IncDecRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_IncDecRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                     const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_IncDecRegisterTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @ipic18IncDecRegisterTerminator class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_IncDecRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @pic_31__38_TestRegisterTerminator class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38_TestRegisterTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_pic_31__38_TestRegisterTerminator (void) ;

//---
  public : inline const class cPtr_pic_31__38_TestRegisterTerminator * ptr (void) const { return (const cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_TestRegisterTerminator extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_TestRegisterTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                                  const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_TestRegisterTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @pic18TestRegisterTerminator class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_pic_31__38_TestRegisterTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_pic_31__38_TestRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @pic_31__38_BitTestTerminator class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38_BitTestTerminator : public GALGAS_ipic_31__38_AbstractConditionTerminator {
//--- Constructor
  public : GALGAS_pic_31__38_BitTestTerminator (void) ;

//---
  public : inline const class cPtr_pic_31__38_BitTestTerminator * ptr (void) const { return (const cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BitTestTerminator extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38_BitTestTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand1,
                                                                             const class GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand2,
                                                                             const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                             const class GALGAS_uint & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BitTestTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @pic18BitTestTerminator class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_pic_31__38_BitTestTerminator : public cPtr_ipic_31__38_AbstractConditionTerminator {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_pic_31__38_BitTestTerminator (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                              const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                              const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                              const GALGAS_uint & in_mBitNumber
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @ipic_31__38_InstructionWithNoOperand class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_InstructionWithNoOperand : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38_InstructionWithNoOperand (void) ;

//---
  public : inline const class cPtr_ipic_31__38_InstructionWithNoOperand * ptr (void) const { return (const cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_InstructionWithNoOperand (const cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_InstructionWithNoOperand extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_InstructionWithNoOperand constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionWithNoOperandKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_InstructionWithNoOperand class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @ipic18InstructionWithNoOperand class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_InstructionWithNoOperand : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionWithNoOperandKind mProperty_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_InstructionWithNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionWithNoOperandKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension getter '@ipic18_intermediate_registerExpression isEqualToRegister' (as function)              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isEqualToRegister (const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument0,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                   const class GALGAS_bool & inOperand3
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FDA class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @FA_5F_sequential_5F_instruction_5F_base_5F_code enum                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_MOVWF,
    kEnum_MULWF,
    kEnum_NEGF,
    kEnum_SETF
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
  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public : static class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCLRF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMOVWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMULWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNEGF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSETF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FA class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                  const class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand1,
                                                                                                  const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @ipic18_intermediate_instruction_FA class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   @ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication struct                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mAssemblyString ;

  public : GALGAS_uint mProperty_mRegisterAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & in_mAssemblyString,
                                                                                          const GALGAS_uint & in_mRegisterAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication extractObject (const GALGAS_object & inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication constructor_new (const class GALGAS_string & inOperand0,
                                                                                                                       const class GALGAS_uint & inOperand1
                                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand1,
                                                                                                     const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mDestinationRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mSourceRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_MOVFF class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mSourceRegisterDescription ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication mProperty_mDestinationRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mSourceRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication getter_mDestinationRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                                                const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                                                const class GALGAS_uint & inOperand2
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @ipic18_intermediate_instruction_literalOperation class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_literal_5F_instruction_5F_opcode mProperty_mLiteralInstruction ;
  public : GALGAS_uint mProperty_mLiteralValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                 const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                 const GALGAS_uint & in_mLiteralValue
                                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_literal_5F_instruction_5F_opcode getter_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mLiteralValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_luint & inOperand1,
                                                                                                    const class GALGAS_uint & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mFSRindex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_LFSR class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mFSRindex ;
  public : GALGAS_uint mProperty_mValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_luint & in_mFSRindex,
                                                                     const GALGAS_uint & in_mValue
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mFSRindex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand2,
                                                                                                   const class GALGAS_uint & inOperand3
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FBA class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_luint & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_MOVLB class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mBankIndex ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_luint & in_mBankIndex
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_uint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_FNOP class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_uint mProperty_mBlankValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_uint & in_mBlankValue
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_uint & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_BLANK class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_uint mProperty_mBlankValue ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_uint & in_mBlankValue
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBlankValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_tableAccessOption & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_TBLRD class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mProperty_mOption ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT constructor_new (const class GALGAS_location & inOperand0,
                                                                                                     const class GALGAS_tableAccessOption & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_TBLWT class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mProperty_mOption ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption getter_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                                                    const class GALGAS_luint & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_intermediate_instruction_MNOP class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA constructor_new (const class GALGAS_location & inOperand0,
                                                                                                      const class GALGAS_luint & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @ipic18_intermediate_instruction_NOPBRA class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_luint mProperty_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * ptr (void) const { return (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall constructor_new (const class GALGAS_location & inOperand0,
                                                                                                                 const class GALGAS_ipic_31__38_SequentialInstructionList & inOperand1,
                                                                                                                 const class GALGAS_bool & inOperand2
                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstructionList getter_mTargetInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @ipic18_intermediate_instruction_computed_rcall class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38_SequentialInstructionList mProperty_mTargetInstructions ;
  public : GALGAS_bool mProperty_mUsesRCALL ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                  const GALGAS_bool & in_mUsesRCALL
                                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstructionList getter_mTargetInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsesRCALL (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @ipic_31__38__5F_condition_5F_skip_5F_instruction class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction : public GALGAS_ipic_31__38_SequentialInstruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * ptr (void) const { return (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mEmbeddedInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @ipic18_condition_skip_instruction class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction : public cPtr_ipic_31__38_SequentialInstruction {
//--- Attributes
  public : GALGAS_ipic_31__38_SequentialInstruction mProperty_mEmbeddedInstruction ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                  COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38_SequentialInstruction getter_mEmbeddedInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip constructor_new (const class GALGAS_location & inOperand0,
                                                                                                   const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                   const class GALGAS_bool & inOperand2,
                                                                                                   const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                                   const class GALGAS_uint & inOperand4
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Pointer class for @ipic18_skip_instruction_BitTestSkip class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_bool mProperty_mSkipIfSet ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_uint mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                    const GALGAS_bool & in_mSkipIfSet,
                                                                    const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GALGAS_uint & in_mBitNumber
                                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      @ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code enum                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CPFSEQ,
    kEnum_CPFSGT,
    kEnum_CPFSLT,
    kEnum_TSTFSZ
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
  public : static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public : static class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSEQ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSGT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCPFSLT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                                           const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                                           const class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand2,
                                                                                                           const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code getter_mCompareInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Pointer class for @ipic18_skip_instruction_compare_register class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code mProperty_mCompareInstruction ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                            const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code getter_mCompareInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @skip_5F_instruction_5F_FDA_5F_base_5F_code enum                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_DECFSZ,
    kEnum_DCFSNZ,
    kEnum_INCFSZ,
    kEnum_INFSNZ
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
  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DCFSNZ (LOCATION_ARGS) ;

  public : static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public : static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public : static class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INFSNZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDCFSNZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDECFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINCFSZ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isINFSNZ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @ipic_31__38__5F_skip_5F_instruction_5F_FDA class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Constructor
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) ;

//---
  public : inline const class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * ptr (void) const { return (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                                           const class GALGAS_ipic_31__38_SequentialInstruction & inOperand1,
                                                                                           const class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand2,
                                                                                           const class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand3,
                                                                                           const class GALGAS_bool & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @ipic18_skip_instruction_FDA class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA : public cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction {
//--- Attributes
  public : GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  public : GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression mProperty_mRegisterDescription ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                            const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                            const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                            const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code getter_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression getter_mRegisterDescription (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @symbolTableForBlockOptimization map                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForBlockOptimization ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForBlockOptimization : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_symbolTableForBlockOptimization (void) ;

//--------------------------------- Handle copy
  public : GALGAS_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inSource) ;
  public : GALGAS_symbolTableForBlockOptimization & operator = (const GALGAS_symbolTableForBlockOptimization & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForBlockOptimization extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForBlockOptimization constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_symbolTableForBlockOptimization constructor_mapWithMapToOverride (const class GALGAS_symbolTableForBlockOptimization & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMDefinitionBlockIndexForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionBlockIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_symbolTableForBlockOptimization getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_symbolTableForBlockOptimization * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForBlockOptimization ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_symbolTableForBlockOptimization : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForBlockOptimization_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@symbolTableForBlockOptimization' map                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForBlockOptimization : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mDefinitionBlockIndex ;

//--- Constructor
  public : cMapElement_symbolTableForBlockOptimization (const GALGAS_lstring & inKey,
                                                        const GALGAS_uint & in_mDefinitionBlockIndex
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @symbolTableForBlockOptimization_2D_element struct                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForBlockOptimization_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mDefinitionBlockIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_symbolTableForBlockOptimization_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_symbolTableForBlockOptimization_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_symbolTableForBlockOptimization_2D_element (const GALGAS_lstring & in_lkey,
                                                              const GALGAS_uint & in_mDefinitionBlockIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForBlockOptimization_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForBlockOptimization_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_uint & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_symbolTableForBlockOptimization_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDefinitionBlockIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_symbolTableForBlockOptimization_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @symbolTableForClusterOrdering map                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForClusterOrdering ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForClusterOrdering : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_symbolTableForClusterOrdering (void) ;

//--------------------------------- Handle copy
  public : GALGAS_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inSource) ;
  public : GALGAS_symbolTableForClusterOrdering & operator = (const GALGAS_symbolTableForClusterOrdering & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForClusterOrdering extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForClusterOrdering constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_symbolTableForClusterOrdering constructor_mapWithMapToOverride (const class GALGAS_symbolTableForClusterOrdering & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMClusterForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mClusterForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_symbolTableForClusterOrdering getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_symbolTableForClusterOrdering * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForClusterOrdering ;
 
} ; // End of GALGAS_symbolTableForClusterOrdering class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_symbolTableForClusterOrdering : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mCluster (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForClusterOrdering_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@symbolTableForClusterOrdering' map                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForClusterOrdering : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mCluster ;

//--- Constructor
  public : cMapElement_symbolTableForClusterOrdering (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mCluster
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @symbolTableForClusterOrdering_2D_element struct                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForClusterOrdering_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mCluster ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_symbolTableForClusterOrdering_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_symbolTableForClusterOrdering_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_symbolTableForClusterOrdering_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_symbolTableForClusterOrdering_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_uint & in_mCluster) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForClusterOrdering_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForClusterOrdering_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_symbolTableForClusterOrdering_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mCluster (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_symbolTableForClusterOrdering_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@ipic18SequentialInstruction instructionRelativeBranchOverflow'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              const class GALGAS_uint constinArgument0,
                                                                                                              const class GALGAS_string constinArgument1,
                                                                                                              const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                              class GALGAS_branchOverflowMap & ioArgument3,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_instructionRelativeBranchOverflow (const int32_t inClassIndex,
                                                             extensionMethodSignature_ipic_31__38_SequentialInstruction_instructionRelativeBranchOverflow inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_instructionRelativeBranchOverflow (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                            const GALGAS_uint constin_inAddress,
                                                            const GALGAS_string constin_inBlockLabel,
                                                            const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                            GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @branchOverflowMap list map                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_branchOverflowMap : public AC_GALGAS_listmap {
//--------------------------------- Default constructor
  public : GALGAS_branchOverflowMap (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_branchOverflowMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_branchOverflowMap constructor_emptyMap (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_listForKey (const class GALGAS_string & constinOperand0
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_branchOverflowMap ;
 
} ; // End of GALGAS_branchOverflowMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_branchOverflowMap : public cGenericAbstractEnumerator {
  public : cEnumerator_branchOverflowMap (const GALGAS_branchOverflowMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_key (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_branchOverflowMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchOverflowMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @symbolTableForRelativesResolution map                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForRelativesResolution ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForRelativesResolution : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_symbolTableForRelativesResolution (void) ;

//--------------------------------- Handle copy
  public : GALGAS_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inSource) ;
  public : GALGAS_symbolTableForRelativesResolution & operator = (const GALGAS_symbolTableForRelativesResolution & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForRelativesResolution extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForRelativesResolution constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_symbolTableForRelativesResolution constructor_mapWithMapToOverride (const class GALGAS_symbolTableForRelativesResolution & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMLabelAddressForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelAddressForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_symbolTableForRelativesResolution getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_symbolTableForRelativesResolution * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                               const GALGAS_string & inKey
                                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_symbolTableForRelativesResolution ;
 
} ; // End of GALGAS_symbolTableForRelativesResolution class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_symbolTableForRelativesResolution : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLabelAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForRelativesResolution_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@symbolTableForRelativesResolution' map                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_symbolTableForRelativesResolution : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mLabelAddress ;

//--- Constructor
  public : cMapElement_symbolTableForRelativesResolution (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mLabelAddress
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@ipic18AbstractBlockTerminator terminatorRelativeBranchOverflow'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                               const class GALGAS_uint constinArgument0,
                                                                                                               const class GALGAS_string constinArgument1,
                                                                                                               const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                               const class GALGAS_string constinArgument3,
                                                                                                               class GALGAS_branchOverflowMap & ioArgument4,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_terminatorRelativeBranchOverflow (const int32_t inClassIndex,
                                                            extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_terminatorRelativeBranchOverflow inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_terminatorRelativeBranchOverflow (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GALGAS_uint constin_inAddress,
                                                           const GALGAS_string constin_inBlockLabel,
                                                           const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                           const GALGAS_string constin_inNextBlockLabel,
                                                           GALGAS_branchOverflowMap & io_ioOverflowMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension method '@ipic18AbstractBlockTerminator performTerminatorRelativeBranchResolution'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                                        const class GALGAS_uint constinArgument0,
                                                                                                                        const class GALGAS_string constinArgument1,
                                                                                                                        const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                        const class GALGAS_string constinArgument3,
                                                                                                                        class GALGAS_uint & ioArgument4,
                                                                                                                        class GALGAS_string & ioArgument5,
                                                                                                                        class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                                        class C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_performTerminatorRelativeBranchResolution (const int32_t inClassIndex,
                                                                     extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_performTerminatorRelativeBranchResolution inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_performTerminatorRelativeBranchResolution (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                    const GALGAS_uint constin_inAddress,
                                                                    const GALGAS_string constin_inBlockLabel,
                                                                    const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                    const GALGAS_string constin_inNextBlockLabel,
                                                                    GALGAS_uint & io_ioConversionCount,
                                                                    GALGAS_string & io_ioListFileContents,
                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & out_outModifiedTerminator,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @symbolTableForRelativesResolution_2D_element struct                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_symbolTableForRelativesResolution_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mLabelAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_symbolTableForRelativesResolution_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_symbolTableForRelativesResolution_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_symbolTableForRelativesResolution_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_symbolTableForRelativesResolution_2D_element (const GALGAS_lstring & in_lkey,
                                                                const GALGAS_uint & in_mLabelAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_symbolTableForRelativesResolution_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_symbolTableForRelativesResolution_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_uint & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_symbolTableForRelativesResolution_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLabelAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_symbolTableForRelativesResolution_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @codeList list                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_codeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_codeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_codeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mAssemblyCode,
                                                  const class GALGAS_uintlist & in_mBinaryCode
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_codeList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_codeList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_codeList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_uintlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_codeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uintlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_codeList add_operation (const GALGAS_codeList & inOperand,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uintlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_uintlist & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_uintlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_uintlist & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uintlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uintlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mBinaryCodeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_codeList ;
 
} ; // End of GALGAS_codeList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_codeList : public cGenericAbstractEnumerator {
  public : cEnumerator_codeList (const GALGAS_codeList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_codeList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @codeList_2D_element struct                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_codeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mAssemblyCode ;

  public : GALGAS_uintlist mProperty_mBinaryCode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_codeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_codeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_codeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_codeList_2D_element (const GALGAS_string & in_mAssemblyCode,
                                       const GALGAS_uintlist & in_mBinaryCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_codeList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_codeList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_uintlist & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_codeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAssemblyCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mBinaryCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_codeList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @pic18_dataAddressMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_pic_31__38__5F_dataAddressMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38__5F_dataAddressMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38__5F_dataAddressMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) ;
  public : GALGAS_pic_31__38__5F_dataAddressMap & operator = (const GALGAS_pic_31__38__5F_dataAddressMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38__5F_dataAddressMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38__5F_dataAddressMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_pic_31__38__5F_dataAddressMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataAddressMap & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMDataAddressForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDataAddressForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38__5F_dataAddressMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_pic_31__38__5F_dataAddressMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38__5F_dataAddressMap ;
 
} ; // End of GALGAS_pic_31__38__5F_dataAddressMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_pic_31__38__5F_dataAddressMap : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDataAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38__5F_dataAddressMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@pic18_dataAddressMap' map                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_pic_31__38__5F_dataAddressMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mDataAddress ;

//--- Constructor
  public : cMapElement_pic_31__38__5F_dataAddressMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_uint & in_mDataAddress
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @pic_31__38__5F_dataAddressMap_2D_element struct                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_pic_31__38__5F_dataAddressMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mDataAddress ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38__5F_dataAddressMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38__5F_dataAddressMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38__5F_dataAddressMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_uint & in_mDataAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38__5F_dataAddressMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_pic_31__38__5F_dataAddressMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_uint & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38__5F_dataAddressMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDataAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38__5F_dataAddressMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Abstract extension method '@ipic18SequentialInstruction generateCode'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_generateCode) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                         const class GALGAS_uint constinArgument0,
                                                                                         const class GALGAS_symbolTableForRelativesResolution constinArgument1,
                                                                                         const class GALGAS_pic_31__38__5F_dataAddressMap constinArgument2,
                                                                                         class GALGAS_codeList & outArgument3,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_ipic_31__38_SequentialInstruction_generateCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateCode (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                       const GALGAS_uint constin_inAddress,
                                       const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                       const GALGAS_pic_31__38__5F_dataAddressMap constin_inDataMap,
                                       GALGAS_codeList & out_outCode,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Abstract extension method '@ipic18AbstractBlockTerminator generateTerminatorCode'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                     const class GALGAS_uint constinArgument0,
                                                                                                     const class GALGAS_symbolTableForRelativesResolution constinArgument1,
                                                                                                     const class GALGAS_string constinArgument2,
                                                                                                     class GALGAS_codeList & outArgument3,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateTerminatorCode (const int32_t inClassIndex,
                                                  extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_generateTerminatorCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateTerminatorCode (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                 const GALGAS_uint constin_inAddress,
                                                 const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                 const GALGAS_string constin_inNextBlockLabel,
                                                 GALGAS_codeList & out_outCode,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Abstract extension getter '@ipic18AbstractBlockTerminator isEqualToTerminator'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_bool (*enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const class GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument0,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_isEqualToTerminator (const int32_t inClassIndex,
                                               enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_isEqualToTerminator inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool callExtensionGetter_isEqualToTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GALGAS_ipic_31__38_AbstractBlockTerminator constin_inTerminator,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                           const class GALGAS_string constinArgument0,
                                                                                                           class C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_terminatorDisplay (const int32_t inClassIndex,
                                             enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorDisplay inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_terminatorDisplay (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                           const GALGAS_string constin_inNextBlockLabel,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_uint (*enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                      const class GALGAS_string constinArgument0,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_terminatorSize (const int32_t inClassIndex,
                                          enterExtensionGetter_ipic_31__38_AbstractBlockTerminator_terminatorSize inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_uint callExtensionGetter_terminatorSize (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                      const GALGAS_string constin_inNextBlockLabel,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@ipic18SequentialInstruction instructionSize'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_uint (*enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_instructionSize (const int32_t inClassIndex,
                                           enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionSize inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_uint callExtensionGetter_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Extension method '@ipic18SequentialInstruction performInstructionRelativeBranchResolution'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                       const class GALGAS_uint constinArgument0,
                                                                                                                       const class GALGAS_string constinArgument1,
                                                                                                                       const class GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                                       class GALGAS_uint & ioArgument3,
                                                                                                                       class GALGAS_string & ioArgument4,
                                                                                                                       class GALGAS_ipic_31__38_SequentialInstruction & outArgument5,
                                                                                                                       class C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_performInstructionRelativeBranchResolution (const int32_t inClassIndex,
                                                                      extensionMethodSignature_ipic_31__38_SequentialInstruction_performInstructionRelativeBranchResolution inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_performInstructionRelativeBranchResolution (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                     const GALGAS_uint constin_inAddress,
                                                                     const GALGAS_string constin_inBlockLabel,
                                                                     const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                                     GALGAS_uint & io_ioConversionCount,
                                                                     GALGAS_string & io_ioListFileContents,
                                                                     GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension getter '@ipic18SequentialInstruction instructionDisplay'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_stringlist (*enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_instructionDisplay (const int32_t inClassIndex,
                                              enterExtensionGetter_ipic_31__38_SequentialInstruction_instructionDisplay inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringlist callExtensionGetter_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension getter '@pic18InstructionWithNoOperandKind mnemonic' (as function)                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_mnemonic (const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const class GALGAS_pic_31__38_MacroMap constinArgument0,
                                                                                        class GALGAS_stringset & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_addUsedRoutines (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_PiccoloInstruction_addUsedRoutines inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_addUsedRoutines (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                          GALGAS_stringset & io_ioUsedRoutines,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @declaredRoutineMap map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_declaredRoutineMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_declaredRoutineMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_declaredRoutineMap (const GALGAS_declaredRoutineMap & inSource) ;
  public : GALGAS_declaredRoutineMap & operator = (const GALGAS_declaredRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_declaredRoutineMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint constinArgument1,
                                                   class GALGAS_luint constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   class GALGAS_bool constinArgument4,
                                                   class GALGAS_pic_31__38_InstructionList constinArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsNoReturnForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPreservesBankForKey (class GALGAS_bool constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRequiredBankForKey (class GALGAS_luint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnedBankForKey (class GALGAS_luint constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturnForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBankForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBankForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBankForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declaredRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredRoutineMap ;
 
} ; // End of GALGAS_declaredRoutineMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_declaredRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_declaredRoutineMap (const GALGAS_declaredRoutineMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@declaredRoutineMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_declaredRoutineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mProperty_mRequiredBank ;
  public : GALGAS_luint mProperty_mReturnedBank ;
  public : GALGAS_bool mProperty_mPreservesBank ;
  public : GALGAS_bool mProperty_mIsNoReturn ;
  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cMapElement_declaredRoutineMap (const GALGAS_lstring & inKey,
                                           const GALGAS_luint & in_mRequiredBank,
                                           const GALGAS_luint & in_mReturnedBank,
                                           const GALGAS_bool & in_mPreservesBank,
                                           const GALGAS_bool & in_mIsNoReturn,
                                           const GALGAS_pic_31__38_InstructionList & in_mInstructionList
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @declaredRoutineMap_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_luint mProperty_mRequiredBank ;

  public : GALGAS_luint mProperty_mReturnedBank ;

  public : GALGAS_bool mProperty_mPreservesBank ;

  public : GALGAS_bool mProperty_mIsNoReturn ;

  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_luint & in_mRequiredBank,
                                                 const GALGAS_luint & in_mReturnedBank,
                                                 const GALGAS_bool & in_mPreservesBank,
                                                 const GALGAS_bool & in_mIsNoReturn,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_luint & inOperand1,
                                                                              const class GALGAS_luint & inOperand2,
                                                                              const class GALGAS_bool & inOperand3,
                                                                              const class GALGAS_bool & inOperand4,
                                                                              const class GALGAS_pic_31__38_InstructionList & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRequiredBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mReturnedBank (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declaredRoutineMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@pic18PiccoloInstruction performInlining'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_PiccoloInstruction_performInlining) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                        const class GALGAS_stringset constinArgument0,
                                                                                        const class GALGAS_declaredRoutineMap constinArgument1,
                                                                                        const class GALGAS_stringset constinArgument2,
                                                                                        class GALGAS_pic_31__38_InstructionList & ioArgument3,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_performInlining (const int32_t inClassIndex,
                                           extensionMethodSignature_pic_31__38_PiccoloInstruction_performInlining inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_performInlining (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GALGAS_stringset constin_inInlinedRoutineSet,
                                          const GALGAS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const GALGAS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          GALGAS_pic_31__38_InstructionList & io_ioInstructionList,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction) (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                                                                       const class GALGAS_uint constinArgument0,
                                                                                                       const class GALGAS_routineMap constinArgument1,
                                                                                                       const class GALGAS_registerTable constinArgument2,
                                                                                                       const class GALGAS_pic_31__38__5F_dataMap constinArgument3,
                                                                                                       const class GALGAS_constantMap constinArgument4,
                                                                                                       class GALGAS_uint & ioArgument5,
                                                                                                       const class GALGAS_bool constinArgument6,
                                                                                                       class GALGAS_stringset & ioArgument7,
                                                                                                       class GALGAS_ipic_31__38_SequentialInstruction & outArgument8,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeSimpleInstruction (const int32_t inClassIndex,
                                                    extensionMethodSignature_pic_31__38_PiccoloSimpleInstruction_analyzeSimpleInstruction inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeSimpleInstruction (const class cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const GALGAS_uint constin_inAccessBankSplitOffset,
                                                   const GALGAS_routineMap constin_inRoutineMap,
                                                   const GALGAS_registerTable constin_inRegisterTable,
                                                   const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const GALGAS_constantMap constin_inConstantMap,
                                                   GALGAS_uint & io_ioCurrentBank,
                                                   const GALGAS_bool constin_inShouldPreserveBSR,
                                                   GALGAS_stringset & io_ioUsedRegisters,
                                                   GALGAS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Abstract extension method '@pic18PiccoloInstruction analyze'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_PiccoloInstruction_analyze) (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                                                                const class GALGAS_uint constinArgument0,
                                                                                class GALGAS_ipic_31__38_BlockList & ioArgument1,
                                                                                const class GALGAS_routineMap constinArgument2,
                                                                                const class GALGAS_registerTable constinArgument3,
                                                                                const class GALGAS_pic_31__38__5F_dataMap constinArgument4,
                                                                                const class GALGAS_constantMap constinArgument5,
                                                                                const class GALGAS_pic_31__38_MacroMap constinArgument6,
                                                                                class GALGAS_uint & ioArgument7,
                                                                                class GALGAS_ipic_31__38_SequentialInstructionList & ioArgument8,
                                                                                class GALGAS_lstring & ioArgument9,
                                                                                class GALGAS_string & ioArgument10,
                                                                                class GALGAS_uint & ioArgument11,
                                                                                const class GALGAS_bool constinArgument12,
                                                                                const class GALGAS_routineKind constinArgument13,
                                                                                class GALGAS_stringset & ioArgument14,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_pic_31__38_PiccoloInstruction_analyze inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyze (const class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const GALGAS_uint constin_inAccessBankSplitOffset,
                                  GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const GALGAS_routineMap constin_inRoutineMap,
                                  const GALGAS_registerTable constin_inRegisterTable,
                                  const GALGAS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const GALGAS_constantMap constin_inConstantMap,
                                  const GALGAS_pic_31__38_MacroMap constin_inMacroMap,
                                  GALGAS_uint & io_ioLocalLabelIndex,
                                  GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  GALGAS_lstring & io_ioBlockLabel,
                                  GALGAS_string & io_ioListFileContents,
                                  GALGAS_uint & io_ioCurrentBank,
                                  const GALGAS_bool constin_inShouldPreserveBSR,
                                  const GALGAS_routineKind constin_inRoutineKind,
                                  GALGAS_stringset & io_ioUsedRegisters,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @blockInstructionBlockMap map                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_blockInstructionBlockMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_blockInstructionBlockMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockInstructionBlockMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inSource) ;
  public : GALGAS_blockInstructionBlockMap & operator = (const GALGAS_blockInstructionBlockMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInstructionBlockMap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInstructionBlockMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockInstructionBlockMap constructor_mapWithMapToOverride (const class GALGAS_blockInstructionBlockMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                      const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                      const class GALGAS_location & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                   class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                   class GALGAS_location constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockTerminaisonForBlockInstructionForKey (class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument0,
                                                                                       class GALGAS_string constinArgument1,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMEndOfBlockForKey (class GALGAS_location constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                   class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlockForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInstructionBlockMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockInstructionBlockMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInstructionBlockMap ;
 
} ; // End of GALGAS_blockInstructionBlockMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_blockInstructionBlockMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockInstructionBlockMap (const GALGAS_blockInstructionBlockMap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockInstructionBlockMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@blockInstructionBlockMap' map                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_blockInstructionBlockMap : public cMapElement {
//--- Map attributes
  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mProperty_mEndOfBlock ;

//--- Constructor
  public : cMapElement_blockInstructionBlockMap (const GALGAS_lstring & inKey,
                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                 const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                 const GALGAS_location & in_mEndOfBlock
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @blockInstructionBlockMap_2D_element struct                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_blockInstructionBlockMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_pic_31__38_InstructionList mProperty_mInstructionList ;

  public : GALGAS_abstractBlockTerminationForBlockInstruction mProperty_mBlockTerminaisonForBlockInstruction ;

  public : GALGAS_location mProperty_mEndOfBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_blockInstructionBlockMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockInstructionBlockMap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                       const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                       const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInstructionBlockMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInstructionBlockMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                    const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                    const class GALGAS_location & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockInstructionBlockMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction getter_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfBlock (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInstructionBlockMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @blockInitialBankSelectionMap map                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_blockInitialBankSelectionMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_blockInitialBankSelectionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockInitialBankSelectionMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inSource) ;
  public : GALGAS_blockInitialBankSelectionMap & operator = (const GALGAS_blockInitialBankSelectionMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInitialBankSelectionMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInitialBankSelectionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_blockInitialBankSelectionMap constructor_mapWithMapToOverride (const class GALGAS_blockInitialBankSelectionMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_string constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInitialBankSelectionForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSourceBlockForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_string & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialBankSelectionForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceBlockForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInitialBankSelectionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockInitialBankSelectionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockInitialBankSelectionMap ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_blockInitialBankSelectionMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockInitialBankSelectionMap (const GALGAS_blockInitialBankSelectionMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mInitialBankSelection (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSourceBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockInitialBankSelectionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@blockInitialBankSelectionMap' map                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_blockInitialBankSelectionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mProperty_mInitialBankSelection ;
  public : GALGAS_string mProperty_mSourceBlock ;

//--- Constructor
  public : cMapElement_blockInitialBankSelectionMap (const GALGAS_lstring & inKey,
                                                     const GALGAS_uint & in_mInitialBankSelection,
                                                     const GALGAS_string & in_mSourceBlock
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @blockInitialBankSelectionMap_2D_element struct                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_blockInitialBankSelectionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_uint mProperty_mInitialBankSelection ;

  public : GALGAS_string mProperty_mSourceBlock ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_blockInitialBankSelectionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_blockInitialBankSelectionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockInitialBankSelectionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                           const GALGAS_uint & in_mInitialBankSelection,
                                                           const GALGAS_string & in_mSourceBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInitialBankSelectionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_blockInitialBankSelectionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_uint & inOperand1,
                                                                                        const class GALGAS_string & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockInitialBankSelectionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mInitialBankSelection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceBlock (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInitialBankSelectionMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Abstract extension method '@abstractBlockTerminationForBlockInstruction addVisitedBlocks'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                       class GALGAS_stringset & ioArgument0,
                                                                                                       const class GALGAS_blockInstructionBlockMap constinArgument1,
                                                                                                       const class GALGAS_string constinArgument2,
                                                                                                       const class GALGAS_uint constinArgument3,
                                                                                                       class GALGAS_blockInitialBankSelectionMap & ioArgument4,
                                                                                                       class GALGAS_bool & ioArgument5,
                                                                                                       class GALGAS_bool & ioArgument6,
                                                                                                       class C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_addVisitedBlocks (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractBlockTerminationForBlockInstruction_addVisitedBlocks inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_addVisitedBlocks (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                           GALGAS_stringset & io_ioVisitedBlockSet,
                                           const GALGAS_blockInstructionBlockMap constin_inBlockMap,
                                           const GALGAS_string constin_inCurrentBlockName,
                                           const GALGAS_uint constin_inInitialBlockSetting,
                                           GALGAS_blockInitialBankSelectionMap & io_ioBlockInitialBankSelectionMap,
                                           GALGAS_bool & io_ioContinuesInSequence,
                                           GALGAS_bool & io_ioContinueAccessibilityExploration,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension method '@abstractBlockTerminationForBlockInstruction generateBlock'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock) (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                                                                                    const class GALGAS_uint constinArgument0,
                                                                                                    const class GALGAS_uint constinArgument1,
                                                                                                    const class GALGAS_registerTable constinArgument2,
                                                                                                    const class GALGAS_constantMap constinArgument3,
                                                                                                    class GALGAS_uint & ioArgument4,
                                                                                                    class GALGAS_ipic_31__38_BlockList & ioArgument5,
                                                                                                    class GALGAS_stringset & ioArgument6,
                                                                                                    const class GALGAS_string constinArgument7,
                                                                                                    class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument8,
                                                                                                    class C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateBlock (const int32_t inClassIndex,
                                         extensionMethodSignature_abstractBlockTerminationForBlockInstruction_generateBlock inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateBlock (const class cPtr_abstractBlockTerminationForBlockInstruction * inObject,
                                        const GALGAS_uint constin_inAccessBankSplitOffset,
                                        const GALGAS_uint constin_inCurrentBank,
                                        const GALGAS_registerTable constin_inRegisterTable,
                                        const GALGAS_constantMap constin_inConstantMap,
                                        GALGAS_uint & io_ioLocalLabelIndex,
                                        GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                        GALGAS_stringset & io_ioUsedRegisters,
                                        const GALGAS_string constin_inLabelForBlock,
                                        GALGAS_ipic_31__38_AbstractBlockTerminator & out_outTerminator,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Abstract extension method '@pic18ConditionExpression analyzeCondition'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition) (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                                                                          const class GALGAS_uint constinArgument0,
                                                                                          const class GALGAS_uint constinArgument1,
                                                                                          const class GALGAS_registerTable constinArgument2,
                                                                                          const class GALGAS_constantMap constinArgument3,
                                                                                          class GALGAS_uint & ioArgument4,
                                                                                          class GALGAS_ipic_31__38_BlockList & ioArgument5,
                                                                                          const class GALGAS_lstring constinArgument6,
                                                                                          const class GALGAS_lstring constinArgument7,
                                                                                          class GALGAS_stringset & ioArgument8,
                                                                                          class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument9,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeCondition (const int32_t inClassIndex,
                                            extensionMethodSignature_pic_31__38_ConditionExpression_analyzeCondition inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeCondition (const class cPtr_pic_31__38_ConditionExpression * inObject,
                                           const GALGAS_uint constin_inAccessBankSplitOffset,
                                           const GALGAS_uint constin_inCurrentBank,
                                           const GALGAS_registerTable constin_inRegisterTable,
                                           const GALGAS_constantMap constin_inConstantMap,
                                           GALGAS_uint & io_ioLocalLabelIndex,
                                           GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                           const GALGAS_lstring constin_inConditionTrueLabel,
                                           const GALGAS_lstring constin_inConditionFalseLabel,
                                           GALGAS_stringset & io_ioUsedRegisters,
                                           GALGAS_ipic_31__38_AbstractBlockTerminator & out_outCurrentBlockTerminator,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Abstract extension method '@ipic18AbstractBlockTerminator optimizeTerminator'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator) (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                 const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                 const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                 const class GALGAS_string constinArgument3,
                                                                                                 class GALGAS_bool & ioArgument4,
                                                                                                 class GALGAS_string & ioArgument5,
                                                                                                 class GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument6,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_optimizeTerminator (const int32_t inClassIndex,
                                              extensionMethodSignature_ipic_31__38_AbstractBlockTerminator_optimizeTerminator inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_optimizeTerminator (const class cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                             const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                             const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                             const GALGAS_string constin_inBlockLabel,
                                             GALGAS_bool & io_ioOptimizationDone,
                                             GALGAS_string & io_ioListFileContents,
                                             GALGAS_ipic_31__38_AbstractBlockTerminator & out_outOptimizedTerminator,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @optimizeFlagStruct struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_optimizeFlagStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_bool mProperty_mRemoveEmptyRoutine ;

  public : GALGAS_bool mProperty_mJSRtoRETLWreplacedByMOVLW ;

  public : GALGAS_bool mProperty_mJSRfollowedByRETreplacedByJUMP ;

  public : GALGAS_bool mProperty_mMOVLWfollowedByRETreplacedByRETLW ;

  public : GALGAS_bool mProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ;

  public : GALGAS_bool mProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ;

  public : GALGAS_bool mProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optimizeFlagStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_optimizeFlagStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_optimizeFlagStruct (const GALGAS_bool & in_mRemoveEmptyRoutine,
                                      const GALGAS_bool & in_mJSRtoRETLWreplacedByMOVLW,
                                      const GALGAS_bool & in_mJSRfollowedByRETreplacedByJUMP,
                                      const GALGAS_bool & in_mMOVLWfollowedByRETreplacedByRETLW,
                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineReplacedByInstruction,
                                      const GALGAS_bool & in_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction,
                                      const GALGAS_bool & in_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optimizeFlagStruct extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_optimizeFlagStruct constructor_new (const class GALGAS_bool & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_bool & inOperand3,
                                                                   const class GALGAS_bool & inOperand4,
                                                                   const class GALGAS_bool & inOperand5,
                                                                   const class GALGAS_bool & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optimizeFlagStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRfollowedByRETreplacedByJUMP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoOneInstructionRoutineReplacedByInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mJSRtoRETLWreplacedByMOVLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMOVLWfollowedByRETreplacedByRETLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mRemoveEmptyRoutine (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optimizeFlagStruct class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optimizeFlagStruct ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension method '@ipic18AbstractConditionTerminator getOptimizedTerminators'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                                          const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                          const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                          const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                          const class GALGAS_string constinArgument3,
                                                                                                          class GALGAS_bool & ioArgument4,
                                                                                                          class GALGAS_string & ioArgument5,
                                                                                                          class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument6,
                                                                                                          class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument7,
                                                                                                          class GALGAS_bool & outArgument8,
                                                                                                          class C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                   extensionMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_getOptimizedTerminators (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                  const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                  const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                  const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                  const GALGAS_string constin_inBlockLabel,
                                                  GALGAS_bool & io_ioOptimizationDone,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                  GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                  GALGAS_bool & out_outIdenticalTerminators,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @ipic_31__38_JumpTerminator class                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_ipic_31__38_JumpTerminator : public GALGAS_ipic_31__38_SingleInstructionTerminator {
//--- Constructor
  public : GALGAS_ipic_31__38_JumpTerminator (void) ;

//---
  public : inline const class cPtr_ipic_31__38_JumpTerminator * ptr (void) const { return (const cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ipic_31__38_JumpTerminator extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_ipic_31__38_JumpTerminator constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_jumpInstructionKind & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ipic_31__38_JumpTerminator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ipic_31__38_JumpTerminator class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @ipic18JumpTerminator class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_ipic_31__38_JumpTerminator : public cPtr_ipic_31__38_SingleInstructionTerminator {
//--- Attributes
  public : GALGAS_lstring mProperty_mLabel ;
  public : GALGAS_jumpInstructionKind mProperty_mKind ;

//--- Constructor
  public : cPtr_ipic_31__38_JumpTerminator (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mLabel,
                                            const GALGAS_jumpInstructionKind & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

