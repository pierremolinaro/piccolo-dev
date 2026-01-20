#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@branchOverflowMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GGS_branchOverflowMap & ioObject,
                                const class GGS_string constin_inKey,
                                const class GGS_string constin_inValue,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@pic18PiccoloInstruction performInlining'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (class cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const class GGS_stringset constin_inInlinedRoutineSet,
                                          const class GGS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const class GGS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          class GGS_pic_31__38_InstructionList & io_ioInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (class cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      class GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR baseline_include_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_baseline_5F_include_5F_grammar : public cParser_baseline_5F_syntax,
                                                public cParser_communs {
//------------------------------------- 'baseline_condition_expression' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_expression_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                                Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_factor' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_factor_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_condition_term' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_condition_5F_term_ (GGS_baseline_5F_conditionExpression & outArgument0,
                                                          Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_instruction_list' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_instruction_5F_list_ (GGS_baseline_5F_instructionList & outArgument0,
                                                            GGS_labelMap & ioArgument1,
                                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_routine_definition' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_routine_5F_definition_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_simple_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_simple_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                              Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_if_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const GGS_lstring inArgument0,
                                                                        GGS_baseline_5F_instruction & outArgument1,
                                                                        GGS_labelMap & ioArgument2,
                                                                        Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'baseline_structured_instruction' non terminal
//--- 'parse' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_baseline_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_baseline_5F_structured_5F_instruction_ (GGS_baseline_5F_instruction & outArgument0,
                                                                  GGS_labelMap & ioArgument1,
                                                                  Lexique_piccolo_5F_lexique * inCompiler) ;

//------------------------------------- 'bit_number_parsing' non terminal
//--- 'parse' label
  public: virtual void nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression & outArgument0,
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

//------------------------------------- 'section_list' non terminal
//--- 'parse' label
  public: virtual void nt_section_5F_list_parse (Lexique_piccolo_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_section_5F_list_indexing (Lexique_piccolo_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_section_5F_list_ (GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                            GGS_lstringlist & ioArgument1,
                                            GGS_ramDefinitionList & ioArgument2,
                                            GGS_lstringlist & ioArgument3,
                                            GGS_configDefinitionList & ioArgument4,
                                            GGS_constantDefinitionList & ioArgument5,
                                            Lexique_piccolo_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                  GGS_lstringlist & ioArgument1,
                                                  GGS_ramDefinitionList & ioArgument2,
                                                  GGS_lstringlist & ioArgument3,
                                                  GGS_configDefinitionList & ioArgument4,
                                                  GGS_constantDefinitionList & ioArgument5
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_baseline_5F_routineDefinitionList & ioArgument0,
                                                    GGS_lstringlist & ioArgument1,
                                                    GGS_ramDefinitionList & ioArgument2,
                                                    GGS_lstringlist & ioArgument3,
                                                    GGS_configDefinitionList & ioArgument4,
                                                    GGS_constantDefinitionList & ioArgument5
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
