#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Parser class 'baseline_syntax' declaration                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_baseline_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_baseline_5F_condition_5F_expression_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                    class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_factor_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_term_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                              class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_instruction_5F_list_ (class GALGAS_baseline_5F_instructionList & outArgument0,
                                                                class GALGAS_labelMap & ioArgument1,
                                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_routine_5F_definition_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_simple_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                  class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                            class GALGAS_baseline_5F_instruction & outArgument1,
                                                                            class GALGAS_labelMap & ioArgument2,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                      class GALGAS_labelMap & ioArgument1,
                                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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

  protected : virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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

  protected : virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                class GALGAS_lstringlist & ioArgument1,
                                                class GALGAS_ramDefinitionList & ioArgument2,
                                                class GALGAS_lstringlist & ioArgument3,
                                                class GALGAS_configDefinitionList & ioArgument4,
                                                class GALGAS_constantDefinitionList & ioArgument5,
                                                class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                GALGAS_lstringlist & ioArgument1,
                                                                GALGAS_ramDefinitionList & ioArgument2,
                                                                GALGAS_lstringlist & ioArgument3,
                                                                GALGAS_configDefinitionList & ioArgument4,
                                                                GALGAS_constantDefinitionList & ioArgument5,
                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_section_5F_list_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_section_5F_list_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                                GALGAS_labelMap & ioArgument1,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                      GALGAS_labelMap & ioArgument1,
                                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument0,
                                                                                            GALGAS_baseline_5F_instruction & outArgument1,
                                                                                            GALGAS_labelMap & ioArgument2,
                                                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          @baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public GALGAS_baseline_5F_conditionExpression {
//--- Constructor
  public : GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) ;

//---
  public : inline const class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * ptr (void) const { return (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                                           const class GALGAS_bitNumberExpression & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Pointer class for @baseline_bitTest_in_structured_if_condition class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                                            const GALGAS_bitNumberExpression & in_mBitNumber
                                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @baseline_5F_incDecRegisterInCondition class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_incDecRegisterInCondition : public GALGAS_baseline_5F_conditionExpression {
//--- Constructor
  public : GALGAS_baseline_5F_incDecRegisterInCondition (void) ;

//---
  public : inline const class cPtr_baseline_5F_incDecRegisterInCondition * ptr (void) const { return (const cPtr_baseline_5F_incDecRegisterInCondition *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_incDecRegisterInCondition (const cPtr_baseline_5F_incDecRegisterInCondition * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_incDecRegisterInCondition extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_incDecRegisterInCondition constructor_new (const class GALGAS_registerExpression & inOperand0,
                                                                                      const class GALGAS_bool & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_incDecRegisterInCondition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_incDecRegisterInCondition class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @baseline_incDecRegisterInCondition class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_incDecRegisterInCondition : public cPtr_baseline_5F_conditionExpression {
//--- Attributes
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;
  public : GALGAS_bool mProperty_mBranchIfZero ;

//--- Constructor
  public : cPtr_baseline_5F_incDecRegisterInCondition (const GALGAS_registerExpression & in_mRegisterExpression,
                                                       const GALGAS_bool & in_mIncrement,
                                                       const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                       const GALGAS_bool & in_mBranchIfZero
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mBranchIfZero (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_instruction_5F_CALL class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_CALL : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_CALL (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_CALL constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_CALL * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_CALL *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_CALL (const cPtr_baseline_5F_instruction_5F_CALL * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_CALL extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_CALL constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_CALL & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_CALL class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_instruction_CALL class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_CALL : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_CALL (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @baseline_5F_instruction_5F_F class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_F : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_F (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_F * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_F *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_F (const cPtr_baseline_5F_instruction_5F_F * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_F extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_F constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inOperand1,
                                                                             const class GALGAS_registerExpression & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_F & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_F class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Pointer class for @baseline_instruction_F class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_F : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code mProperty_mFAinstruction ;
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                              const GALGAS_registerExpression & in_mRegisterExpression
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code getter_mFAinstruction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @baseline_5F_instruction_5F_FB class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_FB : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_FB (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_FB * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_FB *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_FB (const cPtr_baseline_5F_instruction_5F_FB * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_FB extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_FB constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_baseline_5F_bit_5F_oriented_5F_op & inOperand1,
                                                                              const class GALGAS_registerExpression & inOperand2,
                                                                              const class GALGAS_bitNumberExpression & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FB & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FB class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @baseline_instruction_FB class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_FB : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_bit_5F_oriented_5F_op mProperty_mBitOrientedOp ;
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bitNumberExpression & in_mBitNumber
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_bit_5F_oriented_5F_op getter_mBitOrientedOp (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @baseline_5F_instruction_5F_FD class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_FD : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_FD (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_FD * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_FD *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_FD (const cPtr_baseline_5F_instruction_5F_FD * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_FD extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_FD constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inOperand1,
                                                                              const class GALGAS_registerExpression & inOperand2,
                                                                              const class GALGAS_bool & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_FD & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_FD class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @baseline_instruction_FD class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_FD : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                               const GALGAS_registerExpression & in_mRegisterExpression,
                                               const GALGAS_bool & in_m_5F_W_5F_isDestination
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code getter_mInstruction_5F_FD_5F_base_5F_code (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_instruction_5F_GOTO class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_GOTO : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_GOTO (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_GOTO constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_GOTO * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_GOTO *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_GOTO (const cPtr_baseline_5F_instruction_5F_GOTO * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_GOTO extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_GOTO constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_GOTO & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_GOTO class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_instruction_GOTO class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_GOTO : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_GOTO (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @baseline_5F_instruction_5F_IF_5F_BitTest class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest (const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2,
                                                                                         const class GALGAS_registerExpression & inOperand3,
                                                                                         const class GALGAS_bitNumberExpression & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @baseline_instruction_IF_BitTest class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mProperty_mSkipIfSet ;
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bitNumberExpression mProperty_mBitNumber ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_IF_5F_BitTest (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                          const GALGAS_bool & in_mSkipIfSet,
                                                          const GALGAS_registerExpression & in_mRegisterExpression,
                                                          const GALGAS_bitNumberExpression & in_mBitNumber
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mSkipIfSet (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitNumberExpression getter_mBitNumber (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @baseline_5F_instruction_5F_IF_5F_IncDec class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec : public GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec (const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec constructor_new (const class GALGAS_location & inOperand0,
                                                                                        const class GALGAS_baseline_5F_instruction & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_registerExpression & inOperand3,
                                                                                        const class GALGAS_bool & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Pointer class for @baseline_instruction_IF_IncDec class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_IF_5F_IncDec : public cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON {
//--- Attributes
  public : GALGAS_bool mProperty_mIncrement ;
  public : GALGAS_registerExpression mProperty_mRegisterExpression ;
  public : GALGAS_bool mProperty_m_5F_W_5F_isDestination ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_IF_5F_IncDec (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_baseline_5F_instruction & in_mInstruction,
                                                         const GALGAS_bool & in_mIncrement,
                                                         const GALGAS_registerExpression & in_mRegisterExpression,
                                                         const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIncrement (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegisterExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_m_5F_W_5F_isDestination (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @baseline_5F_instruction_5F_JSR class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_JSR : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_JSR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_JSR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_JSR * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_JSR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_JSR (const cPtr_baseline_5F_instruction_5F_JSR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_JSR extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_JSR constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JSR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JSR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Pointer class for @baseline_instruction_JSR class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_JSR : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_JSR (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_instruction_5F_JUMP class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_JUMP : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_JUMP (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_JUMP constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_JUMP * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_JUMP *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_JUMP (const cPtr_baseline_5F_instruction_5F_JUMP * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_JUMP extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_JUMP constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_JUMP & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTargetLabel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_JUMP class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_instruction_JUMP class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_JUMP : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mTargetLabel ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_JUMP (const GALGAS_location & in_mInstructionLocation,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @baseline_5F_instruction_5F_STATIC_5F_REPEAT class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (void) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT constructor_new (const class GALGAS_location & inOperand0,
                                                                                            const class GALGAS_lstring & inOperand1,
                                                                                            const class GALGAS_immediatExpression & inOperand2,
                                                                                            const class GALGAS_immediatExpression & inOperand3,
                                                                                            const class GALGAS_baseline_5F_instructionList & inOperand4,
                                                                                            const class GALGAS_location & inOperand5
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstruction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mLowerBoundExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mUpperBoundExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @baseline_instruction_STATIC_REPEAT class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mConstantName ;
  public : GALGAS_immediatExpression mProperty_mLowerBoundExpression ;
  public : GALGAS_immediatExpression mProperty_mUpperBoundExpression ;
  public : GALGAS_baseline_5F_instructionList mProperty_mInstructionList ;
  public : GALGAS_location mProperty_mEndOfInstruction ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_lstring & in_mConstantName,
                                                             const GALGAS_immediatExpression & in_mLowerBoundExpression,
                                                             const GALGAS_immediatExpression & in_mUpperBoundExpression,
                                                             const GALGAS_baseline_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstruction
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mLowerBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mUpperBoundExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_baseline_5F_instructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfInstruction (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @baseline_5F_instruction_5F_TRIS class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_instruction_5F_TRIS : public GALGAS_baseline_5F_instruction {
//--- Constructor
  public : GALGAS_baseline_5F_instruction_5F_TRIS (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_instruction_5F_TRIS constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_baseline_5F_instruction_5F_TRIS * ptr (void) const { return (const cPtr_baseline_5F_instruction_5F_TRIS *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_baseline_5F_instruction_5F_TRIS (const cPtr_baseline_5F_instruction_5F_TRIS * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_baseline_5F_instruction_5F_TRIS extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_baseline_5F_instruction_5F_TRIS constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_instruction_5F_TRIS & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_instruction_5F_TRIS class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @baseline_instruction_TRIS class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_baseline_5F_instruction_5F_TRIS : public cPtr_baseline_5F_instruction {
//--- Attributes
  public : GALGAS_lstring mProperty_mOperand ;

//--- Constructor
  public : cPtr_baseline_5F_instruction_5F_TRIS (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstring & in_mOperand
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOperand (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Parser class 'baseline_program' declaration                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'baseline_analysis'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_baseline_5F_analysis (const class GALGAS_baseline_5F_model constinArgument0,
                                   const class GALGAS_string constinArgument1,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @baseline_5F_model struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mProgramName ;

  public : GALGAS_lstring mProperty_mDeviceName ;

  public : GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;

  public : GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;

  public : GALGAS_lstringlist mProperty_mUnusedRegisterList ;

  public : GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;

  public : GALGAS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;

  public : GALGAS_lstringlist mProperty_mUnusedRoutineList ;

  public : GALGAS_location mProperty_mEndOfProgram ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_baseline_5F_model constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_baseline_5F_model (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_baseline_5F_model (void) ;

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
  public : static class GALGAS_baseline_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_configDefinitionList & inOperand2,
                                                                  const class GALGAS_ramDefinitionList & inOperand3,
                                                                  const class GALGAS_lstringlist & inOperand4,
                                                                  const class GALGAS_constantDefinitionList & inOperand5,
                                                                  const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                  const class GALGAS_lstringlist & inOperand7,
                                                                  const class GALGAS_location & inOperand8
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_baseline_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_configDefinitionList getter_mConfigDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantDefinitionList getter_mConstantDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDeviceName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProgram (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProgramName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_ramDefinitionList getter_mRamDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_baseline_5F_routineDefinitionList getter_mRoutineDefinitionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRegisterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mUnusedRoutineList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_baseline_5F_model class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Parser class 'pic18_bootloader_syntax' declaration                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'pic18BootloaderSpecificationAnalysis'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @bitNumberLabelValue class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bitNumberLabelValue : public GALGAS_bitNumberExpression {
//--- Constructor
  public : GALGAS_bitNumberLabelValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bitNumberLabelValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_bitNumberLabelValue * ptr (void) const { return (const cPtr_bitNumberLabelValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_bitNumberLabelValue (const cPtr_bitNumberLabelValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bitNumberLabelValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bitNumberLabelValue constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_luint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bitNumberLabelValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mBitNumberIndexValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBitNumberLabelValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bitNumberLabelValue class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitNumberLabelValue ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @bitNumberLabelValue class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_bitNumberLabelValue : public cPtr_bitNumberExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mBitNumberLabelValue ;
  public : GALGAS_luint mProperty_mBitNumberIndexValue ;

//--- Constructor
  public : cPtr_bitNumberLabelValue (const GALGAS_lstring & in_mBitNumberLabelValue,
                                     const GALGAS_luint & in_mBitNumberIndexValue
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mBitNumberLabelValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mBitNumberIndexValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @byteDeclarationInRam class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_byteDeclarationInRam : public GALGAS_declarationInRam {
//--- Constructor
  public : GALGAS_byteDeclarationInRam (void) ;

//---
  public : inline const class cPtr_byteDeclarationInRam * ptr (void) const { return (const cPtr_byteDeclarationInRam *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_byteDeclarationInRam (const cPtr_byteDeclarationInRam * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_byteDeclarationInRam extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_byteDeclarationInRam constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_immediatExpression & inOperand1,
                                                                     const class GALGAS_bitSliceTable & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_registerProtection & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_byteDeclarationInRam & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerProtection getter_mProtection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatExpression getter_mSizeExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_byteDeclarationInRam class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_byteDeclarationInRam ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @byteDeclarationInRam class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_byteDeclarationInRam : public cPtr_declarationInRam {
//--- Attributes
  public : GALGAS_lstring mProperty_mName ;
  public : GALGAS_immediatExpression mProperty_mSizeExpression ;
  public : GALGAS_bitSliceTable mProperty_mBitSliceTable ;
  public : GALGAS_string mProperty_mBitDefinitionString ;
  public : GALGAS_registerProtection mProperty_mProtection ;

//--- Constructor
  public : cPtr_byteDeclarationInRam (const GALGAS_lstring & in_mName,
                                      const GALGAS_immediatExpression & in_mSizeExpression,
                                      const GALGAS_bitSliceTable & in_mBitSliceTable,
                                      const GALGAS_string & in_mBitDefinitionString,
                                      const GALGAS_registerProtection & in_mProtection
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatExpression getter_mSizeExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bitSliceTable getter_mBitSliceTable (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mBitDefinitionString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_registerProtection getter_mProtection (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @immediatInteger class                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_immediatInteger : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatInteger (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_immediatInteger constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_immediatInteger * ptr (void) const { return (const cPtr_immediatInteger *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatInteger (const cPtr_immediatInteger * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatInteger extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatInteger constructor_new (const class GALGAS_luint & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatInteger & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatInteger class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatInteger ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Pointer class for @immediatInteger class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_immediatInteger : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_immediatInteger (const GALGAS_luint & in_mValue
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @immediatRegister class                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_immediatRegister : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatRegister (void) ;

//---
  public : inline const class cPtr_immediatRegister * ptr (void) const { return (const cPtr_immediatRegister *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatRegister (const cPtr_immediatRegister * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatRegister extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatRegister constructor_new (const class GALGAS_registerExpression & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatRegister & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatRegister class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatRegister ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Pointer class for @immediatRegister class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_immediatRegister : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_registerExpression mProperty_mRegister ;

//--- Constructor
  public : cPtr_immediatRegister (const GALGAS_registerExpression & in_mRegister
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_registerExpression getter_mRegister (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @immediatSlice class                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_immediatSlice : public GALGAS_immediatExpression {
//--- Constructor
  public : GALGAS_immediatSlice (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_immediatSlice constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_immediatSlice * ptr (void) const { return (const cPtr_immediatSlice *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_immediatSlice (const cPtr_immediatSlice * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_immediatSlice extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_immediatSlice constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_immediatSliceExpressionList & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_immediatSlice & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_immediatSliceExpressionList getter_mSliceExpressionList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_immediatSlice class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_immediatSlice ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Pointer class for @immediatSlice class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_immediatSlice : public cPtr_immediatExpression {
//--- Attributes
  public : GALGAS_lstring mProperty_mRegisterName ;
  public : GALGAS_immediatSliceExpressionList mProperty_mSliceExpressionList ;

//--- Constructor
  public : cPtr_immediatSlice (const GALGAS_lstring & in_mRegisterName,
                               const GALGAS_immediatSliceExpressionList & in_mSliceExpressionList
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_immediatSliceExpressionList getter_mSliceExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

