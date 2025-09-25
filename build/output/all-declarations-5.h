#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_checkpicList final {
  public: DownEnumerator_checkpicList (const class GGS_checkpicList & inList) ;

  public: ~ DownEnumerator_checkpicList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkpicList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_checkpicList (const DownEnumerator_checkpicList &) = delete ;
  private: DownEnumerator_checkpicList & operator = (const DownEnumerator_checkpicList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_checkpicList final {
  public: UpEnumerator_checkpicList (const class GGS_checkpicList & inList)  ;

  public: ~ UpEnumerator_checkpicList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mErrorLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkpicList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkpicList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_checkpicList (const UpEnumerator_checkpicList &) = delete ;
  private: UpEnumerator_checkpicList & operator = (const UpEnumerator_checkpicList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @checkpicList list
//--------------------------------------------------------------------------------------------------

class GGS_checkpicList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_checkpicList_2E_element> mArray ;

//--- Default constructor
  public: GGS_checkpicList (void) ;

//--- Destructor
  public: virtual ~ GGS_checkpicList (void) = default ;

//--- Copy
  public: GGS_checkpicList (const GGS_checkpicList &) = default ;
  public: GGS_checkpicList & operator = (const GGS_checkpicList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_checkpicList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_checkpicList subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_checkpicList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mErrorLocation,
                                                 const class GGS_lstringlist & in_mValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkpicList init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkpicList extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkpicList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_checkpicList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                  const class GGS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_checkpicList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_lstringlist & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_checkpicList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_checkpicList add_operation (const GGS_checkpicList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GGS_location constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueListAtIndex (class GGS_lstringlist constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mErrorLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_checkpicList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_checkpicList ;
  friend class DownEnumerator_checkpicList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkpicList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkpicList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_checkpicList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mErrorLocation ;
  public: inline GGS_location readProperty_mErrorLocation (void) const {
    return mProperty_mErrorLocation ;
  }

  public: GGS_lstringlist mProperty_mValueList ;
  public: inline GGS_lstringlist readProperty_mValueList (void) const {
    return mProperty_mValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_checkpicList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMErrorLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorLocation = inValue ;
  }

  public: inline void setter_setMValueList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValueList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_checkpicList_2E_element (const GGS_location & in_mErrorLocation,
                                       const GGS_lstringlist & in_mValueList) ;

//--------------------------------- Copy constructor
  public: GGS_checkpicList_2E_element (const GGS_checkpicList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_checkpicList_2E_element & operator = (const GGS_checkpicList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkpicList_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                           const class GGS_lstringlist & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkpicList_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkpicList_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                   const class GGS_lstringlist & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkpicList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18RegisterComparison mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_pic_31__38_RegisterComparison & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch condition' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_condition (const class GGS_conditional_5F_branch & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@pic18InstructionWithNoOperandKind assemblyCode' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_assemblyCode (const class GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@FA_instruction_base_code mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_FA_5F_instruction_5F_base_5F_code & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@bit_oriented_op mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_bit_5F_oriented_5F_op & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@conditional_branch mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_conditional_5F_branch & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@literal_instruction_opcode mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_literal_5F_instruction_5F_opcode & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@tableAccessOption mnemonic' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_mnemonic (const class GGS_tableAccessOption & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_ (class GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_block_5F_termination_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GGS_lstringlist & ioArgument3,
                                    class GGS_lstringlist & ioArgument4,
                                    class GGS_ramDefinitionList & ioArgument5,
                                    class GGS_lstringlist & ioArgument6,
                                    class GGS_configDefinitionList & ioArgument7,
                                    class GGS_constantDefinitionList & ioArgument8,
                                    class GGS_checkpicList & ioArgument9,
                                    class GGS_dataList & ioArgument10,
                                    class GGS_bool & ioArgument11,
                                    class GGS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_ (class GGS_checkpicList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_checkpic_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_ (class GGS_pic_31__38_ConditionExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_ (class GGS_dataList & ioArgument0,
                                                  class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_data_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_ (class GGS_pic_31__38_InstructionList & outArgument0,
                                                   class GGS_bool & ioArgument1,
                                                   class GGS_bool & ioArgument2,
                                                   class GGS_labelMap & ioArgument3,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       class GGS_bool & ioArgument1,
                                                       class GGS_bool & ioArgument2,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_ (class GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                     class GGS_bool & ioArgument1,
                                                     class GGS_bool & ioArgument2,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_ (class GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                               class GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_bool & ioArgument3,
                                                               class GGS_labelMap & ioArgument4,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_ (class GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                         class GGS_bool & ioArgument1,
                                                         class GGS_bool & ioArgument2,
                                                         class GGS_labelMap & ioArgument3,
                                                         class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_syntax_body_i0_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                       GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                       GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                       GGS_lstringlist & ioArgument3,
                                                       GGS_lstringlist & ioArgument4,
                                                       GGS_ramDefinitionList & ioArgument5,
                                                       GGS_lstringlist & ioArgument6,
                                                       GGS_configDefinitionList & ioArgument7,
                                                       GGS_constantDefinitionList & ioArgument8,
                                                       GGS_checkpicList & ioArgument9,
                                                       GGS_dataList & ioArgument10,
                                                       GGS_bool & ioArgument11,
                                                       GGS_bool & ioArgument12,
                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_body_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_ (GGS_checkpicList & ioArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_checkpic_5F_definition_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_ (GGS_dataList & ioArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_data_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                                      GGS_bool & ioArgument1,
                                                                      GGS_bool & ioArgument2,
                                                                      GGS_labelMap & ioArgument3,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_instruction_5F_list_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                                          GGS_bool & ioArgument1,
                                                                          GGS_bool & ioArgument2,
                                                                          Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_interrupt_5F_definition_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                                        GGS_bool & ioArgument1,
                                                                        GGS_bool & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_routine_5F_definition_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_block_5F_termination_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                                             GGS_bool & ioArgument1,
                                                                             GGS_bool & ioArgument2,
                                                                             GGS_labelMap & ioArgument3,
                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_instruction_i15_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_ (const GGS_lstring constinArgument0,
                                                                                   GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   GGS_bool & ioArgument3,
                                                                                   GGS_labelMap & ioArgument4,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_structured_5F_if_5F_instruction_i16_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_syntax_simple_5F_instruction_i17_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_Instruction_5F_switch : public GGS_pic_31__38_PiccoloInstruction {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_Instruction_5F_switch (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_Instruction_5F_switch (const class cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_pic_31__38_SwitchInstructionCaseList readProperty_mCaseList (void) const ;

  public: class GGS_location readProperty_mElseBranchStartLocation (void) const ;

  public: class GGS_pic_31__38_InstructionList readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_Instruction_5F_switch init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_Instruction_5F_switch extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_Instruction_5F_switch class_func_new (const class GGS_location & inOperand0,
                                                                            const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                            const class GGS_location & inOperand2,
                                                                            const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SwitchInstructionCaseList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList) ;

  public: ~ DownEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: DownEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const DownEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_SwitchInstructionCaseList final {
  public: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const class GGS_pic_31__38_SwitchInstructionCaseList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_SwitchInstructionCaseList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mStartOfCase (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_CaseExpressionList current_mCaseExpressionList (LOCATION_ARGS) const ;
  public: class GGS_pic_31__38_InstructionList current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_SwitchInstructionCaseList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
  private: UpEnumerator_pic_31__38_SwitchInstructionCaseList & operator = (const UpEnumerator_pic_31__38_SwitchInstructionCaseList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18SwitchInstructionCaseList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SwitchInstructionCaseList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_SwitchInstructionCaseList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_SwitchInstructionCaseList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;
  public: GGS_pic_31__38_SwitchInstructionCaseList & operator = (const GGS_pic_31__38_SwitchInstructionCaseList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_SwitchInstructionCaseList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_SwitchInstructionCaseList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mStartOfCase,
                                                 const class GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                 const class GGS_pic_31__38_InstructionList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SwitchInstructionCaseList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SwitchInstructionCaseList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_SwitchInstructionCaseList class_func_listWithValue (const class GGS_location & inOperand0,
                                                                                          const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                          const class GGS_pic_31__38_InstructionList & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_location & inOperand0,
                                                    const class GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                    const class GGS_pic_31__38_InstructionList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_SwitchInstructionCaseList add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                               class GGS_pic_31__38_InstructionList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList constinArgument1,
                                                      class GGS_pic_31__38_InstructionList constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                 class GGS_pic_31__38_InstructionList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                class GGS_pic_31__38_InstructionList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                                      class GGS_pic_31__38_InstructionList & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseExpressionListAtIndex (class GGS_pic_31__38_CaseExpressionList constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GGS_pic_31__38_InstructionList constinArgument0,
                                                                   class GGS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartOfCaseAtIndex (class GGS_location constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                              class GGS_pic_31__38_InstructionList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             class GGS_pic_31__38_CaseExpressionList & outArgument1,
                                             class GGS_pic_31__38_InstructionList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_mCaseExpressionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_InstructionList getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mStartOfCaseAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_SwitchInstructionCaseList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_SwitchInstructionCaseList ;
  friend class DownEnumerator_pic_31__38_SwitchInstructionCaseList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_Instruction_5F_switch : public cPtr_pic_31__38_PiccoloInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                      const class GGS_pic_31__38_SwitchInstructionCaseList & inOperand1,
                                                                      const class GGS_location & inOperand2,
                                                                      const class GGS_pic_31__38_InstructionList & inOperand3,
                                                                      Compiler * inCompiler) ;


//--- Extension method addUsedRoutines
  public: virtual void method_addUsedRoutines (const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_stringset & arg_ioUsedRoutines,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method analyze
  public: virtual void method_analyze (const class GGS_uint arg_inAccessBankSplitOffset,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           const class GGS_routineMap arg_inRoutineMap,
           const class GGS_registerTable arg_inRegisterTable,
           const class GGS_pic_31__38__5F_dataMap arg_inDataMap,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_pic_31__38_MacroMap arg_inMacroMap,
           class GGS_uint & arg_ioLocalLabelIndex,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_string & arg_ioListFileContents,
           class GGS_uint & arg_ioCurrentBank,
           const class GGS_bool arg_inShouldPreserveBSR,
           const class GGS_routineKind arg_inRoutineKind,
           class GGS_stringset & arg_ioUsedRegisters,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_pic_31__38_SwitchInstructionCaseList mProperty_mCaseList ;
  public: GGS_location mProperty_mElseBranchStartLocation ;
  public: GGS_pic_31__38_InstructionList mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                 const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                 const GGS_location & in_mElseBranchStartLocation,
                                                 const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_IntervalCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_IntervalCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_IntervalCaseItem (const class cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mMinExpression (void) const ;

  public: class GGS_immediatExpression readProperty_mMaxExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_IntervalCaseItem init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                   const class GGS_immediatExpression & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_IntervalCaseItem extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_IntervalCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                       const class GGS_immediatExpression & inOperand1,
                                                                       const class GGS_location & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_IntervalCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_IntervalCaseItem_init_21__21__21_ (const class GGS_immediatExpression & inOperand0,
                                                             const class GGS_immediatExpression & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mMinExpression ;
  public: GGS_immediatExpression mProperty_mMaxExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                            const GGS_immediatExpression & in_mMaxExpression,
                                            const GGS_location & in_mCaseExpressionLocation,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_SimpleConstantCaseItem : public GGS_pic_31__38_AbstractCaseItem {
//--------------------------------- Default constructor
  public: GGS_pic_31__38_SimpleConstantCaseItem (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_pic_31__38_SimpleConstantCaseItem (const class cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_immediatExpression readProperty_mCaseExpression (void) const ;

  public: class GGS_location readProperty_mCaseExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_SimpleConstantCaseItem init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_SimpleConstantCaseItem extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_SimpleConstantCaseItem class_func_new (const class GGS_immediatExpression & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

class cPtr_pic_31__38_SimpleConstantCaseItem : public cPtr_pic_31__38_AbstractCaseItem {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void pic_31__38_SimpleConstantCaseItem_init_21__21_ (const class GGS_immediatExpression & inOperand0,
                                                               const class GGS_location & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeCaseItem
  public: virtual void method_analyzeCaseItem (const class GGS_registerTable arg_inRegisterTable,
           const class GGS_constantMap arg_inConstantMap,
           const class GGS_lstring arg_inConditionTrueLabel,
           const class GGS_string arg_inIndexForLabels,
           class GGS_stringset & arg_ioUsedRegisters,
           class GGS_caseConstantMap & arg_ioCaseConstantMap,
           class GGS_ipic_31__38_SequentialInstructionList & arg_ioGeneratedInstructionList,
           class GGS_ipic_31__38_BlockList & arg_ioGeneratedBlockList,
           class GGS_lstring & arg_ioBlockLabel,
           class GGS_sint_36__34_ & arg_ioLastComparisonValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_immediatExpression mProperty_mCaseExpression ;
  public: GGS_location mProperty_mCaseExpressionLocation ;


//--- Default constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                  const GGS_location & in_mCaseExpressionLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'communs' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_communs {
//--- Virtual destructor
  public: virtual ~ cParser_communs (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                              class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_bitwise_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_ (class GGS_immediatExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_ (class GGS_immediatExpression & outArgument0,
                                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_primary_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_ (class GGS_immediatExpression & outArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_communs_configuration_5F_definition_i0_ (GGS_configDefinitionList & ioArgument0,
                                                                Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_configuration_5F_definition_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_ (GGS_declarationInRam & outArgument0,
                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_declaration_5F_in_5F_ram_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_ (GGS_ramDefinitionList & ioArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_ram_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_ (GGS_constantDefinitionList & ioArgument0,
                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_constant_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_ (GGS_immediatExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_expression_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_ (GGS_immediatExpression & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_term_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_ (GGS_immediatExpression & outArgument0,
                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_ (GGS_immediatExpression & outArgument0,
                                                      Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_term_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_ (GGS_immediatExpression & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_immediate_5F_primary_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_ (GGS_registerExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_register_5F_parsing_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i12_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_ (GGS_bitNumberExpression & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_bit_5F_number_5F_parsing_i13_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_ (GGS_bool & outArgument0,
                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_include_5F_grammar : public cParser_pic_31__38__5F_syntax,
                                                   public cParser_communs {
//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GGS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_body_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                 GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                 GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                 GGS_lstringlist & ioArgument3,
                                 GGS_lstringlist & ioArgument4,
                                 GGS_ramDefinitionList & ioArgument5,
                                 GGS_lstringlist & ioArgument6,
                                 GGS_configDefinitionList & ioArgument7,
                                 GGS_constantDefinitionList & ioArgument8,
                                 GGS_checkpicList & ioArgument9,
                                 GGS_dataList & ioArgument10,
                                 GGS_bool & ioArgument11,
                                 GGS_bool & ioArgument12,
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                  GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                  GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                  GGS_lstringlist & ioArgument3,
                                                  GGS_lstringlist & ioArgument4,
                                                  GGS_ramDefinitionList & ioArgument5,
                                                  GGS_lstringlist & ioArgument6,
                                                  GGS_configDefinitionList & ioArgument7,
                                                  GGS_constantDefinitionList & ioArgument8,
                                                  GGS_checkpicList & ioArgument9,
                                                  GGS_dataList & ioArgument10,
                                                  GGS_bool & ioArgument11,
                                                  GGS_bool & ioArgument12
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                                    GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                                    GGS_lstringlist & ioArgument3,
                                                    GGS_lstringlist & ioArgument4,
                                                    GGS_ramDefinitionList & ioArgument5,
                                                    GGS_lstringlist & ioArgument6,
                                                    GGS_configDefinitionList & ioArgument7,
                                                    GGS_constantDefinitionList & ioArgument8,
                                                    GGS_checkpicList & ioArgument9,
                                                    GGS_dataList & ioArgument10,
                                                    GGS_bool & ioArgument11,
                                                    GGS_bool & ioArgument12
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GGS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GGS_pic_31__38_ConditionExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GGS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GGS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GGS_dataList & ioArgument0,
                                               Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GGS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GGS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GGS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GGS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GGS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GGS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GGS_pic_31__38_InstructionList & outArgument0,
                                                GGS_bool & ioArgument1,
                                                GGS_bool & ioArgument2,
                                                GGS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GGS_bool & ioArgument1,
                                                    GGS_bool & ioArgument2,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GGS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GGS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GGS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GGS_bool & ioArgument1,
                                                  GGS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GGS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                            GGS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GGS_bool & ioArgument2,
                                                            GGS_bool & ioArgument3,
                                                            GGS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GGS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GGS_bool & ioArgument1,
                                                      GGS_bool & ioArgument2,
                                                      GGS_labelMap & ioArgument3,
                                                      Lexique_piccolo_5F_lexique * inCompiler) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_38 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_39 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_40 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_41 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_42 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_43 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_44 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_45 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_46 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_47 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_48 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_49 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_50 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_51 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_52 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_53 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_54 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_55 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_56 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_57 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_58 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_59 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_60 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_61 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_62 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_63 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_syntax_64 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_communs_20 (Lexique_piccolo_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_CaseExpressionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_pic_31__38_CaseExpressionList final {
  public: DownEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList) ;

  public: ~ DownEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_pic_31__38_CaseExpressionList (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: DownEnumerator_pic_31__38_CaseExpressionList & operator = (const DownEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_pic_31__38_CaseExpressionList final {
  public: UpEnumerator_pic_31__38_CaseExpressionList (const class GGS_pic_31__38_CaseExpressionList & inList)  ;

  public: ~ UpEnumerator_pic_31__38_CaseExpressionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_pic_31__38_AbstractCaseItem current_mCaseItem (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_pic_31__38_CaseExpressionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_pic_31__38_CaseExpressionList (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
  private: UpEnumerator_pic_31__38_CaseExpressionList & operator = (const UpEnumerator_pic_31__38_CaseExpressionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @pic18CaseExpressionList list
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_CaseExpressionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_pic_31__38_CaseExpressionList (void) ;

//--- Destructor
  public: virtual ~ GGS_pic_31__38_CaseExpressionList (void) = default ;

//--- Copy
  public: GGS_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList &) = default ;
  public: GGS_pic_31__38_CaseExpressionList & operator = (const GGS_pic_31__38_CaseExpressionList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_pic_31__38_CaseExpressionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_pic_31__38_CaseExpressionList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_CaseExpressionList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_CaseExpressionList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_CaseExpressionList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_pic_31__38_CaseExpressionList class_func_listWithValue (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_pic_31__38_CaseExpressionList add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCaseItemAtIndex (class GGS_pic_31__38_AbstractCaseItem constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_pic_31__38_AbstractCaseItem & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_AbstractCaseItem getter_mCaseItemAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_pic_31__38_CaseExpressionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_pic_31__38_CaseExpressionList ;
  friend class DownEnumerator_pic_31__38_CaseExpressionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_start_symbol' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) { }

//--- Non terminal declarations
  protected: virtual void nt_body_ (class GGS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                    class GGS_pic_31__38_RoutineDefinitionList & ioArgument1,
                                    class GGS_pic_31__38_MacroDefinitionList & ioArgument2,
                                    class GGS_lstringlist & ioArgument3,
                                    class GGS_lstringlist & ioArgument4,
                                    class GGS_ramDefinitionList & ioArgument5,
                                    class GGS_lstringlist & ioArgument6,
                                    class GGS_configDefinitionList & ioArgument7,
                                    class GGS_constantDefinitionList & ioArgument8,
                                    class GGS_checkpicList & ioArgument9,
                                    class GGS_dataList & ioArgument10,
                                    class GGS_bool & ioArgument11,
                                    class GGS_bool & ioArgument12,
                                    class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_body_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                                        GGS_string & outArgument1,
                                                                                                        GGS_uint & outArgument2,
                                                                                                        GGS_ramBankTable & outArgument3,
                                                                                                        GGS_registerTable & outArgument4,
                                                                                                        GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                                        GGS_routineDeclarationList & outArgument6,
                                                                                                        GGS_routineDeclarationList & outArgument7,
                                                                                                        GGS_luint & outArgument8,
                                                                                                        Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ramBankTable map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_ramBankTable final {

  public: DownEnumerator_ramBankTable (const class GGS_ramBankTable & inMap) ;

  public: ~ DownEnumerator_ramBankTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_uint current_mFirstAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;

  public: class GGS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;

  public: class GGS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;

  public: class GGS_ramBankTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ramBankTable (const DownEnumerator_ramBankTable &) = delete ;
  private: DownEnumerator_ramBankTable & operator = (const DownEnumerator_ramBankTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ramBankTable final {
  public: UpEnumerator_ramBankTable (const class GGS_ramBankTable & inMap)  ;

  public: ~ UpEnumerator_ramBankTable (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mFirstFreeAddress (LOCATION_ARGS) const ;
  public: class GGS_uint current_mLastAddressPlusOne (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mMirrorOffsetList (LOCATION_ARGS) const ;
  public: class GGS_ramBankTable_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ramBankTable (const UpEnumerator_ramBankTable &) = delete ;
  private: UpEnumerator_ramBankTable & operator = (const UpEnumerator_ramBankTable &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_ramBankTable : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_ramBankTable_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_ramBankTable (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_ramBankTable (void) ;

//--- Handle copy
  public: GGS_ramBankTable (const GGS_ramBankTable & inSource) ;
  public: GGS_ramBankTable & operator = (const GGS_ramBankTable & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_ramBankTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ramBankTable_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ramBankTable init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ramBankTable extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ramBankTable class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_ramBankTable class_func_mapWithMapToOverride (const class GGS_ramBankTable & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_uint constinArgument3,
                                                  class GGS_uintlist constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstAddressForKey (class GGS_uint constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFirstFreeAddressForKey (class GGS_uint constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLastAddressPlusOneForKey (class GGS_uint constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMirrorOffsetListForKey (class GGS_uintlist constinArgument0,
                                                                   class GGS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_uint & outArgument3,
                                                  class GGS_uintlist & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFirstAddressForKey (const class GGS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mFirstFreeAddressForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mLastAddressPlusOneForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mMirrorOffsetListForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_ramBankTable getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_ramBankTable_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ramBankTable ;
  friend class DownEnumerator_ramBankTable ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_3F__3F_ (const class GGS_pic_31__38_AST constinArgument0,
                                             const class GGS_string constinArgument1,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @pic_31__38_AST struct
//--------------------------------------------------------------------------------------------------

class GGS_pic_31__38_AST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_programKind mProperty_mProgramKind ;
  public: inline GGS_programKind readProperty_mProgramKind (void) const {
    return mProperty_mProgramKind ;
  }

  public: GGS_lstring mProperty_mDeviceNameOrBootLoaderReference ;
  public: inline GGS_lstring readProperty_mDeviceNameOrBootLoaderReference (void) const {
    return mProperty_mDeviceNameOrBootLoaderReference ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_checkpicList mProperty_mCheckpicList ;
  public: inline GGS_checkpicList readProperty_mCheckpicList (void) const {
    return mProperty_mCheckpicList ;
  }

  public: GGS_dataList mProperty_mDataList ;
  public: inline GGS_dataList readProperty_mDataList (void) const {
    return mProperty_mDataList ;
  }

  public: GGS_pic_31__38_InterruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GGS_pic_31__38_InterruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_pic_31__38_RoutineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_pic_31__38_RoutineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_pic_31__38_MacroDefinitionList mProperty_mMacroDefinitionList ;
  public: inline GGS_pic_31__38_MacroDefinitionList readProperty_mMacroDefinitionList (void) const {
    return mProperty_mMacroDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_lstringlist mProperty_mInlinedRoutineList ;
  public: inline GGS_lstringlist readProperty_mInlinedRoutineList (void) const {
    return mProperty_mInlinedRoutineList ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_pic_31__38_AST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMProgramKind (const GGS_programKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramKind = inValue ;
  }

  public: inline void setter_setMDeviceNameOrBootLoaderReference (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceNameOrBootLoaderReference = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMCheckpicList (const GGS_checkpicList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckpicList = inValue ;
  }

  public: inline void setter_setMDataList (const GGS_dataList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDataList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMMacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMacroDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMInlinedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInlinedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_pic_31__38_AST (const GGS_lstring & in_mProgramName,
                              const GGS_programKind & in_mProgramKind,
                              const GGS_lstring & in_mDeviceNameOrBootLoaderReference,
                              const GGS_configDefinitionList & in_mConfigDefinitionList,
                              const GGS_ramDefinitionList & in_mRamDefinitionList,
                              const GGS_lstringlist & in_mUnusedRegisterList,
                              const GGS_checkpicList & in_mCheckpicList,
                              const GGS_dataList & in_mDataList,
                              const GGS_pic_31__38_InterruptDefinitionList & in_mInterruptDefinitionList,
                              const GGS_constantDefinitionList & in_mConstantDefinitionList,
                              const GGS_pic_31__38_RoutineDefinitionList & in_mRoutineDefinitionList,
                              const GGS_pic_31__38_MacroDefinitionList & in_mMacroDefinitionList,
                              const GGS_lstringlist & in_mUnusedRoutineList,
                              const GGS_lstringlist & in_mInlinedRoutineList,
                              const GGS_bool & in_mNeedsComputedGoto_32_,
                              const GGS_bool & in_mNeedsComputedGoto_34_,
                              const GGS_location & in_mEndOfProgram) ;

//--------------------------------- Copy constructor
  public: GGS_pic_31__38_AST (const GGS_pic_31__38_AST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_pic_31__38_AST & operator = (const GGS_pic_31__38_AST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_pic_31__38_AST init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                              const class GGS_programKind & inOperand1,
                                                                                                              const class GGS_lstring & inOperand2,
                                                                                                              const class GGS_configDefinitionList & inOperand3,
                                                                                                              const class GGS_ramDefinitionList & inOperand4,
                                                                                                              const class GGS_lstringlist & inOperand5,
                                                                                                              const class GGS_checkpicList & inOperand6,
                                                                                                              const class GGS_dataList & inOperand7,
                                                                                                              const class GGS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                                                                              const class GGS_constantDefinitionList & inOperand9,
                                                                                                              const class GGS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                                                                              const class GGS_pic_31__38_MacroDefinitionList & inOperand11,
                                                                                                              const class GGS_lstringlist & inOperand12,
                                                                                                              const class GGS_lstringlist & inOperand13,
                                                                                                              const class GGS_bool & inOperand14,
                                                                                                              const class GGS_bool & inOperand15,
                                                                                                              const class GGS_location & inOperand16,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_pic_31__38_AST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_pic_31__38_AST class_func_new (const class GGS_lstring & inOperand0,
                                                          const class GGS_programKind & inOperand1,
                                                          const class GGS_lstring & inOperand2,
                                                          const class GGS_configDefinitionList & inOperand3,
                                                          const class GGS_ramDefinitionList & inOperand4,
                                                          const class GGS_lstringlist & inOperand5,
                                                          const class GGS_checkpicList & inOperand6,
                                                          const class GGS_dataList & inOperand7,
                                                          const class GGS_pic_31__38_InterruptDefinitionList & inOperand8,
                                                          const class GGS_constantDefinitionList & inOperand9,
                                                          const class GGS_pic_31__38_RoutineDefinitionList & inOperand10,
                                                          const class GGS_pic_31__38_MacroDefinitionList & inOperand11,
                                                          const class GGS_lstringlist & inOperand12,
                                                          const class GGS_lstringlist & inOperand13,
                                                          const class GGS_bool & inOperand14,
                                                          const class GGS_bool & inOperand15,
                                                          const class GGS_location & inOperand16,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AST ;

//--------------------------------------------------------------------------------------------------
//   enum processorType
//--------------------------------------------------------------------------------------------------

class GGS_processorType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_processorType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_pic_31__38__5F__36__30_,
    enum_pic_31__38__5F__38__30_,
    enum_midrange,
    enum_baseline
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
  public: static GGS_processorType extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_processorType class_func_baseline (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_midrange (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__36__30_ (LOCATION_ARGS) ;

  public: static class GGS_processorType class_func_pic_31__38__5F__38__30_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBaseline (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMidrange (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPic_31__38__5F__36__30_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPic_31__38__5F__38__30_ (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_processorType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configRegisterMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_configRegisterMap final {

  public: DownEnumerator_configRegisterMap (const class GGS_configRegisterMap & inMap) ;

  public: ~ DownEnumerator_configRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_luint current_mRegisterAddress (LOCATION_ARGS) const ;

  public: class GGS_luint current_mRegisterWidth (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;

  public: class GGS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;

  public: class GGS_configRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_configRegisterMap (const DownEnumerator_configRegisterMap &) = delete ;
  private: DownEnumerator_configRegisterMap & operator = (const DownEnumerator_configRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_configRegisterMap final {
  public: UpEnumerator_configRegisterMap (const class GGS_configRegisterMap & inMap)  ;

  public: ~ UpEnumerator_configRegisterMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterAddress (LOCATION_ARGS) const ;
  public: class GGS_luint current_mRegisterWidth (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMaskMap current_mConfigRegisterMaskMap (LOCATION_ARGS) const ;
  public: class GGS_illegalMaskList current_mIllegalMaskList (LOCATION_ARGS) const ;
  public: class GGS_configRegisterMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_configRegisterMap (const UpEnumerator_configRegisterMap &) = delete ;
  private: UpEnumerator_configRegisterMap & operator = (const UpEnumerator_configRegisterMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_configRegisterMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_configRegisterMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_configRegisterMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_configRegisterMap (void) ;

//--- Handle copy
  public: GGS_configRegisterMap (const GGS_configRegisterMap & inSource) ;
  public: GGS_configRegisterMap & operator = (const GGS_configRegisterMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_configRegisterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_configRegisterMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configRegisterMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configRegisterMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configRegisterMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_configRegisterMap class_func_mapWithMapToOverride (const class GGS_configRegisterMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint constinArgument1,
                                                  class GGS_luint constinArgument2,
                                                  class GGS_configRegisterMaskMap constinArgument3,
                                                  class GGS_illegalMaskList constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConfigRegisterMaskMapForKey (class GGS_configRegisterMaskMap constinArgument0,
                                                                        class GGS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIllegalMaskListForKey (class GGS_illegalMaskList constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterAddressForKey (class GGS_luint constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRegisterWidthForKey (class GGS_luint constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_luint & outArgument1,
                                                  class GGS_luint & outArgument2,
                                                  class GGS_configRegisterMaskMap & outArgument3,
                                                  class GGS_illegalMaskList & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMaskMap getter_mConfigRegisterMaskMapForKey (const class GGS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_illegalMaskList getter_mIllegalMaskListForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRegisterAddressForKey (const class GGS_string & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_luint getter_mRegisterWidthForKey (const class GGS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_configRegisterMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_configRegisterMap ;
  friend class DownEnumerator_configRegisterMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @piccoloDeviceModel struct
//--------------------------------------------------------------------------------------------------

class GGS_piccoloDeviceModel : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_processorType mProperty_mProcessorType ;
  public: inline GGS_processorType readProperty_mProcessorType (void) const {
    return mProperty_mProcessorType ;
  }

  public: GGS_luint mProperty_mRomSize ;
  public: inline GGS_luint readProperty_mRomSize (void) const {
    return mProperty_mRomSize ;
  }

  public: GGS_luint mProperty_mBankCount ;
  public: inline GGS_luint readProperty_mBankCount (void) const {
    return mProperty_mBankCount ;
  }

  public: GGS_registerTable mProperty_mRegisterTable ;
  public: inline GGS_registerTable readProperty_mRegisterTable (void) const {
    return mProperty_mRegisterTable ;
  }

  public: GGS_ramBankTable mProperty_mRamBankTable ;
  public: inline GGS_ramBankTable readProperty_mRamBankTable (void) const {
    return mProperty_mRamBankTable ;
  }

  public: GGS_uint mProperty_mEepromSize ;
  public: inline GGS_uint readProperty_mEepromSize (void) const {
    return mProperty_mEepromSize ;
  }

  public: GGS_uint mProperty_mEepromAddress ;
  public: inline GGS_uint readProperty_mEepromAddress (void) const {
    return mProperty_mEepromAddress ;
  }

  public: GGS_configRegisterMap mProperty_mConfigRegisterMap ;
  public: inline GGS_configRegisterMap readProperty_mConfigRegisterMap (void) const {
    return mProperty_mConfigRegisterMap ;
  }

  public: GGS_string mProperty_mSharedBankName ;
  public: inline GGS_string readProperty_mSharedBankName (void) const {
    return mProperty_mSharedBankName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_piccoloDeviceModel (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMProcessorType (const GGS_processorType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcessorType = inValue ;
  }

  public: inline void setter_setMRomSize (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRomSize = inValue ;
  }

  public: inline void setter_setMBankCount (const GGS_luint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBankCount = inValue ;
  }

  public: inline void setter_setMRegisterTable (const GGS_registerTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterTable = inValue ;
  }

  public: inline void setter_setMRamBankTable (const GGS_ramBankTable & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamBankTable = inValue ;
  }

  public: inline void setter_setMEepromSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromSize = inValue ;
  }

  public: inline void setter_setMEepromAddress (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEepromAddress = inValue ;
  }

  public: inline void setter_setMConfigRegisterMap (const GGS_configRegisterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigRegisterMap = inValue ;
  }

  public: inline void setter_setMSharedBankName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSharedBankName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_piccoloDeviceModel (const GGS_lstring & in_mDeviceName,
                                  const GGS_processorType & in_mProcessorType,
                                  const GGS_luint & in_mRomSize,
                                  const GGS_luint & in_mBankCount,
                                  const GGS_registerTable & in_mRegisterTable,
                                  const GGS_ramBankTable & in_mRamBankTable,
                                  const GGS_uint & in_mEepromSize,
                                  const GGS_uint & in_mEepromAddress,
                                  const GGS_configRegisterMap & in_mConfigRegisterMap,
                                  const GGS_string & in_mSharedBankName) ;

//--------------------------------- Copy constructor
  public: GGS_piccoloDeviceModel (const GGS_piccoloDeviceModel & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_piccoloDeviceModel & operator = (const GGS_piccoloDeviceModel & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_piccoloDeviceModel init_21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_processorType & inOperand1,
                                                                                      const class GGS_luint & inOperand2,
                                                                                      const class GGS_luint & inOperand3,
                                                                                      const class GGS_registerTable & inOperand4,
                                                                                      const class GGS_ramBankTable & inOperand5,
                                                                                      const class GGS_uint & inOperand6,
                                                                                      const class GGS_uint & inOperand7,
                                                                                      const class GGS_configRegisterMap & inOperand8,
                                                                                      const class GGS_string & inOperand9,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_piccoloDeviceModel extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_piccoloDeviceModel class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_processorType & inOperand1,
                                                              const class GGS_luint & inOperand2,
                                                              const class GGS_luint & inOperand3,
                                                              const class GGS_registerTable & inOperand4,
                                                              const class GGS_ramBankTable & inOperand5,
                                                              const class GGS_uint & inOperand6,
                                                              const class GGS_uint & inOperand7,
                                                              const class GGS_configRegisterMap & inOperand8,
                                                              const class GGS_string & inOperand9,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'midrange_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_midrange_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_midrange_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_ (class GGS_declarationInRam & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_5F_in_5F_ram_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_ (class GGS_midrange_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_ (class GGS_midrange_5F_instructionList & outArgument0,
                                                               class GGS_bool & ioArgument1,
                                                               class GGS_bool & ioArgument2,
                                                               class GGS_labelMap & ioArgument3,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_ (class GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                   class GGS_bool & ioArgument1,
                                                                   class GGS_bool & ioArgument2,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_ (class GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                 class GGS_bool & ioArgument1,
                                                                 class GGS_bool & ioArgument2,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_midrange_5F_instruction & outArgument1,
                                                                           class GGS_bool & ioArgument2,
                                                                           class GGS_bool & ioArgument3,
                                                                           class GGS_labelMap & ioArgument4,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_ (class GGS_midrange_5F_instruction & outArgument0,
                                                                     class GGS_bool & ioArgument1,
                                                                     class GGS_bool & ioArgument2,
                                                                     class GGS_labelMap & ioArgument3,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_midrange_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                            GGS_string & outArgument1,
                                                                                            GGS_uint & outArgument2,
                                                                                            GGS_ramBankTable & outArgument3,
                                                                                            GGS_registerTable & outArgument4,
                                                                                            GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                            GGS_routineDeclarationList & outArgument6,
                                                                                            GGS_routineDeclarationList & outArgument7,
                                                                                            GGS_luint & outArgument8,
                                                                                            Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GGS_midrange_5F_instructionList & outArgument0,
                                                                               GGS_bool & ioArgument1,
                                                                               GGS_bool & ioArgument2,
                                                                               GGS_labelMap & ioArgument3,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GGS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                                   GGS_bool & ioArgument1,
                                                                                   GGS_bool & ioArgument2,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GGS_midrange_5F_routineDefinitionList & ioArgument0,
                                                                                 GGS_bool & ioArgument1,
                                                                                 GGS_bool & ioArgument2,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                     GGS_bool & ioArgument1,
                                                                                     GGS_bool & ioArgument2,
                                                                                     GGS_labelMap & ioArgument3,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GGS_lstring constinArgument0,
                                                                                           GGS_midrange_5F_instruction & outArgument1,
                                                                                           GGS_bool & ioArgument2,
                                                                                           GGS_bool & ioArgument3,
                                                                                           GGS_labelMap & ioArgument4,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GGS_midrange_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GGS_midrange_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_midrange_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_33 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_34 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_35 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_36 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_midrange_5F_syntax_37 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const class GGS_midrange_5F_model constinArgument0,
                                          const class GGS_string constinArgument1,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @midrange_5F_model struct
//--------------------------------------------------------------------------------------------------

class GGS_midrange_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_midrange_5F_interruptDefinitionList mProperty_mInterruptDefinitionList ;
  public: inline GGS_midrange_5F_interruptDefinitionList readProperty_mInterruptDefinitionList (void) const {
    return mProperty_mInterruptDefinitionList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_midrange_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_midrange_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_32_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_32_ (void) const {
    return mProperty_mNeedsComputedGoto_32_ ;
  }

  public: GGS_bool mProperty_mNeedsComputedGoto_34_ ;
  public: inline GGS_bool readProperty_mNeedsComputedGoto_34_ (void) const {
    return mProperty_mNeedsComputedGoto_34_ ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_midrange_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMInterruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptDefinitionList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_midrange_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_32_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_32_ = inValue ;
  }

  public: inline void setter_setMNeedsComputedGoto_34_ (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsComputedGoto_34_ = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_midrange_5F_model (const GGS_lstring & in_mProgramName,
                                 const GGS_lstring & in_mDeviceName,
                                 const GGS_configDefinitionList & in_mConfigDefinitionList,
                                 const GGS_ramDefinitionList & in_mRamDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRegisterList,
                                 const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                 const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                 const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRoutineList,
                                 const GGS_bool & in_mNeedsComputedGoto_32_,
                                 const GGS_bool & in_mNeedsComputedGoto_34_,
                                 const GGS_location & in_mEndOfProgram) ;

//--------------------------------- Copy constructor
  public: GGS_midrange_5F_model (const GGS_midrange_5F_model & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_midrange_5F_model & operator = (const GGS_midrange_5F_model & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_midrange_5F_model init_21__21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_configDefinitionList & inOperand2,
                                                                                             const class GGS_ramDefinitionList & inOperand3,
                                                                                             const class GGS_lstringlist & inOperand4,
                                                                                             const class GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                                                                             const class GGS_constantDefinitionList & inOperand6,
                                                                                             const class GGS_midrange_5F_routineDefinitionList & inOperand7,
                                                                                             const class GGS_lstringlist & inOperand8,
                                                                                             const class GGS_bool & inOperand9,
                                                                                             const class GGS_bool & inOperand10,
                                                                                             const class GGS_location & inOperand11,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_midrange_5F_model extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_midrange_5F_model class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_configDefinitionList & inOperand2,
                                                             const class GGS_ramDefinitionList & inOperand3,
                                                             const class GGS_lstringlist & inOperand4,
                                                             const class GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                                             const class GGS_constantDefinitionList & inOperand6,
                                                             const class GGS_midrange_5F_routineDefinitionList & inOperand7,
                                                             const class GGS_lstringlist & inOperand8,
                                                             const class GGS_bool & inOperand9,
                                                             const class GGS_bool & inOperand10,
                                                             const class GGS_location & inOperand11,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_model ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_baseline_5F_condition_5F_expression_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GGS_baseline_5F_conditionExpression & outArgument0,
                                                             class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GGS_baseline_5F_instructionList & outArgument0,
                                                               class GGS_labelMap & ioArgument1,
                                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GGS_lstring constinArgument0,
                                                                           class GGS_baseline_5F_instruction & outArgument1,
                                                                           class GGS_labelMap & ioArgument2,
                                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GGS_baseline_5F_instruction & outArgument0,
                                                                     class GGS_labelMap & ioArgument1,
                                                                     class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GGS_bitNumberExpression & outArgument0,
                                                        class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GGS_configDefinitionList & ioArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GGS_constantDefinitionList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GGS_immediatExpression & outArgument0,
                                                       class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GGS_bool & outArgument0,
                                                           class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GGS_registerExpression & outArgument0,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class GGS_ramDefinitionList & ioArgument2,
                                               class GGS_lstringlist & ioArgument3,
                                               class GGS_configDefinitionList & ioArgument4,
                                               class GGS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GGS_lstringlist & ioArgument1,
                                                               GGS_ramDefinitionList & ioArgument2,
                                                               GGS_lstringlist & ioArgument3,
                                                               GGS_configDefinitionList & ioArgument4,
                                                               GGS_constantDefinitionList & ioArgument5,
                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GGS_baseline_5F_instructionList & outArgument0,
                                                                               GGS_labelMap & ioArgument1,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                     GGS_labelMap & ioArgument1,
                                                                                     Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GGS_lstring constinArgument0,
                                                                                           GGS_baseline_5F_instruction & outArgument1,
                                                                                           GGS_labelMap & ioArgument2,
                                                                                           Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GGS_baseline_5F_instruction & outArgument0,
                                                                                 Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                               Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                                   Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                              Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_program' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_program {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_program (void) { }

//--- Non terminal declarations
  protected: virtual void nt_section_5F_list_ (class GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GGS_lstringlist & ioArgument1,
                                               class GGS_ramDefinitionList & ioArgument2,
                                               class GGS_lstringlist & ioArgument3,
                                               class GGS_configDefinitionList & ioArgument4,
                                               class GGS_constantDefinitionList & ioArgument5,
                                               class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_program_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                             GGS_string & outArgument1,
                                                                                             GGS_uint & outArgument2,
                                                                                             GGS_ramBankTable & outArgument3,
                                                                                             GGS_registerTable & outArgument4,
                                                                                             GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GGS_routineDeclarationList & outArgument6,
                                                                                             GGS_routineDeclarationList & outArgument7,
                                                                                             GGS_luint & outArgument8,
                                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const class GGS_baseline_5F_model constinArgument0,
                                           const class GGS_string constinArgument1,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @baseline_5F_model struct
//--------------------------------------------------------------------------------------------------

class GGS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mProgramName ;
  public: inline GGS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GGS_lstring mProperty_mDeviceName ;
  public: inline GGS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GGS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GGS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GGS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GGS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GGS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GGS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GGS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GGS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GGS_baseline_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GGS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GGS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GGS_location mProperty_mEndOfProgram ;
  public: inline GGS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_baseline_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GGS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GGS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GGS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GGS_baseline_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_baseline_5F_model (const GGS_lstring & in_mProgramName,
                                 const GGS_lstring & in_mDeviceName,
                                 const GGS_configDefinitionList & in_mConfigDefinitionList,
                                 const GGS_ramDefinitionList & in_mRamDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRegisterList,
                                 const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                 const GGS_baseline_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                 const GGS_lstringlist & in_mUnusedRoutineList,
                                 const GGS_location & in_mEndOfProgram) ;

//--------------------------------- Copy constructor
  public: GGS_baseline_5F_model (const GGS_baseline_5F_model & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_baseline_5F_model & operator = (const GGS_baseline_5F_model & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_baseline_5F_model init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_configDefinitionList & inOperand2,
                                                                                 const class GGS_ramDefinitionList & inOperand3,
                                                                                 const class GGS_lstringlist & inOperand4,
                                                                                 const class GGS_constantDefinitionList & inOperand5,
                                                                                 const class GGS_baseline_5F_routineDefinitionList & inOperand6,
                                                                                 const class GGS_lstringlist & inOperand7,
                                                                                 const class GGS_location & inOperand8,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_baseline_5F_model extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_baseline_5F_model class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_configDefinitionList & inOperand2,
                                                             const class GGS_ramDefinitionList & inOperand3,
                                                             const class GGS_lstringlist & inOperand4,
                                                             const class GGS_constantDefinitionList & inOperand5,
                                                             const class GGS_baseline_5F_routineDefinitionList & inOperand6,
                                                             const class GGS_lstringlist & inOperand7,
                                                             const class GGS_location & inOperand8,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_bootloader_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_parse_5F_bootloader_ (class GGS_lstring & outArgument0,
                                                   class GGS_lstring & outArgument1,
                                                   class GGS_routineDeclarationList & outArgument2,
                                                   class GGS_bootloaderReservedRAMmap & outArgument3,
                                                   class GGS_luint & outArgument4,
                                                   class GGS_routineDeclarationList & outArgument5,
                                                   class GGS_ramDefinitionList & outArgument6,
                                                   class GGS_string & outArgument7,
                                                   class GGS_piccoloDeviceModel & outArgument8,
                                                   class GGS_uint & outArgument9,
                                                   class GGS_ramBankTable & outArgument10,
                                                   class GGS_registerTable & outArgument11,
                                                   class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GGS_ramDefinitionList & ioArgument0,
                                                 class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_ (class GGS_routineDeclarationList & ioArgument0,
                                                      class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GGS_piccoloDeviceModel & outArgument0,
                                                                            class GGS_string & outArgument1,
                                                                            class GGS_uint & outArgument2,
                                                                            class GGS_ramBankTable & outArgument3,
                                                                            class GGS_registerTable & outArgument4,
                                                                            class GGS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GGS_routineDeclarationList & outArgument6,
                                                                            class GGS_routineDeclarationList & outArgument7,
                                                                            class GGS_luint & outArgument8,
                                                                            class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GGS_lstring & outArgument0,
                                                                                    GGS_lstring & outArgument1,
                                                                                    GGS_routineDeclarationList & outArgument2,
                                                                                    GGS_bootloaderReservedRAMmap & outArgument3,
                                                                                    GGS_luint & outArgument4,
                                                                                    GGS_routineDeclarationList & outArgument5,
                                                                                    GGS_ramDefinitionList & outArgument6,
                                                                                    GGS_string & outArgument7,
                                                                                    GGS_piccoloDeviceModel & outArgument8,
                                                                                    GGS_uint & outArgument9,
                                                                                    GGS_ramBankTable & outArgument10,
                                                                                    GGS_registerTable & outArgument11,
                                                                                    Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument0,
                                                                                                             GGS_string & outArgument1,
                                                                                                             GGS_uint & outArgument2,
                                                                                                             GGS_ramBankTable & outArgument3,
                                                                                                             GGS_registerTable & outArgument4,
                                                                                                             GGS_bootloaderReservedRAMmap & outArgument5,
                                                                                                             GGS_routineDeclarationList & outArgument6,
                                                                                                             GGS_routineDeclarationList & outArgument7,
                                                                                                             GGS_luint & outArgument8,
                                                                                                             Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GGS_routineDeclarationList & ioArgument0,
                                                                                       Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_piccoloOptions_doNotReorderCluster ;

extern BoolCommandLineOption gOption_piccoloOptions_doNotWarnRecursive ;

extern BoolCommandLineOption gOption_piccoloOptions_generateGraphvizFiles ;

extern BoolCommandLineOption gOption_piccoloOptions_generateAssembly ;

extern BoolCommandLineOption gOption_piccoloOptions_output_5F_C_5F_Array ;

extern BoolCommandLineOption gOption_piccoloOptions_ouputListingFile ;

extern BoolCommandLineOption gOption_piccoloOptions_performOptimizations ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_piccoloOptions_optimizationFlags ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const class GGS_string constinArgument0,
                                                                                                             const class GGS_lstring constinArgument1,
                                                                                                             const class GGS_lstring constinArgument2,
                                                                                                             const class GGS_routineDeclarationList constinArgument3,
                                                                                                             const class GGS_bootloaderReservedRAMmap constinArgument4,
                                                                                                             const class GGS_luint constinArgument5,
                                                                                                             const class GGS_routineDeclarationList constinArgument6,
                                                                                                             const class GGS_ramDefinitionList constinArgument7,
                                                                                                             class GGS_string & outArgument8,
                                                                                                             class GGS_piccoloDeviceModel & outArgument9,
                                                                                                             class GGS_uint & outArgument10,
                                                                                                             class GGS_ramBankTable & outArgument11,
                                                                                                             class GGS_registerTable & outArgument12,
                                                                                                             class Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

