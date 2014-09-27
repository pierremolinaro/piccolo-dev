#ifndef list_2D_midrange_5F_interruptDefinitionList_1_DEFINED
#define list_2D_midrange_5F_interruptDefinitionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @midrange_interruptDefinitionList list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_interruptDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_interruptDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_interruptDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_location & in_mInterruptLocation,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_lstring & in_mFirstSaveRegister,
                                                  const class GALGAS_lstring & in_mSecondSaveRegister,
                                                  const class GALGAS_location & in_mEndOfInterruptLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_interruptDefinitionList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_interruptDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_interruptDefinitionList constructor_listWithValue (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                        const class GALGAS_lstring & inOperand3,
                                                                                        const class GALGAS_location & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_midrange_5F_interruptDefinitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_location & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_interruptDefinitionList operator_concat (const GALGAS_midrange_5F_interruptDefinitionList & inOperand
                                                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_interruptDefinitionList add_operation (const GALGAS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_location constinArgument0,
                                                         class GALGAS_midrange_5F_instructionList constinArgument1,
                                                         class GALGAS_lstring constinArgument2,
                                                         class GALGAS_lstring constinArgument3,
                                                         class GALGAS_location constinArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_location & outArgument0,
                                                    class GALGAS_midrange_5F_instructionList & outArgument1,
                                                    class GALGAS_lstring & outArgument2,
                                                    class GALGAS_lstring & outArgument3,
                                                    class GALGAS_location & outArgument4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_location & outArgument0,
                                                   class GALGAS_midrange_5F_instructionList & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_location & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_location & outArgument0,
                                                         class GALGAS_midrange_5F_instructionList & outArgument1,
                                                         class GALGAS_lstring & outArgument2,
                                                         class GALGAS_lstring & outArgument3,
                                                         class GALGAS_location & outArgument4,
                                                         class GALGAS_uint constinArgument5,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                               class GALGAS_midrange_5F_instructionList & outArgument1,
                                               class GALGAS_lstring & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               class GALGAS_location & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                              class GALGAS_midrange_5F_instructionList & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mFirstSaveRegisterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mInterruptLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mSecondSaveRegisterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_interruptDefinitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_interruptDefinitionList ;
 
} ; // End of GALGAS_midrange_5F_interruptDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_interruptDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_interruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_location current_mInterruptLocation (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFirstSaveRegister (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSecondSaveRegister (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfInterruptLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_interruptDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

