#ifndef all_2D_declarations_2D__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @midrange_intermediate_instructionList list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_intermediate_5F_instructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_intermediate_5F_instructionList constructor_listWithValue (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_instructionList operator_concat (const GALGAS_midrange_5F_intermediate_5F_instructionList & inOperand
                                                                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_intermediate_5F_instructionList add_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMInstructionAtIndex (class GALGAS_midrange_5F_intermediate_5F_instruction constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_midrange_5F_intermediate_5F_instruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instruction reader_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instructionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instructionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_intermediate_5F_instructionList ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_intermediate_5F_instructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_midrange_5F_intermediate_5F_instruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_5F_intermediate_5F_instruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_midrange_5F_intermediate_5F_instruction (void) ;

//---
  public : inline const class cPtr_midrange_5F_intermediate_5F_instruction * ptr (void) const { return (const cPtr_midrange_5F_intermediate_5F_instruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_intermediate_5F_instruction (const cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instruction extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_intermediate_instruction class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_intermediate_5F_instruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @midrange_5F_intermediate_5F_instructionList_2D_element struct                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_midrange_5F_intermediate_5F_instruction mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element (const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element constructor_new (const class GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_intermediate_5F_instruction reader_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_5F_call_5F_goto_5F_bit enum                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_call_5F_goto_5F_bit : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_call_5F_goto_5F_bit (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_set,
    kEnum_clear,
    kEnum_noChange
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
  public : static GALGAS_midrange_5F_call_5F_goto_5F_bit extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_clear (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_noChange (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_call_5F_goto_5F_bit constructor_set (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_call_5F_goto_5F_bit & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isClear (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNoChange (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_call_5F_goto_5F_bit class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_call_5F_goto_5F_bit ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_symbolTableForConvertingRelatives map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_symbolTableForConvertingRelatives ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_midrange_5F_symbolTableForConvertingRelatives_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_symbolTableForConvertingRelatives : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives & operator = (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTableForConvertingRelatives & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTableForConvertingRelatives reader_overriddenMap (C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTableForConvertingRelatives * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                           const GALGAS_string & inKey
                                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTableForConvertingRelatives ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_symbolTableForConvertingRelatives : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_midrange_5F_symbolTableForConvertingRelatives & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@midrange_symbolTableForConvertingRelatives' map                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_symbolTableForConvertingRelatives : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mRoutineAddress ;

//--- Constructor
  public : cMapElement_midrange_5F_symbolTableForConvertingRelatives (const GALGAS_lstring & inKey,
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
//                          @midrange_5F_symbolTableForConvertingRelatives_2D_element struct                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mRoutineAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element (const GALGAS_lstring & in_lkey,
                                                                            const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                   const class GALGAS_uint & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRoutineAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @midrange_symbolTable map                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_symbolTable ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_midrange_5F_symbolTable_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_symbolTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inSource) ;
  public : GALGAS_midrange_5F_symbolTable & operator = (const GALGAS_midrange_5F_symbolTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTable extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_symbolTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_symbolTable constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_symbolTable & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRoutineAddressForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRoutineAddressForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_symbolTable reader_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_symbolTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_symbolTable ;
 
} ; // End of GALGAS_midrange_5F_symbolTable class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_symbolTable : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_symbolTable (const GALGAS_midrange_5F_symbolTable & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRoutineAddress (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_symbolTable_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@midrange_symbolTable' map                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_symbolTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mRoutineAddress ;

//--- Constructor
  public : cMapElement_midrange_5F_symbolTable (const GALGAS_lstring & inKey,
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
//                                     @midrange_5F_symbolTable_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_symbolTable_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mRoutineAddress ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_symbolTable_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_symbolTable_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_symbolTable_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_uint & in_mRoutineAddress) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_symbolTable_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_symbolTable_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_symbolTable_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mRoutineAddress (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_symbolTable_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @midrange_declaredRoutineMap map                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_declaredRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_midrange_5F_declaredRoutineMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_declaredRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_declaredRoutineMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;
  public : GALGAS_midrange_5F_declaredRoutineMap & operator = (const GALGAS_midrange_5F_declaredRoutineMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_declaredRoutineMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_declaredRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_declaredRoutineMap constructor_mapWithMapToOverride (const class GALGAS_midrange_5F_declaredRoutineMap & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_declaredRoutineMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_midrange_5F_declaredRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_declaredRoutineMap ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_declaredRoutineMap : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_declaredRoutineMap (const GALGAS_midrange_5F_declaredRoutineMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_declaredRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@midrange_declaredRoutineMap' map                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_midrange_5F_declaredRoutineMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_midrange_5F_declaredRoutineMap (const GALGAS_lstring & inKey
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
//                                  @midrange_5F_declaredRoutineMap_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_declaredRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_declaredRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_declaredRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_declaredRoutineMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_declaredRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_declaredRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_declaredRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_declaredRoutineMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bootloaderReservedRAMmap map                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bootloaderReservedRAMmap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_bootloaderReservedRAMmap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootloaderReservedRAMmap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_bootloaderReservedRAMmap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inSource) ;
  public : GALGAS_bootloaderReservedRAMmap & operator = (const GALGAS_bootloaderReservedRAMmap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootloaderReservedRAMmap extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bootloaderReservedRAMmap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_bootloaderReservedRAMmap constructor_mapWithMapToOverride (const class GALGAS_bootloaderReservedRAMmap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_luint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMReservedSizeForKey (class GALGAS_luint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReservedSizeForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bootloaderReservedRAMmap reader_overriddenMap (C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_bootloaderReservedRAMmap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & inKey
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_bootloaderReservedRAMmap ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_bootloaderReservedRAMmap : public cGenericAbstractEnumerator {
  public : cEnumerator_bootloaderReservedRAMmap (const GALGAS_bootloaderReservedRAMmap & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReservedSize (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_bootloaderReservedRAMmap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@bootloaderReservedRAMmap' map                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_bootloaderReservedRAMmap : public cMapElement {
//--- Map attributes
  public : GALGAS_luint mAttribute_mReservedSize ;

//--- Constructor
  public : cMapElement_bootloaderReservedRAMmap (const GALGAS_lstring & inKey,
                                                 const GALGAS_luint & in_mReservedSize
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
//                                     @bootloaderReservedRAMmap_2D_element struct                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bootloaderReservedRAMmap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_luint mAttribute_mReservedSize ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bootloaderReservedRAMmap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bootloaderReservedRAMmap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bootloaderReservedRAMmap_2D_element (const GALGAS_lstring & in_lkey,
                                                       const GALGAS_luint & in_mReservedSize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bootloaderReservedRAMmap_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bootloaderReservedRAMmap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_luint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bootloaderReservedRAMmap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReservedSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bootloaderReservedRAMmap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18InstructionList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_InstructionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InstructionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_InstructionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InstructionList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_InstructionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionList constructor_listWithValue (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_InstructionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList operator_concat (const GALGAS_pic_31__38_InstructionList & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList add_operation (const GALGAS_pic_31__38_InstructionList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_pic_31__38_PiccoloInstruction constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloInstruction reader_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_InstructionList ;
 
} ; // End of GALGAS_pic_31__38_InstructionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_InstructionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_InstructionList (const GALGAS_pic_31__38_InstructionList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_pic_31__38_PiccoloInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_InstructionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_PiccoloInstruction class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_PiccoloInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_PiccoloInstruction (void) ;

//---
  public : inline const class cPtr_pic_31__38_PiccoloInstruction * ptr (void) const { return (const cPtr_pic_31__38_PiccoloInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_PiccoloInstruction (const cPtr_pic_31__38_PiccoloInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_PiccoloInstruction extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_PiccoloInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18PiccoloInstruction class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_PiccoloInstruction : public acPtr_class {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_PiccoloInstruction (const GALGAS_location & in_mInstructionLocation
                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mInstructionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_InstructionList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_InstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_pic_31__38_PiccoloInstruction mAttribute_mInstruction ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_InstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_InstructionList_2D_element (const GALGAS_pic_31__38_PiccoloInstruction & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_InstructionList_2D_element constructor_new (const class GALGAS_pic_31__38_PiccoloInstruction & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_InstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloInstruction reader_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_InstructionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18BlockInstructionBlockList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_BlockInstructionBlockList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_BlockInstructionBlockList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mBlockName,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const class GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                  const class GALGAS_location & in_mEndOfBlock
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BlockInstructionBlockList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_BlockInstructionBlockList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_BlockInstructionBlockList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                         const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                         const class GALGAS_location & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_BlockInstructionBlockList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                      const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList operator_concat (const GALGAS_pic_31__38_BlockInstructionBlockList & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList add_operation (const GALGAS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                         class GALGAS_abstractBlockTerminationForBlockInstruction constinArgument2,
                                                         class GALGAS_location constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                    class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                    class GALGAS_location & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                   class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                         class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                                         class GALGAS_location & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_pic_31__38_InstructionList & outArgument1,
                                               class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBlockNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction reader_mBlockTerminaisonForBlockInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfBlockAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_BlockInstructionBlockList ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_BlockInstructionBlockList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_BlockInstructionBlockList (const GALGAS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mBlockName (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBlockTerminationForBlockInstruction current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfBlock (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @abstractBlockTerminationForBlockInstruction class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractBlockTerminationForBlockInstruction : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractBlockTerminationForBlockInstruction (void) ;

//---
  public : inline const class cPtr_abstractBlockTerminationForBlockInstruction * ptr (void) const { return (const cPtr_abstractBlockTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractBlockTerminationForBlockInstruction (const cPtr_abstractBlockTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractBlockTerminationForBlockInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @abstractBlockTerminationForBlockInstruction class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractBlockTerminationForBlockInstruction : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractBlockTerminationForBlockInstruction (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @pic_31__38_BlockInstructionBlockList_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_BlockInstructionBlockList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mBlockName ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mBlockTerminaisonForBlockInstruction ;
  public : GALGAS_location mAttribute_mEndOfBlock ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_BlockInstructionBlockList_2D_element (const GALGAS_lstring & in_mBlockName,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GALGAS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                   const GALGAS_location & in_mEndOfBlock) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BlockInstructionBlockList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_BlockInstructionBlockList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                          const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                          const class GALGAS_location & inOperand3
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BlockInstructionBlockList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mBlockName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction reader_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfBlock (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BlockInstructionBlockList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @pic18CaseExpressionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_CaseExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_CaseExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_CaseExpressionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_CaseExpressionList extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_CaseExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_CaseExpressionList constructor_listWithValue (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_CaseExpressionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_CaseExpressionList operator_concat (const GALGAS_pic_31__38_CaseExpressionList & inOperand
                                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_CaseExpressionList add_operation (const GALGAS_pic_31__38_CaseExpressionList & inOperand,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_pic_31__38_AbstractCaseItem constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_AbstractCaseItem & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_AbstractCaseItem reader_mCaseItemAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_CaseExpressionList ;
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_CaseExpressionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_CaseExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic_31__38_AbstractCaseItem class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_AbstractCaseItem : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_AbstractCaseItem (void) ;

//---
  public : inline const class cPtr_pic_31__38_AbstractCaseItem * ptr (void) const { return (const cPtr_pic_31__38_AbstractCaseItem *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_AbstractCaseItem (const cPtr_pic_31__38_AbstractCaseItem * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AbstractCaseItem extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AbstractCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AbstractCaseItem class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18AbstractCaseItem class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_AbstractCaseItem : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_AbstractCaseItem (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @pic_31__38_CaseExpressionList_2D_element struct                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_CaseExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_pic_31__38_AbstractCaseItem mAttribute_mCaseItem ;


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
  public : static GALGAS_pic_31__38_CaseExpressionList_2D_element constructor_new (const class GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_AbstractCaseItem reader_mCaseItem (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_CaseExpressionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic18SwitchInstructionCaseList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_SwitchInstructionCaseList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_SwitchInstructionCaseList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_location & in_mStartOfCase,
                                                  const class GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_SwitchInstructionCaseList extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_SwitchInstructionCaseList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_SwitchInstructionCaseList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList operator_concat (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand
                                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList add_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_location constinArgument0,
                                                         class GALGAS_pic_31__38_CaseExpressionList constinArgument1,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_location & outArgument0,
                                                    class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_location & outArgument0,
                                                   class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_location & outArgument0,
                                                         class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                               class GALGAS_pic_31__38_InstructionList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList reader_mCaseExpressionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mStartOfCaseAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_SwitchInstructionCaseList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @pic_31__38_SwitchInstructionCaseList_2D_element struct                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_location mAttribute_mStartOfCase ;
  public : GALGAS_pic_31__38_CaseExpressionList mAttribute_mCaseExpressionList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;


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
  public : static GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                                          const class GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_CaseExpressionList reader_mCaseExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mStartOfCase (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST enum                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_ADDWF,
    kEnum_ADDWFC,
    kEnum_ANDWF,
    kEnum_COMF,
    kEnum_DECF,
    kEnum_INCF,
    kEnum_IORWF,
    kEnum_MOVF,
    kEnum_RLCF,
    kEnum_RLNCF,
    kEnum_RRCF,
    kEnum_RRNCF,
    kEnum_SUBFWB,
    kEnum_SUBWF,
    kEnum_SUBWFB,
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
  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ADDWFC (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_ANDWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_COMF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_DECF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_INCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_IORWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_MOVF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RLNCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_RRNCF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBFWB (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SUBWFB (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_SWAPF (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST constructor_XORWF (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isADDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isADDWFC (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isANDWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCOMF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDECF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isINCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIORWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMOVF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRLCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRLNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRRCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRRNCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBFWB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBWFB (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSWAPF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isXORWF (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @FA_5F_instruction_5F_base_5F_code enum                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_FA_5F_instruction_5F_base_5F_code : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_FA_5F_instruction_5F_base_5F_code (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CLRF,
    kEnum_CPFSEQ,
    kEnum_CPFSGT,
    kEnum_CPFSLT,
    kEnum_MOVWF,
    kEnum_MULWF,
    kEnum_NEGF,
    kEnum_SETF,
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
  public : static GALGAS_FA_5F_instruction_5F_base_5F_code extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CLRF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSEQ (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSGT (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_CPFSLT (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MOVWF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_MULWF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_NEGF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_SETF (LOCATION_ARGS) ;

  public : static GALGAS_FA_5F_instruction_5F_base_5F_code constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCLRF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSEQ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSGT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSLT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMOVWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMULWF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNEGF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSETF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_FA_5F_instruction_5F_base_5F_code class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_instruction_5F_base_5F_code ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @bit_5F_oriented_5F_op enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bit_5F_oriented_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_bit_5F_oriented_5F_op (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_BCF,
    kEnum_BSF,
    kEnum_BTG
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
  public : static GALGAS_bit_5F_oriented_5F_op extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bit_5F_oriented_5F_op constructor_BCF (LOCATION_ARGS) ;

  public : static GALGAS_bit_5F_oriented_5F_op constructor_BSF (LOCATION_ARGS) ;

  public : static GALGAS_bit_5F_oriented_5F_op constructor_BTG (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bit_5F_oriented_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBCF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBSF (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBTG (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bit_5F_oriented_5F_op class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @conditional_5F_branch enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_conditional_5F_branch : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_conditional_5F_branch (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_bz,
    kEnum_bnz,
    kEnum_bn,
    kEnum_bnn,
    kEnum_bc,
    kEnum_bnc,
    kEnum_bov,
    kEnum_bnov
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
  public : static GALGAS_conditional_5F_branch extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_conditional_5F_branch constructor_bc (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bn (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bnc (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bnn (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bnov (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bnz (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bov (LOCATION_ARGS) ;

  public : static GALGAS_conditional_5F_branch constructor_bz (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_conditional_5F_branch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBnc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBnn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBnov (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBnz (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBov (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBz (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_conditional_5F_branch class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditional_5F_branch ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @jumpInstructionKind enum                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_jumpInstructionKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_jumpInstructionKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_ipicRelative,
    kEnum_relative,
    kEnum_absolute
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
  public : static GALGAS_jumpInstructionKind extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_jumpInstructionKind constructor_absolute (LOCATION_ARGS) ;

  public : static GALGAS_jumpInstructionKind constructor_ipicRelative (LOCATION_ARGS) ;

  public : static GALGAS_jumpInstructionKind constructor_relative (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_jumpInstructionKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isAbsolute (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIpicRelative (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRelative (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_jumpInstructionKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_jumpInstructionKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_InstructionWithNoOperandKind enum                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_InstructionWithNoOperandKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InstructionWithNoOperandKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_CLRWDT,
    kEnum_DAW,
    kEnum_NOP,
    kEnum_POP,
    kEnum_PUSH,
    kEnum_RESET,
    kEnum_SLEEP
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
  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_CLRWDT (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_DAW (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_NOP (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_POP (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_PUSH (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_RESET (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InstructionWithNoOperandKind constructor_SLEEP (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCLRWDT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isDAW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNOP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPOP (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPUSH (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRESET (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSLEEP (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_InstructionWithNoOperandKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @literal_5F_instruction_5F_opcode enum                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_literal_5F_instruction_5F_opcode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_literal_5F_instruction_5F_opcode (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_ADDLW,
    kEnum_ANDLW,
    kEnum_IORLW,
    kEnum_MOVLW,
    kEnum_MULLW,
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
  public : static GALGAS_literal_5F_instruction_5F_opcode extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_ADDLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_ANDLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_IORLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_MOVLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_MULLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_SUBLW (LOCATION_ARGS) ;

  public : static GALGAS_literal_5F_instruction_5F_opcode constructor_XORLW (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literal_5F_instruction_5F_opcode & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isADDLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isANDLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isIORLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMOVLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMULLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSUBLW (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isXORLW (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literal_5F_instruction_5F_opcode class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @tableAccessOption enum                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_tableAccessOption : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_tableAccessOption (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_simpleAccess,
    kEnum_postIncrement,
    kEnum_postDecrement,
    kEnum_preIncrement
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
  public : static GALGAS_tableAccessOption extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_tableAccessOption constructor_postDecrement (LOCATION_ARGS) ;

  public : static GALGAS_tableAccessOption constructor_postIncrement (LOCATION_ARGS) ;

  public : static GALGAS_tableAccessOption constructor_preIncrement (LOCATION_ARGS) ;

  public : static GALGAS_tableAccessOption constructor_simpleAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableAccessOption & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPostDecrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPostIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPreIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isSimpleAccess (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableAccessOption class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableAccessOption ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @if_5F_semi_5F_colon_5F_op enum                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_if_5F_semi_5F_colon_5F_op : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_if_5F_semi_5F_colon_5F_op (void) ;

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
  public : static GALGAS_if_5F_semi_5F_colon_5F_op extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_if_5F_semi_5F_colon_5F_op constructor_CPFSEQ (LOCATION_ARGS) ;

  public : static GALGAS_if_5F_semi_5F_colon_5F_op constructor_CPFSGT (LOCATION_ARGS) ;

  public : static GALGAS_if_5F_semi_5F_colon_5F_op constructor_CPFSLT (LOCATION_ARGS) ;

  public : static GALGAS_if_5F_semi_5F_colon_5F_op constructor_TSTFSZ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_if_5F_semi_5F_colon_5F_op & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSEQ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSGT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isCPFSLT (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isTSTFSZ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_if_5F_semi_5F_colon_5F_op class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic_31__38_RegisterComparison enum                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RegisterComparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_RegisterComparison (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_notEqual,
    kEnum_equal,
    kEnum_greaterOrEqual,
    kEnum_greater,
    kEnum_lowerOrEqual,
    kEnum_lower
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
  public : static GALGAS_pic_31__38_RegisterComparison extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RegisterComparison constructor_equal (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RegisterComparison constructor_greater (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RegisterComparison constructor_greaterOrEqual (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RegisterComparison constructor_lower (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RegisterComparison constructor_lowerOrEqual (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RegisterComparison constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGreater (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isGreaterOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLower (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isLowerOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparison class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparison ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @pic18DoWhilePartList list                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_DoWhilePartList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_DoWhilePartList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_DoWhilePartList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfPartLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_DoWhilePartList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_DoWhilePartList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_DoWhilePartList constructor_listWithValue (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                               const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_DoWhilePartList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                      const class GALGAS_location & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList operator_concat (const GALGAS_pic_31__38_DoWhilePartList & inOperand
                                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList add_operation (const GALGAS_pic_31__38_DoWhilePartList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_pic_31__38_ConditionExpression constinArgument0,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument1,
                                                         class GALGAS_location constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                    class GALGAS_location & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                   class GALGAS_location & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument1,
                                                         class GALGAS_location & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                               class GALGAS_pic_31__38_InstructionList & outArgument1,
                                               class GALGAS_location & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              class GALGAS_pic_31__38_InstructionList & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mConditionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfPartLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_DoWhilePartList ;
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_DoWhilePartList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_DoWhilePartList (const GALGAS_pic_31__38_DoWhilePartList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_pic_31__38_ConditionExpression current_mCondition (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfPartLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_DoWhilePartList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_ConditionExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_ConditionExpression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_pic_31__38_ConditionExpression (void) ;

//---
  public : inline const class cPtr_pic_31__38_ConditionExpression * ptr (void) const { return (const cPtr_pic_31__38_ConditionExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_ConditionExpression (const cPtr_pic_31__38_ConditionExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_ConditionExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_ConditionExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_ConditionExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18ConditionExpression class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_ConditionExpression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_ConditionExpression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_DoWhilePartList_2D_element struct                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_DoWhilePartList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mCondition ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfPartLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_DoWhilePartList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_DoWhilePartList_2D_element (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GALGAS_location & in_mEndOfPartLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_DoWhilePartList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_DoWhilePartList_2D_element constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_DoWhilePartList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfPartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_DoWhilePartList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic18InterruptDefinitionList list                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_InterruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InterruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_InterruptDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mInterruptName,
                                                  const class GALGAS_bool & in_mFastReturn,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfInterruptLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InterruptDefinitionList extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_InterruptDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_InterruptDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_bool & inOperand1,
                                                                                       const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                       const class GALGAS_location & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_InterruptDefinitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                      const class GALGAS_location & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InterruptDefinitionList operator_concat (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand
                                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InterruptDefinitionList add_operation (const GALGAS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_bool constinArgument1,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                         class GALGAS_location constinArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_bool & outArgument1,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                    class GALGAS_location & outArgument3,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                   class GALGAS_location & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                         class GALGAS_location & outArgument3,
                                                         class GALGAS_uint constinArgument4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_pic_31__38_InstructionList & outArgument2,
                                               class GALGAS_location & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mFastReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInterruptNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_InterruptDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_InterruptDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_InterruptDefinitionList (const GALGAS_pic_31__38_InterruptDefinitionList & inEnumeratedObject,
                                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mFastReturn (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_InterruptDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @pic_31__38_InterruptDefinitionList_2D_element struct                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_InterruptDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mInterruptName ;
  public : GALGAS_bool mAttribute_mFastReturn ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInterruptLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_InterruptDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_InterruptDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_InterruptDefinitionList_2D_element (const GALGAS_lstring & in_mInterruptName,
                                                                 const GALGAS_bool & in_mFastReturn,
                                                                 const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                                 const GALGAS_location & in_mEndOfInterruptLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_InterruptDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_InterruptDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_bool & inOperand1,
                                                                                        const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                        const class GALGAS_location & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_InterruptDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInterruptLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mFastReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mInterruptName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_InterruptDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic18RoutineDefinitionList list                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RoutineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_RoutineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_RoutineDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_RoutineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RoutineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_RoutineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_luint & inOperand1,
                                                                                     const class GALGAS_luint & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                     const class GALGAS_location & inOperand6
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_RoutineDefinitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                      const class GALGAS_location & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_RoutineDefinitionList operator_concat (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand
                                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_RoutineDefinitionList add_operation (const GALGAS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_luint constinArgument1,
                                                         class GALGAS_luint constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument5,
                                                         class GALGAS_location constinArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_luint & outArgument1,
                                                    class GALGAS_luint & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                    class GALGAS_location & outArgument6,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                   class GALGAS_location & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_luint & outArgument1,
                                                         class GALGAS_luint & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument5,
                                                         class GALGAS_location & outArgument6,
                                                         class GALGAS_uint constinArgument7,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_luint & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               class GALGAS_pic_31__38_InstructionList & outArgument5,
                                               class GALGAS_location & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_RoutineDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_RoutineDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_RoutineDefinitionList (const GALGAS_pic_31__38_RoutineDefinitionList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_RoutineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @pic_31__38_RoutineDefinitionList_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RoutineDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_luint mAttribute_mRequiredBank ;
  public : GALGAS_luint mAttribute_mReturnedBank ;
  public : GALGAS_bool mAttribute_mPreservesBank ;
  public : GALGAS_bool mAttribute_mIsNoReturn ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRoutineLocation ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_RoutineDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_RoutineDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_RoutineDefinitionList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                               const GALGAS_luint & in_mRequiredBank,
                                                               const GALGAS_luint & in_mReturnedBank,
                                                               const GALGAS_bool & in_mPreservesBank,
                                                               const GALGAS_bool & in_mIsNoReturn,
                                                               const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GALGAS_location & in_mEndOfRoutineLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_RoutineDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RoutineDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_luint & inOperand1,
                                                                                      const class GALGAS_luint & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3,
                                                                                      const class GALGAS_bool & inOperand4,
                                                                                      const class GALGAS_pic_31__38_InstructionList & inOperand5,
                                                                                      const class GALGAS_location & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_RoutineDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRoutineLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRequiredBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReturnedBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RoutineDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic18MacroDefinitionList list                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_MacroDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_MacroDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_pic_31__38_MacroDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mMacroName,
                                                  const class GALGAS_lstringlist & in_mConstantNameList,
                                                  const class GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_MacroDefinitionList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_MacroDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_MacroDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstringlist & inOperand1,
                                                                                   const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_pic_31__38_MacroDefinitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_MacroDefinitionList operator_concat (const GALGAS_pic_31__38_MacroDefinitionList & inOperand
                                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_MacroDefinitionList add_operation (const GALGAS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_lstringlist constinArgument1,
                                                         class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstringlist & outArgument1,
                                                    class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                         class GALGAS_uint constinArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               class GALGAS_pic_31__38_InstructionList & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_pic_31__38_InstructionList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mConstantNameListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMacroNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_MacroDefinitionList ;
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_MacroDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_MacroDefinitionList (const GALGAS_pic_31__38_MacroDefinitionList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mMacroName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_MacroDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @pic_31__38_MacroDefinitionList_2D_element struct                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_MacroDefinitionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mMacroName ;
  public : GALGAS_lstringlist mAttribute_mConstantNameList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_MacroDefinitionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_MacroDefinitionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_MacroDefinitionList_2D_element (const GALGAS_lstring & in_mMacroName,
                                                             const GALGAS_lstringlist & in_mConstantNameList,
                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_MacroDefinitionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_MacroDefinitionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstringlist & inOperand1,
                                                                                    const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_MacroDefinitionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMacroName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_MacroDefinitionList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @pic18MacroMap map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_pic_31__38_MacroMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_pic_31__38_MacroMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_MacroMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_MacroMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inSource) ;
  public : GALGAS_pic_31__38_MacroMap & operator = (const GALGAS_pic_31__38_MacroMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_MacroMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_MacroMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_pic_31__38_MacroMap constructor_mapWithMapToOverride (const class GALGAS_pic_31__38_MacroMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1,
                                                      const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_lstringlist constinArgument1,
                                                     class GALGAS_pic_31__38_InstructionList constinArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMConstantNameListForKey (class GALGAS_lstringlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMInstructionListForKey (class GALGAS_pic_31__38_InstructionList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   class GALGAS_pic_31__38_InstructionList & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mConstantNameListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionListForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_pic_31__38_MacroMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_pic_31__38_MacroMap ;
 
} ; // End of GALGAS_pic_31__38_MacroMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_pic_31__38_MacroMap : public cGenericAbstractEnumerator {
  public : cEnumerator_pic_31__38_MacroMap (const GALGAS_pic_31__38_MacroMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mConstantNameList (LOCATION_ARGS) const ;
  public : class GALGAS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_pic_31__38_MacroMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@pic18MacroMap' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_pic_31__38_MacroMap : public cMapElement {
//--- Map attributes
  public : GALGAS_lstringlist mAttribute_mConstantNameList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;

//--- Constructor
  public : cMapElement_pic_31__38_MacroMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstringlist & in_mConstantNameList,
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_MacroMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_MacroMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_lstringlist mAttribute_mConstantNameList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_MacroMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_MacroMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_MacroMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_lstringlist & in_mConstantNameList,
                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_MacroMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_MacroMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                         const class GALGAS_pic_31__38_InstructionList & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_MacroMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mConstantNameList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_MacroMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @routineDeclarationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_luint & in_mRequiredBank,
                                                  const class GALGAS_luint & in_mReturnedBank,
                                                  const class GALGAS_bool & in_mPreservesBank,
                                                  const class GALGAS_bool & in_mIsNoReturn
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineDeclarationList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_routineDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_luint & inOperand1,
                                                                           const class GALGAS_luint & inOperand2,
                                                                           const class GALGAS_bool & inOperand3,
                                                                           const class GALGAS_bool & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_routineDeclarationList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_bool & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineDeclarationList operator_concat (const GALGAS_routineDeclarationList & inOperand
                                                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineDeclarationList add_operation (const GALGAS_routineDeclarationList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_luint constinArgument1,
                                                         class GALGAS_luint constinArgument2,
                                                         class GALGAS_bool constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_luint & outArgument1,
                                                    class GALGAS_luint & outArgument2,
                                                    class GALGAS_bool & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_luint & outArgument1,
                                                         class GALGAS_luint & outArgument2,
                                                         class GALGAS_bool & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_luint & outArgument2,
                                               class GALGAS_bool & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRequiredBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReturnedBankAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineDeclarationList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineDeclarationList ;
 
} ; // End of GALGAS_routineDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_routineDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_routineDeclarationList (const GALGAS_routineDeclarationList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @routineDeclarationList_2D_element struct                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_routineDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_luint mAttribute_mRequiredBank ;
  public : GALGAS_luint mAttribute_mReturnedBank ;
  public : GALGAS_bool mAttribute_mPreservesBank ;
  public : GALGAS_bool mAttribute_mIsNoReturn ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routineDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_routineDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineDeclarationList_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                     const GALGAS_luint & in_mRequiredBank,
                                                     const GALGAS_luint & in_mReturnedBank,
                                                     const GALGAS_bool & in_mPreservesBank,
                                                     const GALGAS_bool & in_mIsNoReturn) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_routineDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_luint & inOperand1,
                                                                            const class GALGAS_luint & inOperand2,
                                                                            const class GALGAS_bool & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsNoReturn (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mPreservesBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRequiredBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mReturnedBank (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @programKind enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_programKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_programKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_regularProgram,
    kEnum_bootloaderProgram,
    kEnum_userProgram
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
  public : static GALGAS_programKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_programKind constructor_bootloaderProgram (LOCATION_ARGS) ;

  public : static GALGAS_programKind constructor_regularProgram (LOCATION_ARGS) ;

  public : static GALGAS_programKind constructor_userProgram (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_programKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBootloaderProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isRegularProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isUserProgram (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_programKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @dataList list                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_dataList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_dataList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mDataName,
                                                  const class GALGAS_immediatExpressionList & in_mValueList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataList extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dataList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_dataList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_immediatExpressionList & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_dataList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_immediatExpressionList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_dataList operator_concat (const GALGAS_dataList & inOperand
                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_dataList add_operation (const GALGAS_dataList & inOperand,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_immediatExpressionList constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_immediatExpressionList & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_immediatExpressionList & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_immediatExpressionList & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_immediatExpressionList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_immediatExpressionList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDataNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList reader_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_dataList ;
 
} ; // End of GALGAS_dataList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_dataList : public cGenericAbstractEnumerator {
  public : cEnumerator_dataList (const GALGAS_dataList & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mDataName (LOCATION_ARGS) const ;
  public : class GALGAS_immediatExpressionList current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_dataList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @dataList_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mDataName ;
  public : GALGAS_immediatExpressionList mAttribute_mValueList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dataList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_dataList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_dataList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_dataList_2D_element (const GALGAS_lstring & in_mDataName,
                                       const GALGAS_immediatExpressionList & in_mValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataList_2D_element extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dataList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_immediatExpressionList & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dataList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDataName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList reader_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dataList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @checkpicList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_checkpicList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_checkpicList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_checkpicList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_location & in_mErrorLocation,
                                                  const class GALGAS_lstringlist & in_mValueList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkpicList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_checkpicList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_checkpicList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_lstringlist & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_checkpicList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_checkpicList operator_concat (const GALGAS_checkpicList & inOperand
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_checkpicList add_operation (const GALGAS_checkpicList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_location constinArgument0,
                                                         class GALGAS_lstringlist constinArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_location & outArgument0,
                                                    class GALGAS_lstringlist & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_location & outArgument0,
                                                   class GALGAS_lstringlist & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_location & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_uint constinArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_checkpicList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_checkpicList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_checkpicList ;
 
} ; // End of GALGAS_checkpicList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_checkpicList : public cGenericAbstractEnumerator {
  public : cEnumerator_checkpicList (const GALGAS_checkpicList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_checkpicList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @checkpicList_2D_element struct                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_checkpicList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_location mAttribute_mErrorLocation ;
  public : GALGAS_lstringlist mAttribute_mValueList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_checkpicList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_checkpicList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_checkpicList_2D_element (const GALGAS_location & in_mErrorLocation,
                                           const GALGAS_lstringlist & in_mValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkpicList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_checkpicList_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_checkpicList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mValueList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkpicList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkpicList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @dataMap map                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_dataMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_dataMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_dataMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_dataMap (const GALGAS_dataMap & inSource) ;
  public : GALGAS_dataMap & operator = (const GALGAS_dataMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dataMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_dataMap constructor_mapWithMapToOverride (const class GALGAS_dataMap & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMDataSizeForKey (class GALGAS_uint constinArgument0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDataSizeForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataMap reader_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_dataMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_dataMap ;
 
} ; // End of GALGAS_dataMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_dataMap : public cGenericAbstractEnumerator {
  public : cEnumerator_dataMap (const GALGAS_dataMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mDataSize (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_dataMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Class for element of '@dataMap' map                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_dataMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mDataSize ;

//--- Constructor
  public : cMapElement_dataMap (const GALGAS_lstring & inKey,
                                const GALGAS_uint & in_mDataSize
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
//                                             @dataMap_2D_element struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dataMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mDataSize ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dataMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_dataMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_dataMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_dataMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_uint & in_mDataSize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dataMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dataMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_uint & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dataMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDataSize (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dataMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dataMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Parser class 'pic18_syntax' declaration                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_block_5F_termination_ (class GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_block_5F_termination_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_block_5F_termination_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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

  protected : virtual void nt_body_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_checkpic_5F_definition_ (class GALGAS_checkpicList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_checkpic_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_checkpic_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_expression_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_factor_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_term_ (class GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_data_5F_definition_ (class GALGAS_dataList & ioArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_data_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_data_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_5F_list_ (class GALGAS_pic_31__38_InstructionList & outArgument0,
                                                    class GALGAS_bool & ioArgument1,
                                                    class GALGAS_bool & ioArgument2,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_interrupt_5F_definition_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                        class GALGAS_bool & ioArgument1,
                                                        class GALGAS_bool & ioArgument2,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_interrupt_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_interrupt_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_definition_ (class GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                      class GALGAS_bool & ioArgument1,
                                                      class GALGAS_bool & ioArgument2,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_instruction_ (class GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_if_5F_instruction_ (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                class GALGAS_bool & ioArgument1,
                                                                class GALGAS_bool & ioArgument2,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_instruction_ (class GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                          class GALGAS_bool & ioArgument1,
                                                          class GALGAS_bool & ioArgument2,
                                                          class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_syntax_body_i0_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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

  protected : void rule_pic_31__38__5F_syntax_body_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_body_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GALGAS_checkpicList & ioArgument0,
                                                                          C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GALGAS_dataList & ioArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_instruction_5F_list_i3_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                                       GALGAS_bool & ioArgument1,
                                                                       GALGAS_bool & ioArgument2,
                                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_instruction_5F_list_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_instruction_5F_list_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i4_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                           GALGAS_bool & ioArgument1,
                                                                           GALGAS_bool & ioArgument2,
                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_routine_5F_definition_i5_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                         GALGAS_bool & ioArgument1,
                                                                         GALGAS_bool & ioArgument2,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_routine_5F_definition_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_routine_5F_definition_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i6_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_expression_i9_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_term_i10_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i11_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_instruction_i14_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                              GALGAS_bool & ioArgument1,
                                                                              GALGAS_bool & ioArgument2,
                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_instruction_i14_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_instruction_i14_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i15_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                                    GALGAS_bool & ioArgument1,
                                                                                    GALGAS_bool & ioArgument2,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i15_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i15_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_simple_5F_instruction_i16_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                          C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_simple_5F_instruction_i16_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_syntax_simple_5F_instruction_i16_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @exitBlockTerminationForBlockInstruction class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_exitBlockTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--- Constructor
  public : GALGAS_exitBlockTerminationForBlockInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_exitBlockTerminationForBlockInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_exitBlockTerminationForBlockInstruction * ptr (void) const { return (const cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_exitBlockTerminationForBlockInstruction (const cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_exitBlockTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_exitBlockTerminationForBlockInstruction constructor_new (const class GALGAS_location & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_exitBlockTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_exitBlockTerminationForBlockInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @exitBlockTerminationForBlockInstruction class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_exitBlockTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Attributes
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_exitBlockTerminationForBlockInstruction (const GALGAS_location & in_mLocation
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @gotoTerminationForBlockInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gotoTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--- Constructor
  public : GALGAS_gotoTerminationForBlockInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gotoTerminationForBlockInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gotoTerminationForBlockInstruction * ptr (void) const { return (const cPtr_gotoTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gotoTerminationForBlockInstruction (const cPtr_gotoTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gotoTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_gotoTerminationForBlockInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gotoTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mNextBlock (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gotoTerminationForBlockInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @gotoTerminationForBlockInstruction class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gotoTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mNextBlock ;

//--- Constructor
  public : cPtr_gotoTerminationForBlockInstruction (const GALGAS_lstring & in_mNextBlock
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mNextBlock (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @pic_31__38_AndCondition class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_AndCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_AndCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_AndCondition * ptr (void) const { return (const cPtr_pic_31__38_AndCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_AndCondition (const cPtr_pic_31__38_AndCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AndCondition extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_AndCondition constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                  const class GALGAS_pic_31__38_ConditionExpression & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AndCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AndCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @pic18AndCondition class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_AndCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mLeftExpression ;
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_pic_31__38_AndCondition (const GALGAS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                         const GALGAS_pic_31__38_ConditionExpression & in_mRightExpression
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_BccInStructuredCondition class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_BccInStructuredCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_BccInStructuredCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_BccInStructuredCondition * ptr (void) const { return (const cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_BccInStructuredCondition (const cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BccInStructuredCondition extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_BccInStructuredCondition constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_conditional_5F_branch & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BccInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch reader_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mConditionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BccInStructuredCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18BccInStructuredCondition class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_BccInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_location mAttribute_mConditionLocation ;
  public : GALGAS_conditional_5F_branch mAttribute_mCondition ;

//--- Constructor
  public : cPtr_pic_31__38_BccInStructuredCondition (const GALGAS_location & in_mConditionLocation,
                                                     const GALGAS_conditional_5F_branch & in_mCondition
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mConditionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditional_5F_branch reader_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @pic_31__38_BitTestInStructuredCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_BitTestInStructuredCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_BitTestInStructuredCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_BitTestInStructuredCondition * ptr (void) const { return (const cPtr_pic_31__38_BitTestInStructuredCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_BitTestInStructuredCondition (const cPtr_pic_31__38_BitTestInStructuredCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_BitTestInStructuredCondition extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_BitTestInStructuredCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                  const class GALGAS_bitNumberExpression & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_BitTestInStructuredCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_BitTestInStructuredCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18BitTestInStructuredCondition class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_BitTestInStructuredCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_pic_31__38_BitTestInStructuredCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_IncDecRegisterInCondition class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_IncDecRegisterInCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_IncDecRegisterInCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_IncDecRegisterInCondition * ptr (void) const { return (const cPtr_pic_31__38_IncDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_IncDecRegisterInCondition (const cPtr_pic_31__38_IncDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_IncDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_IncDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_bool & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_IncDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IncDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18IncDecRegisterInCondition class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_IncDecRegisterInCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_pic_31__38_IncDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                      const GALGAS_bool & in_mIncrement,
                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                      const GALGAS_bool & in_mBranchIfZero
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_PiccoloSimpleInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_PiccoloSimpleInstruction : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (void) ;

//---
  public : inline const class cPtr_pic_31__38_PiccoloSimpleInstruction * ptr (void) const { return (const cPtr_pic_31__38_PiccoloSimpleInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction (const cPtr_pic_31__38_PiccoloSimpleInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_PiccoloSimpleInstruction extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_PiccoloSimpleInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18PiccoloSimpleInstruction class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_PiccoloSimpleInstruction : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_PiccoloSimpleInstruction (const GALGAS_location & in_mInstructionLocation
                                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic_31__38_Instruction_5F_FA class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_FA (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_FA * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_FA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_FA (const cPtr_pic_31__38_Instruction_5F_FA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FA extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FA constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_FA_5F_instruction_5F_base_5F_code & inOperand1,
                                                                       const class GALGAS_registerExpression & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_FA_5F_instruction_5F_base_5F_code reader_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18Instruction_FA class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_FA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_FA_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_FA_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_FA_5F_instruction_5F_base_5F_code reader_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_FBA class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FBA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_FBA (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_FBA * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_FBA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_FBA (const cPtr_pic_31__38_Instruction_5F_FBA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FBA extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FBA constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_bit_5F_oriented_5F_op & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bitNumberExpression & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FBA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bit_5F_oriented_5F_op reader_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FBA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18Instruction_FBA class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_FBA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bitNumberExpression & in_mBitNumber
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bit_5F_oriented_5F_op reader_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_FDA class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FDA : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_FDA (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_FDA * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_FDA *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_FDA (const cPtr_pic_31__38_Instruction_5F_FDA * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FDA extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FDA constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bool & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FDA & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST reader_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FDA class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18Instruction_FDA class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_FDA : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST mAttribute_mInstruction_5F_FDA_5F_base_5F_code ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST reader_mInstruction_5F_FDA_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_FOREVER class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_FOREVER : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_FOREVER (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_FOREVER * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_FOREVER (const cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                            const class GALGAS_location & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_FOREVER class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_FOREVER class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_FOREVER : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_PiccoloSimpleInstruction reader_mEmbeddedInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_IF_SEMI_COLON class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_PiccoloSimpleInstruction mAttribute_mEmbeddedInstruction ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction
                                                               COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_PiccoloSimpleInstruction reader_mEmbeddedInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @pic_31__38_Instruction_5F_IF_5F_BitTest class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest (const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_registerExpression & inOperand3,
                                                                                  const class GALGAS_bitNumberExpression & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @pic18Instruction_IF_BitTest class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                         const GALGAS_bool & in_mSkipIfSet,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bitNumberExpression & in_mBitNumber
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON constructor_new (const class GALGAS_location & inOperand0,
                                                                                              const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                              const class GALGAS_if_5F_semi_5F_colon_5F_op & inOperand2,
                                                                                              const class GALGAS_registerExpression & inOperand3
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_if_5F_semi_5F_colon_5F_op reader_mOpCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18Instruction_IF_FA_SEMI_COLON class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_if_5F_semi_5F_colon_5F_op mAttribute_mOpCode ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                     const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                     const GALGAS_if_5F_semi_5F_colon_5F_op & in_mOpCode,
                                                                     const GALGAS_registerExpression & in_mRegisterExpression
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_if_5F_semi_5F_colon_5F_op reader_mOpCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_Instruction_5F_IF_5F_IncDec class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec : public GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec (const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_pic_31__38_PiccoloSimpleInstruction & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_registerExpression & inOperand4,
                                                                                 const class GALGAS_bool & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSkipIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_IF_IncDec class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec : public cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_mSkipIfZero ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                        const GALGAS_bool & in_mIncrement,
                                                        const GALGAS_bool & in_mSkipIfZero,
                                                        const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfZero (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_JSR class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_JSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_JSR (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_JSR * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_JSR (const cPtr_pic_31__38_Instruction_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_jumpInstructionKind & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18Instruction_JSR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_JSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_lstring & in_mTargetLabel,
                                               const GALGAS_jumpInstructionKind & in_mKind
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_JUMP class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_JUMP : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_JUMP (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_JUMP * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_JUMP (const cPtr_pic_31__38_Instruction_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         const class GALGAS_jumpInstructionKind & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_JUMP class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_JUMP : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_jumpInstructionKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel,
                                                const GALGAS_jumpInstructionKind & in_mKind
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_jumpInstructionKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_JUMPCC class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_JUMPCC : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_JUMPCC (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_JUMPCC * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_JUMPCC *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_JUMPCC (const cPtr_pic_31__38_Instruction_5F_JUMPCC * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_JUMPCC extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_JUMPCC constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_conditional_5F_branch & inOperand2,
                                                                           const class GALGAS_bool & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_JUMPCC & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_conditional_5F_branch reader_mConditionalBranch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsBcc (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_JUMPCC class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_JUMPCC class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_JUMPCC : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;
  public : GALGAS_conditional_5F_branch mAttribute_mConditionalBranch ;
  public : GALGAS_bool mAttribute_mIsBcc ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_JUMPCC (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstring & in_mTargetLabel,
                                                  const GALGAS_conditional_5F_branch & in_mConditionalBranch,
                                                  const GALGAS_bool & in_mIsBcc
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_conditional_5F_branch reader_mConditionalBranch (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsBcc (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_LDATAPTR class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_LDATAPTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_LDATAPTR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_LDATAPTR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_LDATAPTR * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_LDATAPTR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_LDATAPTR (const cPtr_pic_31__38_Instruction_5F_LDATAPTR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_LDATAPTR extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_LDATAPTR constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_luint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LDATAPTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mDataIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDataName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LDATAPTR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATAPTR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_LDATAPTR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_LDATAPTR : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mDataName ;
  public : GALGAS_luint mAttribute_mDataIndex ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_LDATAPTR (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mDataName,
                                                    const GALGAS_luint & in_mDataIndex
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mDataName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mDataIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_LFSR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_LFSR : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_LFSR (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_LFSR * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_LFSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_LFSR (const cPtr_pic_31__38_Instruction_5F_LFSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_LFSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_LFSR constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_luint & inOperand1,
                                                                         const class GALGAS_immediatExpression & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LFSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mFSRindex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LFSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_LFSR class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_LFSR : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mFSRindex ;
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_luint & in_mFSRindex,
                                                const GALGAS_immediatExpression & in_mImmediatExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mFSRindex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_LTBLPTR class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_LTBLPTR : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_LTBLPTR (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_LTBLPTR * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_LTBLPTR (const cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_LTBLPTR extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_LTBLPTR constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_immediatExpression & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_LTBLPTR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_LTBLPTR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_LTBLPTR : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_immediatExpression & in_mImmediatExpression
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_MNOP class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_MNOP : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_MNOP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_MNOP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_MNOP * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_MNOP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_MNOP (const cPtr_pic_31__38_Instruction_5F_MNOP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_MNOP extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_luint & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mOccurrenceFactor (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MNOP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_MNOP class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_MNOP : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_luint & in_mOccurrenceFactor
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mOccurrenceFactor (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_MOVFF class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_MOVFF : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_MOVFF (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_MOVFF * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_MOVFF *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_MOVFF (const cPtr_pic_31__38_Instruction_5F_MOVFF * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_MOVFF extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_MOVFF constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_registerExpression & inOperand1,
                                                                          const class GALGAS_registerExpression & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_MOVFF & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mDestinationRegisterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mSourceRegisterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_MOVFF class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_MOVFF class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_MOVFF : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mSourceRegisterName ;
  public : GALGAS_registerExpression mAttribute_mDestinationRegisterName ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_registerExpression & in_mSourceRegisterName,
                                                 const GALGAS_registerExpression & in_mDestinationRegisterName
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mSourceRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mDestinationRegisterName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_TBLRD class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_TBLRD : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_TBLRD (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_TBLRD * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_TBLRD (const cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_TBLRD extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_TBLRD constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_tableAccessOption & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLRD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption reader_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLRD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_TBLRD class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_TBLRD : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mAttribute_mOption ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_tableAccessOption & in_mOption
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption reader_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_TBLWT class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_TBLWT : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_TBLWT (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_TBLWT * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_TBLWT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_TBLWT (const cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_TBLWT extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_TBLWT constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_tableAccessOption & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_TBLWT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableAccessOption reader_mOption (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_TBLWT class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_TBLWT class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_TBLWT : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_tableAccessOption mAttribute_mOption ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_tableAccessOption & in_mOption
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_tableAccessOption reader_mOption (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_banksel class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_banksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_banksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_banksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_banksel * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_banksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_banksel (const cPtr_pic_31__38_Instruction_5F_banksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_banksel extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_luint & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_banksel class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_banksel : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_luint mAttribute_mBankIndex ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_luint & in_mBankIndex,
                                                   const GALGAS_bool & in_mWarningOnUselessBanksel
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @pic_31__38_Instruction_5F_banksel_5F_register class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_banksel_5F_register : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_banksel_5F_register * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_banksel_5F_register (const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_registerExpression & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_banksel_5F_register class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18Instruction_banksel_register class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_banksel_5F_register : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                                               const GALGAS_bool & in_mWarningOnUselessBanksel
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_block class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_block : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_block (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_block constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_block * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_block *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_block (const cPtr_pic_31__38_Instruction_5F_block * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_block extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_block constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_pic_31__38_BlockInstructionBlockList & inOperand2,
                                                                          const class GALGAS_location & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_block & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_BlockInstructionBlockList reader_mBlockList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mStartBlockName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_block class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_block class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_block : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mStartBlockName ;
  public : GALGAS_pic_31__38_BlockInstructionBlockList mAttribute_mBlockList ;
  public : GALGAS_location mAttribute_mEndOfInstruction ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_block (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mStartBlockName,
                                                 const GALGAS_pic_31__38_BlockInstructionBlockList & in_mBlockList,
                                                 const GALGAS_location & in_mEndOfInstruction
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mStartBlockName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_BlockInstructionBlockList reader_mBlockList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_Instruction_5F_checkbank class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_checkbank : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_checkbank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_checkbank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_checkbank * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_checkbank extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mBankIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checkbank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_checkbank class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_checkbank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_uint mAttribute_mBankIndex ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_uint & in_mBankIndex
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBankIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_Instruction_5F_checknobank class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_checknobank : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_checknobank (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_checknobank constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_checknobank * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_checknobank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_checknobank extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_checknobank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_checknobank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @pic18Instruction_checknobank class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_checknobank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
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
//                                  @pic_31__38_Instruction_5F_computed_5F_bra class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_computed_5F_bra : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_computed_5F_bra * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_bra (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_bra extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_bra constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_immediatExpression & inOperand1,
                                                                                    const class GALGAS_lstringlist & inOperand2,
                                                                                    const class GALGAS_bool & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_bra class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_computed_bra class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_computed_5F_bra : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mSizeExpression ;
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRelativeCall ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_immediatExpression & in_mSizeExpression,
                                                           const GALGAS_lstringlist & in_mTargetLabels,
                                                           const GALGAS_bool & in_mUsesRelativeCall
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @pic_31__38_Instruction_5F_computed_5F_goto class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_computed_5F_goto : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_computed_5F_goto * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_goto (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_goto extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_goto constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_immediatExpression & inOperand1,
                                                                                     const class GALGAS_lstringlist & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_goto class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_computed_goto class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_computed_5F_goto : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mSizeExpression ;
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRelativeCall ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_immediatExpression & in_mSizeExpression,
                                                            const GALGAS_lstringlist & in_mTargetLabels,
                                                            const GALGAS_bool & in_mUsesRelativeCall
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @pic_31__38_Instruction_5F_computed_5F_rcall class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @pic18Instruction_computed_rcall class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_computed_5F_rcall : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mSizeExpression ;
  public : GALGAS_lstringlist mAttribute_mTargetLabels ;
  public : GALGAS_bool mAttribute_mUsesRelativeCall ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_immediatExpression & in_mSizeExpression,
                                                             const GALGAS_lstringlist & in_mTargetLabels,
                                                             const GALGAS_bool & in_mUsesRelativeCall
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mTargetLabels (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @pic_31__38_Instruction_5F_computed_5F_retlw class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                                      const class GALGAS_immediatExpressionList & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList reader_mImmediateExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @pic18Instruction_computed_retlw class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_computed_5F_retlw : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mSizeExpression ;
  public : GALGAS_immediatExpressionList mAttribute_mImmediateExpressionList ;
  public : GALGAS_bool mAttribute_mUsesRelativeCall ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_immediatExpression & in_mSizeExpression,
                                                             const GALGAS_immediatExpressionList & in_mImmediateExpressionList,
                                                             const GALGAS_bool & in_mUsesRelativeCall
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpressionList reader_mImmediateExpressionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mUsesRelativeCall (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_Instruction_5F_do_5F_while class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_do_5F_while : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_do_5F_while (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_do_5F_while * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_pic_31__38_InstructionList & inOperand1,
                                                                                const class GALGAS_location & inOperand2,
                                                                                const class GALGAS_pic_31__38_DoWhilePartList & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_DoWhilePartList reader_mWhilePartList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_do_5F_while class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_do_while class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_do_5F_while : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRepeatedInstructionList ;
  public : GALGAS_pic_31__38_DoWhilePartList mAttribute_mWhilePartList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                       const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                       const GALGAS_pic_31__38_DoWhilePartList & in_mWhilePartList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_DoWhilePartList reader_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @pic_31__38_Instruction_5F_fnop class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_fnop : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_fnop (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_fnop * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_fnop (const cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_fnop extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_fnop constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_immediatExpression & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_fnop & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_fnop class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_fnop class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_fnop : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_fnop (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_immediatExpression & in_mImmediatExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @pic_31__38_Instruction_5F_literalOperation class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_literalOperation : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_literalOperation (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_literalOperation * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_literalOperation (const cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_literalOperation extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                     const class GALGAS_immediatExpression & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_literalOperation class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @pic18Instruction_literalOperation class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_literalOperation : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                            const GALGAS_immediatExpression & in_mImmediatExpression
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_macro class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_macro : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_macro (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_macro constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_macro * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_macro *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_macro (const cPtr_pic_31__38_Instruction_5F_macro * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_macro extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_macro constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_immediatExpressionList & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_macro & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpressionList reader_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMacroName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_macro class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18Instruction_macro class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_macro : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMacroName ;
  public : GALGAS_immediatExpressionList mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_macro (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mMacroName,
                                                 const GALGAS_immediatExpressionList & in_mExpressionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMacroName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpressionList reader_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @pic_31__38_Instruction_5F_nobanksel class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_nobanksel : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_nobanksel (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_nobanksel constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_nobanksel * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_nobanksel *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_nobanksel extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_nobanksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_nobanksel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_nobanksel class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_nobanksel : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
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
//                                 @pic_31__38_Instruction_5F_repetitionStatique class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_repetitionStatique : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_repetitionStatique (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_repetitionStatique * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_repetitionStatique *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_repetitionStatique (const cPtr_pic_31__38_Instruction_5F_repetitionStatique * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_repetitionStatique extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_repetitionStatique constructor_new (const class GALGAS_location & inOperand0,
                                                                                       const class GALGAS_immediatExpression & inOperand1,
                                                                                       const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                       const class GALGAS_location & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_repetitionStatique & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mRepeatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_repetitionStatique class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @pic18Instruction_repetitionStatique class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_repetitionStatique : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mRepeatExpression ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstruction ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_repetitionStatique (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_immediatExpression & in_mRepeatExpression,
                                                              const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                              const GALGAS_location & in_mEndOfInstruction
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mRepeatExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_Instruction_5F_savebank class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_savebank : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_savebank (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_savebank * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_savebank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_savebank (const cPtr_pic_31__38_Instruction_5F_savebank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_registerExpression & inOperand1,
                                                                             const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                             const class GALGAS_location & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_savebank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18Instruction_savebank class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_savebank : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfSaveBankInstruction ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_registerExpression & in_mRegister,
                                                    const GALGAS_pic_31__38_InstructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfSaveBankInstruction
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @pic_31__38_Instruction_5F_structured_5F_if class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_structured_5F_if : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_structured_5F_if (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_structured_5F_if * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_structured_5F_if extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_pic_31__38_ConditionExpression & inOperand1,
                                                                                     const class GALGAS_pic_31__38_InstructionList & inOperand2,
                                                                                     const class GALGAS_pic_31__38_InstructionList & inOperand3,
                                                                                     const class GALGAS_location & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mThenInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_structured_5F_if class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_structured_if class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_structured_5F_if : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mIfCondition ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mThenInstructionList ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElsePartLocation ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                            const GALGAS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                            const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                            const GALGAS_location & in_mEndOfElsePartLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_Instruction_5F_switch class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_switch : public GALGAS_pic_31__38_PiccoloInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_pic_31__38_Instruction_5F_switch constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_switch * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_switch extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_switch constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                           const class GALGAS_location & inOperand2,
                                                                           const class GALGAS_pic_31__38_InstructionList & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_SwitchInstructionCaseList reader_mCaseList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mElseBranchStartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_switch class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @pic18Instruction_switch class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_SwitchInstructionCaseList mAttribute_mCaseList ;
  public : GALGAS_location mAttribute_mElseBranchStartLocation ;
  public : GALGAS_pic_31__38_InstructionList mAttribute_mElseInstructionList ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                  const GALGAS_location & in_mElseBranchStartLocation,
                                                  const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_SwitchInstructionCaseList reader_mCaseList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mElseBranchStartLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @pic_31__38_Instruction_5F_withNoOperand class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_Instruction_5F_withNoOperand : public GALGAS_pic_31__38_PiccoloSimpleInstruction {
//--- Constructor
  public : GALGAS_pic_31__38_Instruction_5F_withNoOperand (void) ;

//---
  public : inline const class cPtr_pic_31__38_Instruction_5F_withNoOperand * ptr (void) const { return (const cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_Instruction_5F_withNoOperand (const cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_Instruction_5F_withNoOperand extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_Instruction_5F_withNoOperand constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_pic_31__38_InstructionWithNoOperandKind & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InstructionWithNoOperandKind reader_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_Instruction_5F_withNoOperand class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @pic18Instruction_withNoOperand class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_Instruction_5F_withNoOperand : public cPtr_pic_31__38_PiccoloSimpleInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_InstructionWithNoOperandKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_pic_31__38_Instruction_5F_withNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_InstructionWithNoOperandKind reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @pic_31__38_IntervalCaseItem class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_IntervalCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--- Constructor
  public : GALGAS_pic_31__38_IntervalCaseItem (void) ;

//---
  public : inline const class cPtr_pic_31__38_IntervalCaseItem * ptr (void) const { return (const cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_IntervalCaseItem extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_IntervalCaseItem constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                      const class GALGAS_location & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mCaseExpressionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mMaxExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mMinExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_IntervalCaseItem class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @pic18IntervalCaseItem class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mMinExpression ;
  public : GALGAS_immediatExpression mAttribute_mMaxExpression ;
  public : GALGAS_location mAttribute_mCaseExpressionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                             const GALGAS_immediatExpression & in_mMaxExpression,
                                             const GALGAS_location & in_mCaseExpressionLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mMinExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mMaxExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mCaseExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @pic_31__38_NegateCondition class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_NegateCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_NegateCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_NegateCondition * ptr (void) const { return (const cPtr_pic_31__38_NegateCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_NegateCondition (const cPtr_pic_31__38_NegateCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_NegateCondition extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_NegateCondition constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_NegateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_NegateCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @pic18NegateCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_NegateCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mCondition ;

//--- Constructor
  public : cPtr_pic_31__38_NegateCondition (const GALGAS_pic_31__38_ConditionExpression & in_mCondition
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @pic_31__38_RegisterComparisonCondition class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RegisterComparisonCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_RegisterComparisonCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_RegisterComparisonCondition * ptr (void) const { return (const cPtr_pic_31__38_RegisterComparisonCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_RegisterComparisonCondition (const cPtr_pic_31__38_RegisterComparisonCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_RegisterComparisonCondition extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RegisterComparisonCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                 const class GALGAS_pic_31__38_RegisterComparison & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterComparisonCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RegisterComparison reader_mComparison (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterComparisonCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @pic18RegisterComparisonCondition class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_RegisterComparisonCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_pic_31__38_RegisterComparison mAttribute_mComparison ;

//--- Constructor
  public : cPtr_pic_31__38_RegisterComparisonCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                        const GALGAS_pic_31__38_RegisterComparison & in_mComparison
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_RegisterComparison reader_mComparison (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @pic_31__38_RegisterTestCondition class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_RegisterTestCondition : public GALGAS_pic_31__38_ConditionExpression {
//--- Constructor
  public : GALGAS_pic_31__38_RegisterTestCondition (void) ;

//---
  public : inline const class cPtr_pic_31__38_RegisterTestCondition * ptr (void) const { return (const cPtr_pic_31__38_RegisterTestCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_RegisterTestCondition (const cPtr_pic_31__38_RegisterTestCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_RegisterTestCondition extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_RegisterTestCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                           const class GALGAS_bool & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_RegisterTestCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_RegisterTestCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @pic18RegisterTestCondition class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_RegisterTestCondition : public cPtr_pic_31__38_ConditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_pic_31__38_RegisterTestCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                  const GALGAS_bool & in_mBranchIfZero
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @pic_31__38_SimpleConstantCaseItem class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_SimpleConstantCaseItem : public GALGAS_pic_31__38_AbstractCaseItem {
//--- Constructor
  public : GALGAS_pic_31__38_SimpleConstantCaseItem (void) ;

//---
  public : inline const class cPtr_pic_31__38_SimpleConstantCaseItem * ptr (void) const { return (const cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_SimpleConstantCaseItem extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_SimpleConstantCaseItem constructor_new (const class GALGAS_immediatExpression & inOperand0,
                                                                            const class GALGAS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mCaseExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mCaseExpressionLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_SimpleConstantCaseItem class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @pic18SimpleConstantCaseItem class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mCaseExpression ;
  public : GALGAS_location mAttribute_mCaseExpressionLocation ;

//--- Constructor
  public : cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                   const GALGAS_location & in_mCaseExpressionLocation
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mCaseExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mCaseExpressionLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @testTerminationForBlockInstruction class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_testTerminationForBlockInstruction : public GALGAS_abstractBlockTerminationForBlockInstruction {
//--- Constructor
  public : GALGAS_testTerminationForBlockInstruction (void) ;

//---
  public : inline const class cPtr_testTerminationForBlockInstruction * ptr (void) const { return (const cPtr_testTerminationForBlockInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_testTerminationForBlockInstruction extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_testTerminationForBlockInstruction constructor_new (const class GALGAS_pic_31__38_ConditionExpression & inOperand0,
                                                                             const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand1,
                                                                             const class GALGAS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                             const class GALGAS_location & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_testTerminationForBlockInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction reader_mFalseTermination (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBlockTerminationForBlockInstruction reader_mTrueTermination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testTerminationForBlockInstruction class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @testTerminationForBlockInstruction class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_testTerminationForBlockInstruction : public cPtr_abstractBlockTerminationForBlockInstruction {
//--- Attributes
  public : GALGAS_pic_31__38_ConditionExpression mAttribute_mCondition ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mTrueTermination ;
  public : GALGAS_abstractBlockTerminationForBlockInstruction mAttribute_mFalseTermination ;
  public : GALGAS_location mAttribute_mLocation ;

//--- Constructor
  public : cPtr_testTerminationForBlockInstruction (const GALGAS_pic_31__38_ConditionExpression & in_mCondition,
                                                    const GALGAS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                    const GALGAS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                    const GALGAS_location & in_mLocation
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_pic_31__38_ConditionExpression reader_mCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBlockTerminationForBlockInstruction reader_mTrueTermination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBlockTerminationForBlockInstruction reader_mFalseTermination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR pic18_include_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public : virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_bit_5F_number_5F_parsing_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                      C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public : virtual void nt_block_5F_termination_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_block_5F_termination_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public : virtual void nt_body_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_body_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_body_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
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

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
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
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public : virtual void nt_checkpic_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_checkpic_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_expression_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                     C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_factor_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public : virtual void nt_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_condition_5F_term_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
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

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public : virtual void nt_data_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_data_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
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

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_instruction_5F_list_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                 GALGAS_bool & ioArgument1,
                                                 GALGAS_bool & ioArgument2,
                                                 C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public : virtual void nt_interrupt_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_interrupt_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                     GALGAS_bool & ioArgument1,
                                                     GALGAS_bool & ioArgument2,
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

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public : virtual void nt_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_routine_5F_definition_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                   GALGAS_bool & ioArgument1,
                                                   GALGAS_bool & ioArgument2,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                   C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_structured_5F_if_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_structured_5F_if_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                             GALGAS_bool & ioArgument1,
                                                             GALGAS_bool & ioArgument2,
                                                             C_Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public : virtual void nt_structured_5F_instruction_indexing (C_Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                       GALGAS_bool & ioArgument1,
                                                       GALGAS_bool & ioArgument2,
                                                       C_Lexique_piccolo_5F_lexique * inCompiler) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_33 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_34 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_35 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_36 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_37 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_38 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_39 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_40 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_41 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_42 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_43 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_44 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_45 (C_Lexique_piccolo_5F_lexique *) ;

  public : virtual int32_t select_pic_31__38__5F_syntax_46 (C_Lexique_piccolo_5F_lexique *) ;

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

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Parser class 'pic18_start_symbol' declaration                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) {}

//--- Non terminal declarations
  protected : virtual void nt_body_ (class GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
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

  protected : virtual void nt_body_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                         GALGAS_string & outArgument1,
                                                                                                         GALGAS_uint & outArgument2,
                                                                                                         GALGAS_ramBankTable & outArgument3,
                                                                                                         GALGAS_registerTable & outArgument4,
                                                                                                         GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                         GALGAS_routineDeclarationList & outArgument6,
                                                                                                         GALGAS_routineDeclarationList & outArgument7,
                                                                                                         GALGAS_luint & outArgument8,
                                                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @ramBankTable map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_ramBankTable ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_ramBankTable_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ramBankTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_ramBankTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_ramBankTable (const GALGAS_ramBankTable & inSource) ;
  public : GALGAS_ramBankTable & operator = (const GALGAS_ramBankTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ramBankTable extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ramBankTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_ramBankTable constructor_mapWithMapToOverride (const class GALGAS_ramBankTable & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_uint & inOperand3,
                                                      const class GALGAS_uintlist & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uint constinArgument1,
                                                     class GALGAS_uint constinArgument2,
                                                     class GALGAS_uint constinArgument3,
                                                     class GALGAS_uintlist constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFirstAddressForKey (class GALGAS_uint constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMFirstFreeAddressForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMLastAddressPlusOneForKey (class GALGAS_uint constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMMirrorOffsetListForKey (class GALGAS_uintlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_uint & outArgument3,
                                                   class GALGAS_uintlist & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFirstAddressForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mFirstFreeAddressForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mLastAddressPlusOneForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist reader_mMirrorOffsetListForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramBankTable reader_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_ramBankTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_ramBankTable ;
 
} ; // End of GALGAS_ramBankTable class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_ramBankTable : public cGenericAbstractEnumerator {
  public : cEnumerator_ramBankTable (const GALGAS_ramBankTable & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_ramBankTable_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ramBankTable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@ramBankTable' map                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_ramBankTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mFirstAddress ;
  public : GALGAS_uint mAttribute_mFirstFreeAddress ;
  public : GALGAS_uint mAttribute_mLastAddressPlusOne ;
  public : GALGAS_uintlist mAttribute_mMirrorOffsetList ;

//--- Constructor
  public : cMapElement_ramBankTable (const GALGAS_lstring & inKey,
                                     const GALGAS_uint & in_mFirstAddress,
                                     const GALGAS_uint & in_mFirstFreeAddress,
                                     const GALGAS_uint & in_mLastAddressPlusOne,
                                     const GALGAS_uintlist & in_mMirrorOffsetList
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
//                                                 @registerTable map                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_registerTable ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_registerTable_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_registerTable : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_registerTable (void) ;

//--------------------------------- Handle copy
  public : GALGAS_registerTable (const GALGAS_registerTable & inSource) ;
  public : GALGAS_registerTable & operator = (const GALGAS_registerTable & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerTable extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_registerTable constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_registerTable constructor_mapWithMapToOverride (const class GALGAS_registerTable & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uintlist & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_bitSliceTable & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_uintlist constinArgument1,
                                                     class GALGAS_uint constinArgument2,
                                                     class GALGAS_bitSliceTable constinArgument3,
                                                     class GALGAS_string constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMBitDefinitionStringForKey (class GALGAS_string constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMBitSliceTableForKey (class GALGAS_bitSliceTable constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRegisterAddressListForKey (class GALGAS_uintlist constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMSizeForKey (class GALGAS_uint constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uintlist & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_bitSliceTable & outArgument3,
                                                   class GALGAS_string & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBitDefinitionStringForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable reader_mBitSliceTableForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uintlist reader_mRegisterAddressListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mSizeForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerTable reader_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_registerTable * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_registerTable ;
 
} ; // End of GALGAS_registerTable class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_registerTable : public cGenericAbstractEnumerator {
  public : cEnumerator_registerTable (const GALGAS_registerTable & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uintlist current_mRegisterAddressList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mSize (LOCATION_ARGS) const ;
  public : class GALGAS_bitSliceTable current_mBitSliceTable (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBitDefinitionString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_registerTable_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerTable ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@registerTable' map                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_registerTable : public cMapElement {
//--- Map attributes
  public : GALGAS_uintlist mAttribute_mRegisterAddressList ;
  public : GALGAS_uint mAttribute_mSize ;
  public : GALGAS_bitSliceTable mAttribute_mBitSliceTable ;
  public : GALGAS_string mAttribute_mBitDefinitionString ;

//--- Constructor
  public : cMapElement_registerTable (const GALGAS_lstring & inKey,
                                      const GALGAS_uintlist & in_mRegisterAddressList,
                                      const GALGAS_uint & in_mSize,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString
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
//                                               Routine 'pic18_analyze'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38__5F_analyze (const class GALGAS_pic_31__38_AST constinArgument0,
                                     const class GALGAS_string constinArgument1,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @pic_31__38_AST struct                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_programKind mAttribute_mProgramKind ;
  public : GALGAS_lstring mAttribute_mDeviceNameOrBootLoaderReference ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_checkpicList mAttribute_mCheckpicList ;
  public : GALGAS_dataList mAttribute_mDataList ;
  public : GALGAS_pic_31__38_InterruptDefinitionList mAttribute_mInterruptDefinitionList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_pic_31__38_RoutineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_pic_31__38_MacroDefinitionList mAttribute_mMacroDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_lstringlist mAttribute_mInlinedRoutineList ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_32_ ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_34_ ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_pic_31__38_AST (void) ;

//--------------------------------- Native constructor
  public : GALGAS_pic_31__38_AST (const GALGAS_lstring & in_mProgramName,
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
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_pic_31__38_AST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_pic_31__38_AST constructor_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_pic_31__38_AST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_checkpicList reader_mCheckpicList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList reader_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList reader_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_dataList reader_mDataList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDeviceNameOrBootLoaderReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mInlinedRoutineList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_InterruptDefinitionList reader_mInterruptDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_MacroDefinitionList reader_mMacroDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_programKind reader_mProgramKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList reader_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_pic_31__38_RoutineDefinitionList reader_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_pic_31__38_AST class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @processorType enum                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_processorType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_pic_31__38__5F__36__30_,
    kEnum_pic_31__38__5F__38__30_,
    kEnum_midrange,
    kEnum_baseline
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
  public : static GALGAS_processorType extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_processorType constructor_baseline (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_midrange (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public : static GALGAS_processorType constructor_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_processorType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isBaseline (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isMidrange (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_processorType class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_processorType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @configRegisterMap map                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_configRegisterMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_configRegisterMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_configRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_configRegisterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_configRegisterMap (const GALGAS_configRegisterMap & inSource) ;
  public : GALGAS_configRegisterMap & operator = (const GALGAS_configRegisterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_configRegisterMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_configRegisterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_configRegisterMap constructor_mapWithMapToOverride (const class GALGAS_configRegisterMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_configRegisterMaskMap & inOperand3,
                                                      const class GALGAS_illegalMaskList & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertKey (class GALGAS_lstring constinArgument0,
                                                     class GALGAS_luint constinArgument1,
                                                     class GALGAS_luint constinArgument2,
                                                     class GALGAS_configRegisterMaskMap constinArgument3,
                                                     class GALGAS_illegalMaskList constinArgument4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMConfigRegisterMaskMapForKey (class GALGAS_configRegisterMaskMap constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMIllegalMaskListForKey (class GALGAS_illegalMaskList constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRegisterAddressForKey (class GALGAS_luint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_setMRegisterWidthForKey (class GALGAS_luint constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_configRegisterMaskMap & outArgument3,
                                                   class GALGAS_illegalMaskList & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMaskMap reader_mConfigRegisterMaskMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_illegalMaskList reader_mIllegalMaskListForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRegisterAddressForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRegisterWidthForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap reader_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_configRegisterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_configRegisterMap ;
 
} ; // End of GALGAS_configRegisterMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_configRegisterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_configRegisterMap (const GALGAS_configRegisterMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public : class GALGAS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public : class GALGAS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_configRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @piccoloDeviceModel struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_processorType mAttribute_mProcessorType ;
  public : GALGAS_luint mAttribute_mRomSize ;
  public : GALGAS_luint mAttribute_mBankCount ;
  public : GALGAS_registerTable mAttribute_mRegisterTable ;
  public : GALGAS_ramBankTable mAttribute_mRamBankTable ;
  public : GALGAS_uint mAttribute_mEepromSize ;
  public : GALGAS_uint mAttribute_mEepromAddress ;
  public : GALGAS_configRegisterMap mAttribute_mConfigRegisterMap ;
  public : GALGAS_string mAttribute_mSharedBankName ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_piccoloDeviceModel (void) ;

//--------------------------------- Native constructor
  public : GALGAS_piccoloDeviceModel (const GALGAS_lstring & in_mDeviceName,
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
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_piccoloDeviceModel extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_piccoloDeviceModel constructor_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_piccoloDeviceModel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mBankCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_configRegisterMap reader_mConfigRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mEepromAddress (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mEepromSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_processorType reader_mProcessorType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramBankTable reader_mRamBankTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerTable reader_mRegisterTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mRomSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mSharedBankName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_piccoloDeviceModel class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Parser class 'midrange_syntax' declaration                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_midrange_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_midrange_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_ (class GALGAS_declarationInRam & outArgument0,
                                                         class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_declaration_5F_in_5F_ram_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_ (class GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                              class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_ (class GALGAS_midrange_5F_instructionList & outArgument0,
                                                                class GALGAS_bool & ioArgument1,
                                                                class GALGAS_bool & ioArgument2,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_ (class GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                    class GALGAS_bool & ioArgument1,
                                                                    class GALGAS_bool & ioArgument2,
                                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_ (class GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                  class GALGAS_bool & ioArgument1,
                                                                  class GALGAS_bool & ioArgument2,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                            class GALGAS_bool & ioArgument1,
                                                                            class GALGAS_bool & ioArgument2,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_ (class GALGAS_midrange_5F_instruction & outArgument0,
                                                                      class GALGAS_bool & ioArgument1,
                                                                      class GALGAS_bool & ioArgument2,
                                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_midrange_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                             GALGAS_string & outArgument1,
                                                                                             GALGAS_uint & outArgument2,
                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                             GALGAS_registerTable & outArgument4,
                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                             GALGAS_luint & outArgument8,
                                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                                                GALGAS_bool & ioArgument1,
                                                                                GALGAS_bool & ioArgument2,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                    GALGAS_bool & ioArgument1,
                                                                                    GALGAS_bool & ioArgument2,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                  GALGAS_bool & ioArgument1,
                                                                                  GALGAS_bool & ioArgument2,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                      GALGAS_bool & ioArgument1,
                                                                                      GALGAS_bool & ioArgument2,
                                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                            GALGAS_bool & ioArgument1,
                                                                                            GALGAS_bool & ioArgument2,
                                                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_midrange_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_midrange_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;


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
  public : static GALGAS_midrangeInstruction_5F_checkbank constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_uint & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrangeInstruction_5F_checkbank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mBankIndex (LOCATION_ARGS) const ;


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
  public : GALGAS_uint mAttribute_mBankIndex ;

//--- Constructor
  public : cPtr_midrangeInstruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_uint & in_mBankIndex
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mBankIndex (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrangeInstruction_5F_checknobank constructor_new (const class GALGAS_location & inOperand0
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
  public : static GALGAS_midrange_5F_andCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                   const class GALGAS_midrange_5F_conditionExpression & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mRightExpression (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mLeftExpression ;
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                          const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression reader_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression reader_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//---
  public : inline const class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * ptr (void) const { return (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                     const class GALGAS_bitNumberExpression & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Pointer class for @midrange_bitTest_in_structured_if_condition class                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @midrange_5F_incDecRegisterInCondition class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_incDecRegisterInCondition : public GALGAS_midrange_5F_conditionExpression {
//--- Constructor
  public : GALGAS_midrange_5F_incDecRegisterInCondition (void) ;

//---
  public : inline const class cPtr_midrange_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_incDecRegisterInCondition class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_incDecRegisterInCondition class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_incDecRegisterInCondition : public cPtr_midrange_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mAttribute_mBranchIfZero ;

//--- Constructor
  public : cPtr_midrange_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_bool & in_mIncrement,
                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                       const GALGAS_bool & in_mBranchIfZero
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_CALL class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_CALL : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_CALL * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_CALL class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_CALL class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_CALL : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_CLRW constructor_new (const class GALGAS_location & inOperand0
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
  public : static GALGAS_midrange_5F_instruction_5F_CLRWDT constructor_new (const class GALGAS_location & inOperand0
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
//                                         @midrange_5F_instruction_5F_F class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_F : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_F * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                       const class GALGAS_registerExpression & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code reader_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_F class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @midrange_instruction_F class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_F : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code mAttribute_mFAinstruction ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code reader_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_FB class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_FB : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_midrange_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bitNumberExpression & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_bit_5F_oriented_5F_op reader_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FB class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_FB class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_FB : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_bit_5F_oriented_5F_op mAttribute_mBitOrientedOp ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bitNumberExpression & in_mBitNumber
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_bit_5F_oriented_5F_op reader_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_FD class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_FD : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                        const class GALGAS_registerExpression & inOperand2,
                                                                        const class GALGAS_bool & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code reader_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_FD class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_FD class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_FD : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code mAttribute_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code reader_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_FOREVER constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                             const class GALGAS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstructionList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                    const GALGAS_location & in_mEndOfInstructionList
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_GOTO class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_GOTO : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_GOTO * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_GOTO class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_GOTO class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_GOTO : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
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
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instruction reader_mInstruction (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_instruction mAttribute_mInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instruction reader_mInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_5F_instruction_5F_IF_5F_BitTest class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_registerExpression & inOperand3,
                                                                                   const class GALGAS_bitNumberExpression & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @midrange_instruction_IF_BitTest class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mSkipIfSet ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mAttribute_mBitNumber ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                          const GALGAS_bool & in_mSkipIfSet,
                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                          const GALGAS_bitNumberExpression & in_mBitNumber
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression reader_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @midrange_5F_instruction_5F_IF_5F_IncDec class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec : public GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_midrange_5F_instruction & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_registerExpression & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_IF_IncDec class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_IF_5F_IncDec : public cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mAttribute_mIncrement ;
  public : GALGAS_registerExpression mAttribute_mRegisterExpression ;
  public : GALGAS_bool mAttribute_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_midrange_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mIncrement,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_5F_instruction_5F_JSR class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_JSR : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_JSR * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JSR class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @midrange_instruction_JSR class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_JSR : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mTargetLabel
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_5F_instruction_5F_JUMP class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_JUMP : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_JUMP * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_JUMP class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @midrange_instruction_JUMP class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_JUMP : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTargetLabel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mTargetLabel
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mTargetLabel (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_MNOP constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_luint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mOccurrenceFactor (LOCATION_ARGS) const ;


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
  public : GALGAS_luint mAttribute_mOccurrenceFactor ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_luint & in_mOccurrenceFactor
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mOccurrenceFactor (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_NOP constructor_new (const class GALGAS_location & inOperand0
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
  public : static GALGAS_midrange_5F_instruction_5F_SLEEP constructor_new (const class GALGAS_location & inOperand0
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
//                                 @midrange_5F_instruction_5F_STATIC_5F_REPEAT class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_immediatExpression & inOperand1,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                                      const class GALGAS_location & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mRepeatExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @midrange_instruction_STATIC_REPEAT class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_immediatExpression mAttribute_mRepeatExpression ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_immediatExpression & in_mRepeatExpression,
                                                             const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstruction
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mRepeatExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfInstruction (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_banksel constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_luint & inOperand1,
                                                                             const class GALGAS_bool & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


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
  public : GALGAS_luint mAttribute_mBankIndex ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_luint & in_mBankIndex,
                                                    const GALGAS_bool & in_mWarningOnUselessBanksel
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint reader_mBankIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @midrange_5F_instruction_5F_banksel_5F_register class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_banksel_5F_register : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_banksel_5F_register (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_banksel_5F_register * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_banksel_5F_register extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_banksel_5F_register constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_registerExpression & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_banksel_5F_register class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @midrange_instruction_banksel_register class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_banksel_5F_register : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_bool mAttribute_mWarningOnUselessBanksel ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_registerExpression & in_mRegister,
                                                                const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mWarningOnUselessBanksel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
  public : static GALGAS_midrange_5F_instruction_5F_do_5F_while constructor_new (const class GALGAS_location & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_partList reader_mWhilePartList (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_instructionList mAttribute_mRepeatedInstructionList ;
  public : GALGAS_location mAttribute_mEndOfRepeatedInstructionList ;
  public : GALGAS_midrange_5F_partList mAttribute_mWhilePartList ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                        const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                        const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfRepeatedInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_partList reader_mWhilePartList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
  public : static GALGAS_midrange_5F_instruction_5F_literalOperation constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand1,
                                                                                      const class GALGAS_immediatExpression & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_literal_5F_instruction_5F_opcode mAttribute_mLiteralInstruction ;
  public : GALGAS_immediatExpression mAttribute_mImmediatExpression ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                             const GALGAS_immediatExpression & in_mImmediatExpression
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_literal_5F_instruction_5F_opcode reader_mLiteralInstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression reader_mImmediatExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

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
  public : static GALGAS_midrange_5F_instruction_5F_nobanksel constructor_new (const class GALGAS_location & inOperand0
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
//                                     @midrange_5F_instruction_5F_savebank class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_instruction_5F_savebank : public GALGAS_midrange_5F_instruction {
//--- Constructor
  public : GALGAS_midrange_5F_instruction_5F_savebank (void) ;

//---
  public : inline const class cPtr_midrange_5F_instruction_5F_savebank * ptr (void) const { return (const cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_instruction_5F_savebank extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_instruction_5F_savebank constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_registerExpression & inOperand1,
                                                                              const class GALGAS_midrange_5F_instructionList & inOperand2,
                                                                              const class GALGAS_location & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_instruction_5F_savebank class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @midrange_instruction_savebank class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_midrange_5F_instruction_5F_savebank : public cPtr_midrange_5F_instruction {
//--- Attributes
  public : GALGAS_registerExpression mAttribute_mRegister ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mInstructionList ;
  public : GALGAS_location mAttribute_mEndOfSaveBankInstruction ;

//--- Constructor
  public : cPtr_midrange_5F_instruction_5F_savebank (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_registerExpression & in_mRegister,
                                                     const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GALGAS_location & in_mEndOfSaveBankInstruction
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression reader_mRegister (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfSaveBankInstruction (LOCATION_ARGS) const ;
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
  public : static GALGAS_midrange_5F_instruction_5F_structured_5F_if constructor_new (const class GALGAS_location & inOperand0,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mElseInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mIfCondition (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mThenInstructionList (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mIfCondition ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mThenInstructionList ;
  public : GALGAS_midrange_5F_instructionList mAttribute_mElseInstructionList ;
  public : GALGAS_location mAttribute_mEndOfElsePartLocation ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression reader_mIfCondition (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mThenInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_instructionList reader_mElseInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location reader_mEndOfElsePartLocation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

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
  public : static GALGAS_midrange_5F_negateCondition constructor_new (const class GALGAS_midrange_5F_conditionExpression & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_conditionExpression reader_mCondition (LOCATION_ARGS) const ;


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
  public : GALGAS_midrange_5F_conditionExpression mAttribute_mCondition ;

//--- Constructor
  public : cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_conditionExpression reader_mCondition (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'midrange_analyze'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_midrange_5F_analyze (const class GALGAS_midrange_5F_model constinArgument0,
                                  const class GALGAS_string constinArgument1,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @midrange_5F_model struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_midrange_5F_interruptDefinitionList mAttribute_mInterruptDefinitionList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_midrange_5F_routineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_32_ ;
  public : GALGAS_bool mAttribute_mNeedsComputedGoto_34_ ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_midrange_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_model (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_midrange_5F_model (void) ;

//--------------------------------- Native constructor
  public : GALGAS_midrange_5F_model (const GALGAS_lstring & in_mProgramName,
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
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_model extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_midrange_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList reader_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList reader_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList reader_mInterruptDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_32_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mNeedsComputedGoto_34_ (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList reader_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList reader_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_midrange_5F_model class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Parser class 'baseline_program' declaration                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_baseline_5F_program {
//--- Virtual destructor
  public : virtual ~ cParser_baseline_5F_program (void) {}

//--- Non terminal declarations
  protected : virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
                                                class GALGAS_ramDefinitionList & ioArgument2,
                                                class GALGAS_lstringlist & ioArgument3,
                                                class GALGAS_configDefinitionList & ioArgument4,
                                                class GALGAS_constantDefinitionList & ioArgument5,
                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_baseline_5F_program_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                              GALGAS_string & outArgument1,
                                                                                              GALGAS_uint & outArgument2,
                                                                                              GALGAS_ramBankTable & outArgument3,
                                                                                              GALGAS_registerTable & outArgument4,
                                                                                              GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                              GALGAS_routineDeclarationList & outArgument6,
                                                                                              GALGAS_routineDeclarationList & outArgument7,
                                                                                              GALGAS_luint & outArgument8,
                                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_program_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_baseline_5F_analysis (const class GALGAS_baseline_5F_model constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @baseline_5F_model struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mProgramName ;
  public : GALGAS_lstring mAttribute_mDeviceName ;
  public : GALGAS_configDefinitionList mAttribute_mConfigDefinitionList ;
  public : GALGAS_ramDefinitionList mAttribute_mRamDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRegisterList ;
  public : GALGAS_constantDefinitionList mAttribute_mConstantDefinitionList ;
  public : GALGAS_baseline_5F_routineDefinitionList mAttribute_mRoutineDefinitionList ;
  public : GALGAS_lstringlist mAttribute_mUnusedRoutineList ;
  public : GALGAS_location mAttribute_mEndOfProgram ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_model (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_baseline_5F_model (void) ;

//--------------------------------- Native constructor
  public : GALGAS_baseline_5F_model (const GALGAS_lstring & in_mProgramName,
                                     const GALGAS_lstring & in_mDeviceName,
                                     const GALGAS_configDefinitionList & in_mConfigDefinitionList,
                                     const GALGAS_ramDefinitionList & in_mRamDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRegisterList,
                                     const GALGAS_constantDefinitionList & in_mConstantDefinitionList,
                                     const GALGAS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                     const GALGAS_lstringlist & in_mUnusedRoutineList,
                                     const GALGAS_location & in_mEndOfProgram) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_model extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_baseline_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_lstring & inOperand1,
                                                            const class GALGAS_configDefinitionList & inOperand2,
                                                            const class GALGAS_ramDefinitionList & inOperand3,
                                                            const class GALGAS_lstringlist & inOperand4,
                                                            const class GALGAS_constantDefinitionList & inOperand5,
                                                            const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                            const class GALGAS_lstringlist & inOperand7,
                                                            const class GALGAS_location & inOperand8
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList reader_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList reader_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList reader_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList reader_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_model class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Parser class 'pic18_bootloader_syntax' declaration                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_parse_5F_bootloader_ (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_lstring & outArgument1,
                                                    class GALGAS_routineDeclarationList & outArgument2,
                                                    class GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                    class GALGAS_luint & outArgument4,
                                                    class GALGAS_routineDeclarationList & outArgument5,
                                                    class GALGAS_ramDefinitionList & outArgument6,
                                                    class GALGAS_string & outArgument7,
                                                    class GALGAS_piccoloDeviceModel & outArgument8,
                                                    class GALGAS_uint & outArgument9,
                                                    class GALGAS_ramBankTable & outArgument10,
                                                    class GALGAS_registerTable & outArgument11,
                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_parse_5F_bootloader_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_ (class GALGAS_routineDeclarationList & ioArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_routine_5F_declaration_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                             class GALGAS_string & outArgument1,
                                                                             class GALGAS_uint & outArgument2,
                                                                             class GALGAS_ramBankTable & outArgument3,
                                                                             class GALGAS_registerTable & outArgument4,
                                                                             class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                             class GALGAS_routineDeclarationList & outArgument6,
                                                                             class GALGAS_routineDeclarationList & outArgument7,
                                                                             class GALGAS_luint & outArgument8,
                                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GALGAS_lstring & outArgument0,
                                                                                     GALGAS_lstring & outArgument1,
                                                                                     GALGAS_routineDeclarationList & outArgument2,
                                                                                     GALGAS_bootloaderReservedRAMmap & outArgument3,
                                                                                     GALGAS_luint & outArgument4,
                                                                                     GALGAS_routineDeclarationList & outArgument5,
                                                                                     GALGAS_ramDefinitionList & outArgument6,
                                                                                     GALGAS_string & outArgument7,
                                                                                     GALGAS_piccoloDeviceModel & outArgument8,
                                                                                     GALGAS_uint & outArgument9,
                                                                                     GALGAS_ramBankTable & outArgument10,
                                                                                     GALGAS_registerTable & outArgument11,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                              GALGAS_string & outArgument1,
                                                                                                              GALGAS_uint & outArgument2,
                                                                                                              GALGAS_ramBankTable & outArgument3,
                                                                                                              GALGAS_registerTable & outArgument4,
                                                                                                              GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                              GALGAS_routineDeclarationList & outArgument6,
                                                                                                              GALGAS_routineDeclarationList & outArgument7,
                                                                                                              GALGAS_luint & outArgument8,
                                                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GALGAS_routineDeclarationList & ioArgument0,
                                                                                        C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extern C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'pic18BootloaderSpecificationAnalysis'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_pic_31__38_BootloaderSpecificationAnalysis (const class GALGAS_string constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         const class GALGAS_lstring constinArgument2,
                                                         const class GALGAS_routineDeclarationList constinArgument3,
                                                         const class GALGAS_bootloaderReservedRAMmap constinArgument4,
                                                         const class GALGAS_luint constinArgument5,
                                                         const class GALGAS_routineDeclarationList constinArgument6,
                                                         const class GALGAS_ramDefinitionList constinArgument7,
                                                         class GALGAS_string & outArgument8,
                                                         class GALGAS_piccoloDeviceModel & outArgument9,
                                                         class GALGAS_uint & outArgument10,
                                                         class GALGAS_ramBankTable & outArgument11,
                                                         class GALGAS_registerTable & outArgument12,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

#endif
