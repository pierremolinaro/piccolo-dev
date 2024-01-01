#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR pic18_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_pic_31__38__5F_grammar : public cParser_pic_31__38__5F_syntax,
                                        public cParser_pic_31__38__5F_start_5F_symbol,
                                        public cParser_midrange_5F_syntax,
                                        public cParser_baseline_5F_syntax,
                                        public cParser_baseline_5F_program,
                                        public cParser_pic_31__38__5F_bootloader_5F_syntax,
                                        public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_expression_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_factor_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_term_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_instruction_5F_list_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                            GALGAS_labelMap & ioArgument1,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_routine_5F_definition_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                        GALGAS_baseline_5F_instruction & outArgument1,
                                                                        GALGAS_labelMap & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                  GALGAS_labelMap & ioArgument1,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'block_termination' non terminal
//--- 'parse' label
  public: virtual void nt_block_5F_termination_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_block_5F_termination_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_block_5F_termination_ (GALGAS_abstractBlockTerminationForBlockInstruction & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'body' non terminal
//--- 'parse' label
  public: virtual void nt_body_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_body_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

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
                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'checkpic_definition' non terminal
//--- 'parse' label
  public: virtual void nt_checkpic_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_checkpic_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_checkpic_5F_definition_ (GALGAS_checkpicList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_expression_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_factor_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_condition_5F_term_ (GALGAS_pic_31__38_ConditionExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'configuration_definition' non terminal
//--- 'parse' label
  public: virtual void nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'constant_definition' non terminal
//--- 'parse' label
  public: virtual void nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'data_definition' non terminal
//--- 'parse' label
  public: virtual void nt_data_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_data_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_data_5F_definition_ (GALGAS_dataList & ioArgument0,
                                               Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'declaration_in_ram' non terminal
//--- 'parse' label
  public: virtual void nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_declaration_5F_in_5F_ram_ (GALGAS_declarationInRam & outArgument0,
                                                     Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                           Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_bitwise_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_bitwise_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_expression' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_factor' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_factor_ (GALGAS_immediatExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_primary' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_primary_ (GALGAS_immediatExpression & outArgument0,
                                                 Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'immediate_term' non terminal
//--- 'parse' label
  public: virtual void nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_immediate_5F_term_ (GALGAS_immediatExpression & outArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_instruction_5F_list_ (GALGAS_pic_31__38_InstructionList & outArgument0,
                                                GALGAS_bool & ioArgument1,
                                                GALGAS_bool & ioArgument2,
                                                GALGAS_labelMap & ioArgument3,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_interrupt_5F_definition_ (GALGAS_pic_31__38_InterruptDefinitionList & ioArgument0,
                                                    GALGAS_bool & ioArgument1,
                                                    GALGAS_bool & ioArgument2,
                                                    Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_expression_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_factor_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_condition_5F_term_ (GALGAS_midrange_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_instruction_5F_list_ (GALGAS_midrange_5F_instructionList & outArgument0,
                                                            GALGAS_bool & ioArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_labelMap & ioArgument3,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_interrupt_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_interrupt_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_interrupt_5F_definition_ (GALGAS_midrange_5F_interruptDefinitionList & ioArgument0,
                                                                GALGAS_bool & ioArgument1,
                                                                GALGAS_bool & ioArgument2,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_routine_5F_definition_ (GALGAS_midrange_5F_routineDefinitionList & ioArgument0,
                                                              GALGAS_bool & ioArgument1,
                                                              GALGAS_bool & ioArgument2,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_simple_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                                        GALGAS_midrange_5F_instruction & outArgument1,
                                                                        GALGAS_bool & ioArgument2,
                                                                        GALGAS_bool & ioArgument3,
                                                                        GALGAS_labelMap & ioArgument4,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'midrange_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_midrange_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_midrange_5F_structured_5F_instruction_ (GALGAS_midrange_5F_instruction & outArgument0,
                                                                  GALGAS_bool & ioArgument1,
                                                                  GALGAS_bool & ioArgument2,
                                                                  GALGAS_labelMap & ioArgument3,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'optional_w_as_dest' non terminal
//--- 'parse' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'parse_bootloader' non terminal
//--- 'parse' label
  public: virtual void nt_parse_5F_bootloader_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_parse_5F_bootloader_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_parse_5F_bootloader_ (GALGAS_lstring & outArgument0,
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
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'ram_definition' non terminal
//--- 'parse' label
  public: virtual void nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'register_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_declaration' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_declaration_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_declaration_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_declaration_ (GALGAS_routineDeclarationList & ioArgument0,
                                                   Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_routine_5F_definition_ (GALGAS_pic_31__38_RoutineDefinitionList & ioArgument0,
                                                  GALGAS_bool & ioArgument1,
                                                  GALGAS_bool & ioArgument2,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public: virtual void nt_section_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_section_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_section_5F_list_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                            GALGAS_lstringlist & ioArgument1,
                                            GALGAS_ramDefinitionList & ioArgument2,
                                            GALGAS_lstringlist & ioArgument3,
                                            GALGAS_configDefinitionList & ioArgument4,
                                            GALGAS_constantDefinitionList & ioArgument5,
                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_simple_5F_instruction_ (GALGAS_pic_31__38_PiccoloSimpleInstruction & outArgument0,
                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString
                                                    COMMA_LOCATION_ARGS) ;

//----------- 'importBootloaderSpecification' label
  public: virtual void nt_start_5F_symbol_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                         GALGAS_string & outArgument1,
                                                                         GALGAS_uint & outArgument2,
                                                                         GALGAS_ramBankTable & outArgument3,
                                                                         GALGAS_registerTable & outArgument4,
                                                                         GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                         GALGAS_routineDeclarationList & outArgument6,
                                                                         GALGAS_routineDeclarationList & outArgument7,
                                                                         GALGAS_luint & outArgument8,
                                                                         Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_importBootloaderSpecification (Compiler * inCompiler,
                                                                               GALGAS_lstring inFileName,
                                                                               GALGAS_piccoloDeviceModel & outArgument0,
                                                                               GALGAS_string & outArgument1,
                                                                               GALGAS_uint & outArgument2,
                                                                               GALGAS_ramBankTable & outArgument3,
                                                                               GALGAS_registerTable & outArgument4,
                                                                               GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                               GALGAS_routineDeclarationList & outArgument6,
                                                                               GALGAS_routineDeclarationList & outArgument7,
                                                                               GALGAS_luint & outArgument8
                                                                               COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_importBootloaderSpecification (Compiler * inCompiler,
                                                                                 GALGAS_string inSourceString,
                                                                                 GALGAS_string inNameString,
                                                                                 GALGAS_piccoloDeviceModel & outArgument0,
                                                                                 GALGAS_string & outArgument1,
                                                                                 GALGAS_uint & outArgument2,
                                                                                 GALGAS_ramBankTable & outArgument3,
                                                                                 GALGAS_registerTable & outArgument4,
                                                                                 GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                 GALGAS_routineDeclarationList & outArgument6,
                                                                                 GALGAS_routineDeclarationList & outArgument7,
                                                                                 GALGAS_luint & outArgument8
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

//------------------------------------- 'structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_if_5F_instruction_ (const GALGAS_lstring inArgument0,
                                                            GALGAS_pic_31__38_PiccoloInstruction & outArgument1,
                                                            GALGAS_bool & ioArgument2,
                                                            GALGAS_bool & ioArgument3,
                                                            GALGAS_labelMap & ioArgument4,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_structured_5F_instruction_ (GALGAS_pic_31__38_PiccoloInstruction & outArgument0,
                                                      GALGAS_bool & ioArgument1,
                                                      GALGAS_bool & ioArgument2,
                                                      GALGAS_labelMap & ioArgument3,
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

  public: virtual int32_t select_pic_31__38__5F_start_5F_symbol_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_33 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_34 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_35 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_36 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_midrange_5F_syntax_37 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (Lexique_piccolo_5F_lexique *) ;

  public: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (Lexique_piccolo_5F_lexique *) ;

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
