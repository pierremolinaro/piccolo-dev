#ifndef all_2D_declarations_2D__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__33__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @pic18_dataMap map                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_pic_31__38__5F_dataMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38__5F_dataMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uintlist & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDataForKey (class GALGAS_uintlist constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mDataForKey (const class GALGAS_string & constinOperand0,
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38__5F_dataMap : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mData (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38__5F_dataMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      Class for element of '@pic18_dataMap' map                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uintlist mAttribute_mData ;

//--- Constructor
  public : cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                               const GALGAS_uintlist & in_mData
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @pic_31__38__5F_dataMap_2D_element struct                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uintlist mAttribute_mData ;


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
                                                     const GALGAS_uintlist & in_mData) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38__5F_dataMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38__5F_dataMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_uintlist & inOperand1
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


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38__5F_dataMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @ipic18SequentialInstructionList list                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_SequentialInstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ipic_31__38_SequentialInstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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
  public : static GALGAS_ipic_31__38_SequentialInstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38_SequentialInstructionList constructor_listWithValue (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @ipic_31__38_SequentialInstruction class                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Pointer class for @ipic18SequentialInstruction class                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ipic_31__38_SequentialInstruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              @ipic_31__38_SequentialInstructionList_2D_element struct                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_SequentialInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_ipic_31__38_SequentialInstruction mAttribute_mInstruction ;
  public : GALGAS_uint mAttribute_mMin ;
  public : GALGAS_uint mAttribute_mMax ;


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
  public : static GALGAS_ipic_31__38_SequentialInstructionList_2D_element constructor_new (const class GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @ipic18BlockList list                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_BlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_ipic_31__38_BlockList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_ipic_31__38_BlockList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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
  public : static GALGAS_ipic_31__38_BlockList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38_BlockList constructor_listWithValue (const class GALGAS_ipic_31__38_Block & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_ipic_31__38_BlockList : public cGenericAbstractEnumerator {
  public : cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ipic_31__38_BlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     @ipic_31__38_AbstractBlockTerminator class                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @ipic_31__38_Block struct                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_Block : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_uint mAttribute_mAddress ;
  public : GALGAS_lstring mAttribute_mLabel ;
  public : GALGAS_ipic_31__38_SequentialInstructionList mAttribute_mInstructionList ;
  public : GALGAS_ipic_31__38_AbstractBlockTerminator mAttribute_mTerminator ;
  public : GALGAS_uint mAttribute_mTerminatorMin ;
  public : GALGAS_uint mAttribute_mTerminatorMax ;


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
  public : static GALGAS_ipic_31__38_Block constructor_new (const class GALGAS_uint & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @ipic_31__38_BlockList_2D_element struct                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ipic_31__38_BlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_ipic_31__38_Block mAttribute_mBlock ;


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
  public : static GALGAS_ipic_31__38_BlockList_2D_element constructor_new (const class GALGAS_ipic_31__38_Block & inOperand0
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @conditionalBranchMode enum                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_conditionalBranchMode constructor_ipicBRA (LOCATION_ARGS) ;

  public : static GALGAS_conditionalBranchMode constructor_ipicGOTO (LOCATION_ARGS) ;

  public : static GALGAS_conditionalBranchMode constructor_native (LOCATION_ARGS) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditionalBranchMode ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @ipic_31__38_RegisterComparison enum                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_ipic_31__38_RegisterComparison constructor_registerEqualsToW (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38_RegisterComparison constructor_registerGreaterThanW (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38_RegisterComparison constructor_registerLowerThanW (LOCATION_ARGS) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                @FA_5F_sequential_5F_instruction_5F_base_5F_code enum                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      @ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code enum                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public : static GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  @skip_5F_instruction_5F_FDA_5F_base_5F_code enum                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DCFSNZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_DECFSZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INCFSZ (LOCATION_ARGS) ;

  public : static GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code constructor_INFSNZ (LOCATION_ARGS) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @symbolTableForBlockOptimization map                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_symbolTableForBlockOptimization constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_symbolTableForBlockOptimization constructor_mapWithMapToOverride (const class GALGAS_symbolTableForBlockOptimization & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForBlockOptimization : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDefinitionBlockIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForBlockOptimization_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Class for element of '@symbolTableForBlockOptimization' map                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForBlockOptimization : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDefinitionBlockIndex ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 @symbolTableForBlockOptimization_2D_element struct                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForBlockOptimization_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mDefinitionBlockIndex ;


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
  public : static GALGAS_symbolTableForBlockOptimization_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @symbolTableForClusterOrdering map                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForClusterOrdering_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_symbolTableForClusterOrdering constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_symbolTableForClusterOrdering constructor_mapWithMapToOverride (const class GALGAS_symbolTableForClusterOrdering & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForClusterOrdering : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForClusterOrdering (const GALGAS_symbolTableForClusterOrdering & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mCluster (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForClusterOrdering_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Class for element of '@symbolTableForClusterOrdering' map                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForClusterOrdering : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mCluster ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  @symbolTableForClusterOrdering_2D_element struct                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForClusterOrdering_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mCluster ;


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
  public : static GALGAS_symbolTableForClusterOrdering_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @symbolTableForRelativesResolution map                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_symbolTableForRelativesResolution_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_symbolTableForRelativesResolution constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_symbolTableForRelativesResolution constructor_mapWithMapToOverride (const class GALGAS_symbolTableForRelativesResolution & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_symbolTableForRelativesResolution : public cGenericAbstractEnumerator {
  public : cEnumerator_symbolTableForRelativesResolution (const GALGAS_symbolTableForRelativesResolution & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLabelAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_symbolTableForRelativesResolution_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                            Class for element of '@symbolTableForRelativesResolution' map                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_symbolTableForRelativesResolution : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mLabelAddress ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                @symbolTableForRelativesResolution_2D_element struct                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_symbolTableForRelativesResolution_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mLabelAddress ;


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
  public : static GALGAS_symbolTableForRelativesResolution_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                   @codeList list                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_codeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_codeList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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
  public : static GALGAS_codeList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_codeList constructor_listWithValue (const class GALGAS_string & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_codeList : public cGenericAbstractEnumerator {
  public : cEnumerator_codeList (const GALGAS_codeList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mAssemblyCode (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mBinaryCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_codeList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @codeList_2D_element struct                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_codeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mAssemblyCode ;
  public : GALGAS_uintlist mAttribute_mBinaryCode ;


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
  public : static GALGAS_codeList_2D_element constructor_new (const class GALGAS_string & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_codeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @pic18_dataAddressMap map                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_pic_31__38__5F_dataAddressMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_pic_31__38__5F_dataAddressMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38__5F_dataAddressMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38__5F_dataAddressMap & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_pic_31__38__5F_dataAddressMap : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38__5F_dataAddressMap (const GALGAS_pic_31__38__5F_dataAddressMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDataAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38__5F_dataAddressMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Class for element of '@pic18_dataAddressMap' map                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_pic_31__38__5F_dataAddressMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDataAddress ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  @pic_31__38__5F_dataAddressMap_2D_element struct                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_pic_31__38__5F_dataAddressMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mDataAddress ;


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
  public : static GALGAS_pic_31__38__5F_dataAddressMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                               @declaredRoutineMap map                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_declaredRoutineMap & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Class for element of '@declaredRoutineMap' map                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredRoutineMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mAttribute_mRequiredBank ;
  public : GALGAS_luint mAttribute_mReturnedBank ;
  public : GALGAS_bool mAttribute_mPreservesBank ;
  public : GALGAS_bool mAttribute_mIsNoReturn ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @declaredRoutineMap_2D_element struct                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_luint mAttribute_mRequiredBank ;
  public : GALGAS_luint mAttribute_mReturnedBank ;
  public : GALGAS_bool mAttribute_mPreservesBank ;
  public : GALGAS_bool mAttribute_mIsNoReturn ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;


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
  public : static GALGAS_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @caseConstantMap map                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_caseConstantMap ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_caseConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_caseConstantMap constructor_mapWithMapToOverride (const class GALGAS_caseConstantMap & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_caseConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_caseConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@caseConstantMap' map                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @caseConstantMap_2D_element struct                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_caseConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


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
  public : static GALGAS_caseConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                            @blockInstructionBlockMap map                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInstructionBlockMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_blockInstructionBlockMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_blockInstructionBlockMap constructor_mapWithMapToOverride (const class GALGAS_blockInstructionBlockMap & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                Class for element of '@blockInstructionBlockMap' map                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInstructionBlockMap : public cMapElement {
//--- Map attributes
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mAttribute_mEndOfBlock ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     @blockInstructionBlockMap_2D_element struct                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInstructionBlockMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mAttribute_mEndOfBlock ;


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
  public : static GALGAS_blockInstructionBlockMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @blockInitialBankSelectionMap map                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockInitialBankSelectionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

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
  public : static GALGAS_blockInitialBankSelectionMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_blockInitialBankSelectionMap constructor_mapWithMapToOverride (const class GALGAS_blockInitialBankSelectionMap & inOperand0
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              Class for element of '@blockInitialBankSelectionMap' map                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockInitialBankSelectionMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mInitialBankSelection ;
  public : GALGAS_string mAttribute_mSourceBlock ;

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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   @blockInitialBankSelectionMap_2D_element struct                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInitialBankSelectionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mInitialBankSelection ;
  public : GALGAS_string mAttribute_mSourceBlock ;


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
  public : static GALGAS_blockInitialBankSelectionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @blockInvocationGraph graph                                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockInvocationGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_blockInvocationGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockInvocationGraph extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_blockInvocationGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_string inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_stringlist & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_stringlist & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_stringlist & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_stringlist & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_stringlist & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_stringlist & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_stringlist & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockInvocationGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                        const class GALGAS_stringset & constinOperand1,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockInvocationGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockInvocationGraph ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                  @clusterList list                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_clusterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_clusterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_clusterList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_ipic_31__38_BlockList & in_mBlockList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_clusterList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_clusterList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_clusterList constructor_listWithValue (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_clusterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_clusterList add_operation (const GALGAS_clusterList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_ipic_31__38_BlockList constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_ipic_31__38_BlockList & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_mBlockListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_clusterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_clusterList ;
 
} ; // End of GALGAS_clusterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_clusterList : public cGenericAbstractEnumerator {
  public : cEnumerator_clusterList (const GALGAS_clusterList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_ipic_31__38_BlockList current_mBlockList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_clusterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @clusterList_2D_element struct                                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_clusterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_ipic_31__38_BlockList mAttribute_mBlockList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_clusterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_clusterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_clusterList_2D_element (const GALGAS_ipic_31__38_BlockList & in_mBlockList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_clusterList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_clusterList_2D_element constructor_new (const class GALGAS_ipic_31__38_BlockList & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_clusterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_BlockList getter_mBlockList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_clusterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_clusterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @neededConversionForClusterOrder map                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_neededConversionForClusterOrder_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_neededConversionForClusterOrder : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_neededConversionForClusterOrder (void) ;

//--------------------------------- Handle copy
  public : GALGAS_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inSource) ;
  public : GALGAS_neededConversionForClusterOrder & operator = (const GALGAS_neededConversionForClusterOrder & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_neededConversionForClusterOrder extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_neededConversionForClusterOrder constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_neededConversionForClusterOrder constructor_mapWithMapToOverride (const class GALGAS_neededConversionForClusterOrder & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMConversionsForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConversionsForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_neededConversionForClusterOrder getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_neededConversionForClusterOrder * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_neededConversionForClusterOrder ;
 
} ; // End of GALGAS_neededConversionForClusterOrder class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_neededConversionForClusterOrder : public cGenericAbstractEnumerator {
  public : cEnumerator_neededConversionForClusterOrder (const GALGAS_neededConversionForClusterOrder & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mConversions (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_neededConversionForClusterOrder_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                             Class for element of '@neededConversionForClusterOrder' map                             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_neededConversionForClusterOrder : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mConversions ;

//--- Constructor
  public : cMapElement_neededConversionForClusterOrder (const GALGAS_lstring & inKey,
                                                        const GALGAS_uint & in_mConversions
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                 @neededConversionForClusterOrder_2D_element struct                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_neededConversionForClusterOrder_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mConversions ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_neededConversionForClusterOrder_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_neededConversionForClusterOrder_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_neededConversionForClusterOrder_2D_element (const GALGAS_lstring & in_lkey,
                                                              const GALGAS_uint & in_mConversions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_neededConversionForClusterOrder_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_neededConversionForClusterOrder_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_uint & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_neededConversionForClusterOrder_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mConversions (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_neededConversionForClusterOrder_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @generatedCodeMap map                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_generatedCodeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generatedCodeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_generatedCodeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_generatedCodeMap (const GALGAS_generatedCodeMap & inSource) ;
  public : GALGAS_generatedCodeMap & operator = (const GALGAS_generatedCodeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generatedCodeMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generatedCodeMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_generatedCodeMap constructor_mapWithMapToOverride (const class GALGAS_generatedCodeMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_codeList & inOperand1,
                                                      const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_codeList constinArgument1,
                                                   class GALGAS_ipic_31__38_SequentialInstruction constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCodeForKey (class GALGAS_codeList constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionForKey (class GALGAS_ipic_31__38_SequentialInstruction constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_codeList & outArgument1,
                                                   class GALGAS_ipic_31__38_SequentialInstruction & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_mCodeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstructionForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_generatedCodeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_generatedCodeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_generatedCodeMap ;
 
} ; // End of GALGAS_generatedCodeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_generatedCodeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_generatedCodeMap (const GALGAS_generatedCodeMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_codeList current_mCode (LOCATION_ARGS) const ;
  public : class GALGAS_ipic_31__38_SequentialInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_generatedCodeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@generatedCodeMap' map                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_generatedCodeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_codeList mAttribute_mCode ;
  public : GALGAS_ipic_31__38_SequentialInstruction mAttribute_mInstruction ;

//--- Constructor
  public : cMapElement_generatedCodeMap (const GALGAS_lstring & inKey,
                                         const GALGAS_codeList & in_mCode,
                                         const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @generatedCodeMap_2D_element struct                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_generatedCodeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_codeList mAttribute_mCode ;
  public : GALGAS_ipic_31__38_SequentialInstruction mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_generatedCodeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_generatedCodeMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_codeList & in_mCode,
                                               const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_generatedCodeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_generatedCodeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_codeList & inOperand1,
                                                                      const class GALGAS_ipic_31__38_SequentialInstruction & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_generatedCodeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_codeList getter_mCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_SequentialInstruction getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_generatedCodeMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generatedCodeMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @blockMapForStackComputation map                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockMapForStackComputation_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockMapForStackComputation : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockMapForStackComputation (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inSource) ;
  public : GALGAS_blockMapForStackComputation & operator = (const GALGAS_blockMapForStackComputation & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockMapForStackComputation extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_blockMapForStackComputation constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_blockMapForStackComputation constructor_mapWithMapToOverride (const class GALGAS_blockMapForStackComputation & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_ipic_31__38_Block & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_ipic_31__38_Block constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBlockForKey (class GALGAS_ipic_31__38_Block constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_ipic_31__38_Block & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlockForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockMapForStackComputation getter_overriddenMap (C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockMapForStackComputation * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockMapForStackComputation ;
 
} ; // End of GALGAS_blockMapForStackComputation class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockMapForStackComputation : public cGenericAbstractEnumerator {
  public : cEnumerator_blockMapForStackComputation (const GALGAS_blockMapForStackComputation & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_ipic_31__38_Block current_mBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockMapForStackComputation_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Class for element of '@blockMapForStackComputation' map                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockMapForStackComputation : public cMapElement {
//--- Map attributes
  public : GALGAS_ipic_31__38_Block mAttribute_mBlock ;

//--- Constructor
  public : cMapElement_blockMapForStackComputation (const GALGAS_lstring & inKey,
                                                    const GALGAS_ipic_31__38_Block & in_mBlock
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   @blockMapForStackComputation_2D_element struct                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockMapForStackComputation_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_ipic_31__38_Block mAttribute_mBlock ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_blockMapForStackComputation_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockMapForStackComputation_2D_element (const GALGAS_lstring & in_lkey,
                                                          const GALGAS_ipic_31__38_Block & in_mBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockMapForStackComputation_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_blockMapForStackComputation_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_ipic_31__38_Block & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockMapForStackComputation_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ipic_31__38_Block getter_mBlock (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockMapForStackComputation_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @routineCallMap map                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineCallMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineCallMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineCallMap (const GALGAS_routineCallMap & inSource) ;
  public : GALGAS_routineCallMap & operator = (const GALGAS_routineCallMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineCallMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineCallMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_routineCallMap constructor_mapWithMapToOverride (const class GALGAS_routineCallMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_stringset & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_stringset constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCalledRoutineSetForKey (class GALGAS_stringset constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTerminatorStackNeedsForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mCalledRoutineSetForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorStackNeedsForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineCallMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineCallMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineCallMap ;
 
} ; // End of GALGAS_routineCallMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineCallMap : public cGenericAbstractEnumerator {
  public : cEnumerator_routineCallMap (const GALGAS_routineCallMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_stringset current_mCalledRoutineSet (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mTerminatorStackNeeds (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineCallMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@routineCallMap' map                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineCallMap : public cMapElement {
//--- Map attributes
  public : GALGAS_stringset mAttribute_mCalledRoutineSet ;
  public : GALGAS_uint mAttribute_mTerminatorStackNeeds ;

//--- Constructor
  public : cMapElement_routineCallMap (const GALGAS_lstring & inKey,
                                       const GALGAS_stringset & in_mCalledRoutineSet,
                                       const GALGAS_uint & in_mTerminatorStackNeeds
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @routineCallMap_2D_element struct                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineCallMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_stringset mAttribute_mCalledRoutineSet ;
  public : GALGAS_uint mAttribute_mTerminatorStackNeeds ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineCallMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineCallMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineCallMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_stringset & in_mCalledRoutineSet,
                                             const GALGAS_uint & in_mTerminatorStackNeeds) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineCallMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineCallMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_stringset & inOperand1,
                                                                    const class GALGAS_uint & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineCallMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mCalledRoutineSet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminatorStackNeeds (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineCallMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineCallMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @routineStackRequirementMap map                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineStackRequirementMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineStackRequirementMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineStackRequirementMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inSource) ;
  public : GALGAS_routineStackRequirementMap & operator = (const GALGAS_routineStackRequirementMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineStackRequirementMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineStackRequirementMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_routineStackRequirementMap constructor_mapWithMapToOverride (const class GALGAS_routineStackRequirementMap & inOperand0
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

  public : VIRTUAL_IN_DEBUG void setter_setMLevelsForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLevelsForKey (const class GALGAS_string & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineStackRequirementMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineStackRequirementMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineStackRequirementMap ;
 
} ; // End of GALGAS_routineStackRequirementMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineStackRequirementMap : public cGenericAbstractEnumerator {
  public : cEnumerator_routineStackRequirementMap (const GALGAS_routineStackRequirementMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLevels (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineStackRequirementMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Class for element of '@routineStackRequirementMap' map                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineStackRequirementMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mLevels ;

//--- Constructor
  public : cMapElement_routineStackRequirementMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & in_mLevels
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    @routineStackRequirementMap_2D_element struct                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineStackRequirementMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mLevels ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineStackRequirementMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineStackRequirementMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineStackRequirementMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_uint & in_mLevels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineStackRequirementMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineStackRequirementMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_uint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineStackRequirementMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLevels (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineStackRequirementMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @blockDurationMap map                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_blockDurationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockDurationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_blockDurationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_blockDurationMap (const GALGAS_blockDurationMap & inSource) ;
  public : GALGAS_blockDurationMap & operator = (const GALGAS_blockDurationMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockDurationMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_blockDurationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_blockDurationMap constructor_mapWithMapToOverride (const class GALGAS_blockDurationMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMaxDurationForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMinDurationForKey (class GALGAS_uint constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxDurationForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinDurationForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_blockDurationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_blockDurationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_blockDurationMap ;
 
} ; // End of GALGAS_blockDurationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_blockDurationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_blockDurationMap (const GALGAS_blockDurationMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMinDuration (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mMaxDuration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_blockDurationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@blockDurationMap' map                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_blockDurationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mMinDuration ;
  public : GALGAS_uint mAttribute_mMaxDuration ;

//--- Constructor
  public : cMapElement_blockDurationMap (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & in_mMinDuration,
                                         const GALGAS_uint & in_mMaxDuration
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @blockDurationMap_2D_element struct                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_blockDurationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mMinDuration ;
  public : GALGAS_uint mAttribute_mMaxDuration ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_blockDurationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_blockDurationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_blockDurationMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_uint & in_mMinDuration,
                                               const GALGAS_uint & in_mMaxDuration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_blockDurationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_blockDurationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_uint & inOperand1,
                                                                      const class GALGAS_uint & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_blockDurationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxDuration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMinDuration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_blockDurationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_blockDurationMap_2D_element ;


#ifndef piccoloDevice_5F_lexique_CLASS_DEFINED
#define piccoloDevice_5F_lexique_CLASS_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       T O K E N    C L A S S                                                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cTokenFor_piccoloDevice_5F_lexique : public cToken {
  public : utf32 mLexicalAttribute_charValue ;
  public : C_String mLexicalAttribute_identifierString ;
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_piccoloDevice_5F_lexique (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class C_Lexique_piccoloDevice_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_piccoloDevice_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_piccoloDevice_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_integer,
   kToken_string,
   kToken_comment,
   kToken_controller,
   kToken_processor,
   kToken_romsize,
   kToken_eepromsize,
   kToken_bank,
   kToken_unusedregister,
   kToken_mirrorat,
   kToken_ram,
   kToken_register,
   kToken_at,
   kToken_to,
   kToken_configuration,
   kToken_width,
   kToken_description,
   kToken_mask,
   kToken_illegal,
   kToken_message,
   kToken_setting,
   kToken__3C_,
   kToken__3E_,
   kToken__2C_,
   kToken__2D_,
   kToken__2F_,
   kToken__3B_,
   kToken__3A_,
   kToken__5B_,
   kToken__5D_,
   kToken__7B_,
   kToken__7D_} ;

//--- Key words table 'controlKeyWordList'
  public : static int16_t search_into_controlKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lchar synthetizedAttribute_charValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : utf32 attributeValue_charValue (void) const ;
  public : C_String attributeValue_identifierString (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 33 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_piccoloDevice_5F_lexique & inToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

#endif
//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @declaredByteMap map                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_declaredByteMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredByteMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_declaredByteMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_declaredByteMap (const GALGAS_declaredByteMap & inSource) ;
  public : GALGAS_declaredByteMap & operator = (const GALGAS_declaredByteMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredByteMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declaredByteMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_declaredByteMap constructor_mapWithMapToOverride (const class GALGAS_declaredByteMap & inOperand0
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
  public : VIRTUAL_IN_DEBUG class GALGAS_declaredByteMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_declaredByteMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_declaredByteMap ;
 
} ; // End of GALGAS_declaredByteMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_declaredByteMap : public cGenericAbstractEnumerator {
  public : cEnumerator_declaredByteMap (const GALGAS_declaredByteMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declaredByteMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@declaredByteMap' map                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_declaredByteMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_declaredByteMap (const GALGAS_lstring & inKey
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @declaredByteMap_2D_element struct                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_declaredByteMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_declaredByteMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_declaredByteMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declaredByteMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declaredByteMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_declaredByteMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declaredByteMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declaredByteMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declaredByteMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @registerTable_2D_element struct                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uintlist mAttribute_mRegisterAddressList ;
  public : GALGAS_uint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_registerTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_registerTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_registerTable_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_uintlist & in_mRegisterAddressList,
                                            const GALGAS_uint & in_mSize,
                                            const GALGAS_bitSliceTable & in_mBitSliceTable,
                                            const GALGAS_string & in_mBitDefinitionString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_uintlist & inOperand1,
                                                                   const class GALGAS_uint & inOperand2,
                                                                   const class GALGAS_bitSliceTable & inOperand3,
                                                                   const class GALGAS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mRegisterAddressList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @ramBankTable_2D_element struct                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ramBankTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mFirstAddress ;
  public : GALGAS_uint mAttribute_mFirstFreeAddress ;
  public : GALGAS_uint mAttribute_mLastAddressPlusOne ;
  public : GALGAS_uintlist mAttribute_mMirrorOffsetList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ramBankTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ramBankTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ramBankTable_2D_element (const GALGAS_lstring & in_lkey,
                                           const GALGAS_uint & in_mFirstAddress,
                                           const GALGAS_uint & in_mFirstFreeAddress,
                                           const GALGAS_uint & in_mLastAddressPlusOne,
                                           const GALGAS_uintlist & in_mMirrorOffsetList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ramBankTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ramBankTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_uint & inOperand1,
                                                                  const class GALGAS_uint & inOperand2,
                                                                  const class GALGAS_uint & inOperand3,
                                                                  const class GALGAS_uintlist & inOperand4
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ramBankTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFirstFreeAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLastAddressPlusOne (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mMirrorOffsetList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ramBankTable_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @illegalMaskList list                                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_illegalMaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_illegalMaskList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_illegalMaskList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_luint & in_mIllegalValue,
                                                  const class GALGAS_luint & in_mIllegalMask,
                                                  const class GALGAS_lstring & in_mDescription
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_illegalMaskList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_illegalMaskList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_illegalMaskList constructor_listWithValue (const class GALGAS_luint & inOperand0,
                                                                    const class GALGAS_luint & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_illegalMaskList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_luint & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_illegalMaskList add_operation (const GALGAS_illegalMaskList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_luint constinArgument0,
                                                       class GALGAS_luint constinArgument1,
                                                       class GALGAS_lstring constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_luint & outArgument0,
                                                  class GALGAS_luint & outArgument1,
                                                  class GALGAS_lstring & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_luint & outArgument0,
                                                 class GALGAS_luint & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_luint & outArgument0,
                                                       class GALGAS_luint & outArgument1,
                                                       class GALGAS_lstring & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_luint & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_luint & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalMaskAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_illegalMaskList ;
 
} ; // End of GALGAS_illegalMaskList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_illegalMaskList : public cGenericAbstractEnumerator {
  public : cEnumerator_illegalMaskList (const GALGAS_illegalMaskList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_luint current_mIllegalValue (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mIllegalMask (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_illegalMaskList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @illegalMaskList_2D_element struct                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_illegalMaskList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_luint mAttribute_mIllegalValue ;
  public : GALGAS_luint mAttribute_mIllegalMask ;
  public : GALGAS_lstring mAttribute_mDescription ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_illegalMaskList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_illegalMaskList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_illegalMaskList_2D_element (const GALGAS_luint & in_mIllegalValue,
                                              const GALGAS_luint & in_mIllegalMask,
                                              const GALGAS_lstring & in_mDescription) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_illegalMaskList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_illegalMaskList_2D_element constructor_new (const class GALGAS_luint & inOperand0,
                                                                     const class GALGAS_luint & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_illegalMaskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalMask (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mIllegalValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_illegalMaskList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_illegalMaskList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @configRegisterMaskMap map                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_configRegisterMaskMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMaskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_configRegisterMaskMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inSource) ;
  public : GALGAS_configRegisterMaskMap & operator = (const GALGAS_configRegisterMaskMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMaskMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMaskMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_configRegisterMaskMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMaskMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_fieldSettingMap & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   class GALGAS_fieldSettingMap constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDescriptionForKey (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFieldSettingMapForKey (class GALGAS_fieldSettingMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMaskValueForKey (class GALGAS_luint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_fieldSettingMap & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescriptionForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_mFieldSettingMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMaskValueForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_configRegisterMaskMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMaskMap ;
 
} ; // End of GALGAS_configRegisterMaskMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_configRegisterMaskMap : public cGenericAbstractEnumerator {
  public : cEnumerator_configRegisterMaskMap (const GALGAS_configRegisterMaskMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mMaskValue (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mDescription (LOCATION_ARGS) const ;
  public : class GALGAS_fieldSettingMap current_mFieldSettingMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_configRegisterMaskMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  Class for element of '@configRegisterMaskMap' map                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMaskMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mAttribute_mMaskValue ;
  public : GALGAS_lstring mAttribute_mDescription ;
  public : GALGAS_fieldSettingMap mAttribute_mFieldSettingMap ;

//--- Constructor
  public : cMapElement_configRegisterMaskMap (const GALGAS_lstring & inKey,
                                              const GALGAS_luint & in_mMaskValue,
                                              const GALGAS_lstring & in_mDescription,
                                              const GALGAS_fieldSettingMap & in_mFieldSettingMap
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @configRegisterMaskMap_2D_element struct                                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMaskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_luint mAttribute_mMaskValue ;
  public : GALGAS_lstring mAttribute_mDescription ;
  public : GALGAS_fieldSettingMap mAttribute_mFieldSettingMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configRegisterMaskMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_configRegisterMaskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_configRegisterMaskMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_luint & in_mMaskValue,
                                                    const GALGAS_lstring & in_mDescription,
                                                    const GALGAS_fieldSettingMap & in_mFieldSettingMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMaskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMaskMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_luint & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_fieldSettingMap & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configRegisterMaskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDescription (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fieldSettingMap getter_mFieldSettingMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mMaskValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configRegisterMaskMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    Class for element of '@configRegisterMap' map                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_configRegisterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mAttribute_mRegisterAddress ;
  public : GALGAS_luint mAttribute_mRegisterWidth ;
  public : GALGAS_configRegisterMaskMap mAttribute_mConfigRegisterMaskMap ;
  public : GALGAS_illegalMaskList mAttribute_mIllegalMaskList ;

//--- Constructor
  public : cMapElement_configRegisterMap (const GALGAS_lstring & inKey,
                                          const GALGAS_luint & in_mRegisterAddress,
                                          const GALGAS_luint & in_mRegisterWidth,
                                          const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                          const GALGAS_illegalMaskList & in_mIllegalMaskList
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

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @configRegisterMap_2D_element struct                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_configRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_luint mAttribute_mRegisterAddress ;
  public : GALGAS_luint mAttribute_mRegisterWidth ;
  public : GALGAS_configRegisterMaskMap mAttribute_mConfigRegisterMaskMap ;
  public : GALGAS_illegalMaskList mAttribute_mIllegalMaskList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_configRegisterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_configRegisterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_configRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_luint & in_mRegisterAddress,
                                                const GALGAS_luint & in_mRegisterWidth,
                                                const GALGAS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                const GALGAS_illegalMaskList & in_mIllegalMaskList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_luint & inOperand1,
                                                                       const class GALGAS_luint & inOperand2,
                                                                       const class GALGAS_configRegisterMaskMap & inOperand3,
                                                                       const class GALGAS_illegalMaskList & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_configRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap getter_mConfigRegisterMaskMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList getter_mIllegalMaskList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mRegisterWidth (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_configRegisterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   Parser class 'piccoloDevice_syntax' declaration                                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cParser_piccoloDevice_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_piccoloDevice_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_start_5F_symbol_ (class GALGAS_piccoloDeviceModel & outArgument0,
                                                class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccoloDevice_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_ (GALGAS_piccoloDeviceModel & outArgument0,
                                                                     C_Lexique_piccoloDevice_5F_lexique * inLexique) ;

  protected : void rule_piccoloDevice_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccoloDevice_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_piccoloDevice_5F_syntax_0 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_1 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_2 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_3 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_4 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_5 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_6 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_7 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_8 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_9 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_10 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_11 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_12 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_13 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_14 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;

  protected : virtual int32_t select_piccoloDevice_5F_syntax_15 (C_Lexique_piccoloDevice_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR baseline_include_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_baseline_5F_include_5F_grammar : public cParser_baseline_5F_syntax,
                                                public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_expression_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_factor_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_condition_5F_term_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                           C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_instruction_5F_list_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                             GALGAS_labelMap & ioArgument1,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_routine_5F_definition_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_simple_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                         GALGAS_baseline_5F_instruction & outArgument1,
                                                                         GALGAS_labelMap & ioArgument2,
                                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_baseline_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_baseline_5F_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_baseline_5F_structured_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                   GALGAS_labelMap & ioArgument1,
                                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public : virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_bit_5F_number_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public : virtual void nt_configuration_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_configuration_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public : virtual void nt_constant_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_constant_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_in_5F_ram_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_5F_in_5F_ram_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_bitwise_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_bitwise_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_bitwise_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_bitwise_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                          C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_primary_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_primary_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public : virtual void nt_immediate_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_immediate_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public : virtual void nt_ram_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_ram_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                               C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public : virtual void nt_register_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_register_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public : virtual void nt_section_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_section_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_section_5F_list_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                             GALGAS_lstringlist & ioArgument1,
                                             GALGAS_ramDefinitionList & ioArgument2,
                                             GALGAS_lstringlist & ioArgument3,
                                             GALGAS_configDefinitionList & ioArgument4,
                                             GALGAS_constantDefinitionList & ioArgument5,
                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                   GALGAS_lstringlist & ioArgument1,
                                                   GALGAS_ramDefinitionList & ioArgument2,
                                                   GALGAS_lstringlist & ioArgument3,
                                                   GALGAS_configDefinitionList & ioArgument4,
                                                   GALGAS_constantDefinitionList & ioArgument5
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                     GALGAS_lstringlist & ioArgument1,
                                                     GALGAS_ramDefinitionList & ioArgument2,
                                                     GALGAS_lstringlist & ioArgument3,
                                                     GALGAS_configDefinitionList & ioArgument4,
                                                     GALGAS_constantDefinitionList & ioArgument5
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

  public : virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_communs_19 (C_Lexique_piccolo_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
#endif
