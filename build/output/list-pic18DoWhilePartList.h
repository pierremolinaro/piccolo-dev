#ifndef list_2D_pic_31__38_DoWhilePartList_1_DEFINED
#define list_2D_pic_31__38_DoWhilePartList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

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

#endif

