#ifndef list_2D_midrange_5F_routineDefinitionList_1_DEFINED
#define list_2D_midrange_5F_routineDefinitionList_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @midrange_routineDefinitionList list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_midrange_5F_routineDefinitionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_midrange_5F_routineDefinitionList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_midrange_5F_routineDefinitionList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mRoutineName,
                                                  const class GALGAS_luint & in_mPage,
                                                  const class GALGAS_luint & in_mRequiredBank,
                                                  const class GALGAS_luint & in_mReturnedBank,
                                                  const class GALGAS_bool & in_mPreservesBank,
                                                  const class GALGAS_bool & in_mIsNoReturn,
                                                  const class GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                  const class GALGAS_location & in_mEndOfRoutineLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_midrange_5F_routineDefinitionList extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_midrange_5F_routineDefinitionList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_midrange_5F_routineDefinitionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_luint & inOperand1,
                                                                                      const class GALGAS_luint & inOperand2,
                                                                                      const class GALGAS_luint & inOperand3,
                                                                                      const class GALGAS_bool & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5,
                                                                                      const class GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                      const class GALGAS_location & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_midrange_5F_routineDefinitionList inOperand
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_luint & inOperand1,
                                                      const class GALGAS_luint & inOperand2,
                                                      const class GALGAS_luint & inOperand3,
                                                      const class GALGAS_bool & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_midrange_5F_instructionList & inOperand6,
                                                      const class GALGAS_location & inOperand7
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- . (concat) operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_routineDefinitionList operator_concat (const GALGAS_midrange_5F_routineDefinitionList & inOperand
                                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_midrange_5F_routineDefinitionList add_operation (const GALGAS_midrange_5F_routineDefinitionList & inOperand,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void modifier_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_luint constinArgument1,
                                                         class GALGAS_luint constinArgument2,
                                                         class GALGAS_luint constinArgument3,
                                                         class GALGAS_bool constinArgument4,
                                                         class GALGAS_bool constinArgument5,
                                                         class GALGAS_midrange_5F_instructionList constinArgument6,
                                                         class GALGAS_location constinArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popFirst (class GALGAS_lstring & outArgument0,
                                                    class GALGAS_luint & outArgument1,
                                                    class GALGAS_luint & outArgument2,
                                                    class GALGAS_luint & outArgument3,
                                                    class GALGAS_bool & outArgument4,
                                                    class GALGAS_bool & outArgument5,
                                                    class GALGAS_midrange_5F_instructionList & outArgument6,
                                                    class GALGAS_location & outArgument7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_popLast (class GALGAS_lstring & outArgument0,
                                                   class GALGAS_luint & outArgument1,
                                                   class GALGAS_luint & outArgument2,
                                                   class GALGAS_luint & outArgument3,
                                                   class GALGAS_bool & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_midrange_5F_instructionList & outArgument6,
                                                   class GALGAS_location & outArgument7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void modifier_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_luint & outArgument1,
                                                         class GALGAS_luint & outArgument2,
                                                         class GALGAS_luint & outArgument3,
                                                         class GALGAS_bool & outArgument4,
                                                         class GALGAS_bool & outArgument5,
                                                         class GALGAS_midrange_5F_instructionList & outArgument6,
                                                         class GALGAS_location & outArgument7,
                                                         class GALGAS_uint constinArgument8,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_luint & outArgument1,
                                               class GALGAS_luint & outArgument2,
                                               class GALGAS_luint & outArgument3,
                                               class GALGAS_bool & outArgument4,
                                               class GALGAS_bool & outArgument5,
                                               class GALGAS_midrange_5F_instructionList & outArgument6,
                                               class GALGAS_location & outArgument7,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_luint & outArgument1,
                                              class GALGAS_luint & outArgument2,
                                              class GALGAS_luint & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_bool & outArgument5,
                                              class GALGAS_midrange_5F_instructionList & outArgument6,
                                              class GALGAS_location & outArgument7,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location reader_mEndOfRoutineLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_instructionList reader_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsNoReturnAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint reader_mPageAtIndex (const class GALGAS_uint & constinOperand0,
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

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList reader_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_midrange_5F_routineDefinitionList reader_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_midrange_5F_routineDefinitionList ;
 
} ; // End of GALGAS_midrange_5F_routineDefinitionList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                    *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_midrange_5F_routineDefinitionList : public cGenericAbstractEnumerator {
  public : cEnumerator_midrange_5F_routineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mPage (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mRequiredBank (LOCATION_ARGS) const ;
  public : class GALGAS_luint current_mReturnedBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mPreservesBank (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsNoReturn (LOCATION_ARGS) const ;
  public : class GALGAS_midrange_5F_instructionList current_mInstructionList (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mEndOfRoutineLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_midrange_5F_routineDefinitionList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

