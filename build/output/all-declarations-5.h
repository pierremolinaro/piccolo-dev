#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_baseline_5F_condition_5F_expression_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_factor_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_ (class GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                             class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_condition_5F_term_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_ (class GALGAS_baseline_5F_instructionList & outArgument0,
                                                               class GALGAS_labelMap & ioArgument1,
                                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_instruction_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_routine_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_simple_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (const class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_baseline_5F_instruction & outArgument1,
                                                                           class GALGAS_labelMap & ioArgument2,
                                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_if_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_ (class GALGAS_baseline_5F_instruction & outArgument0,
                                                                     class GALGAS_labelMap & ioArgument1,
                                                                     class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_baseline_5F_structured_5F_instruction_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_ (class GALGAS_bitNumberExpression & outArgument0,
                                                        class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_bit_5F_number_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_ (class GALGAS_configDefinitionList & ioArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_ (class GALGAS_constantDefinitionList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_constant_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_ (class GALGAS_immediatExpression & outArgument0,
                                                       class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_immediate_5F_expression_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_ (class GALGAS_bool & outArgument0,
                                                           class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_optional_5F_w_5F_as_5F_dest_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_ (class GALGAS_registerExpression & outArgument0,
                                                   class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_register_5F_parsing_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GALGAS_lstringlist & ioArgument1,
                                               class GALGAS_ramDefinitionList & ioArgument2,
                                               class GALGAS_lstringlist & ioArgument3,
                                               class GALGAS_configDefinitionList & ioArgument4,
                                               class GALGAS_constantDefinitionList & ioArgument5,
                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_syntax_section_5F_list_i0_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                               GALGAS_lstringlist & ioArgument1,
                                                               GALGAS_ramDefinitionList & ioArgument2,
                                                               GALGAS_lstringlist & ioArgument3,
                                                               GALGAS_configDefinitionList & ioArgument4,
                                                               GALGAS_constantDefinitionList & ioArgument5,
                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_section_5F_list_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                               GALGAS_labelMap & ioArgument1,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                     GALGAS_labelMap & ioArgument1,
                                                                                     C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (const GALGAS_lstring constinArgument0,
                                                                                           GALGAS_baseline_5F_instruction & outArgument1,
                                                                                           GALGAS_labelMap & ioArgument2,
                                                                                           C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                 C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                   C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                              C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_24 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_25 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_26 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_27 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_28 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_29 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_30 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_31 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_baseline_5F_syntax_32 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'baseline_program' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_baseline_5F_program {
//--- Virtual destructor
  public: virtual ~ cParser_baseline_5F_program (void) {}

//--- Non terminal declarations
  protected: virtual void nt_section_5F_list_ (class GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                               class GALGAS_lstringlist & ioArgument1,
                                               class GALGAS_ramDefinitionList & ioArgument2,
                                               class GALGAS_lstringlist & ioArgument3,
                                               class GALGAS_configDefinitionList & ioArgument4,
                                               class GALGAS_constantDefinitionList & ioArgument5,
                                               class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_section_5F_list_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_baseline_5F_program_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                             GALGAS_string & outArgument1,
                                                                                             GALGAS_uint & outArgument2,
                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                             GALGAS_registerTable & outArgument4,
                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                             GALGAS_luint & outArgument8,
                                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_baseline_5F_program_start_5F_symbol_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods

} ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const class GALGAS_baseline_5F_model constinArgument0,
                                           const class GALGAS_string constinArgument1,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @baseline_5F_model struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_baseline_5F_model : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mProgramName ;
  public: inline GALGAS_lstring readProperty_mProgramName (void) const {
    return mProperty_mProgramName ;
  }

  public: GALGAS_lstring mProperty_mDeviceName ;
  public: inline GALGAS_lstring readProperty_mDeviceName (void) const {
    return mProperty_mDeviceName ;
  }

  public: GALGAS_configDefinitionList mProperty_mConfigDefinitionList ;
  public: inline GALGAS_configDefinitionList readProperty_mConfigDefinitionList (void) const {
    return mProperty_mConfigDefinitionList ;
  }

  public: GALGAS_ramDefinitionList mProperty_mRamDefinitionList ;
  public: inline GALGAS_ramDefinitionList readProperty_mRamDefinitionList (void) const {
    return mProperty_mRamDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRegisterList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRegisterList (void) const {
    return mProperty_mUnusedRegisterList ;
  }

  public: GALGAS_constantDefinitionList mProperty_mConstantDefinitionList ;
  public: inline GALGAS_constantDefinitionList readProperty_mConstantDefinitionList (void) const {
    return mProperty_mConstantDefinitionList ;
  }

  public: GALGAS_baseline_5F_routineDefinitionList mProperty_mRoutineDefinitionList ;
  public: inline GALGAS_baseline_5F_routineDefinitionList readProperty_mRoutineDefinitionList (void) const {
    return mProperty_mRoutineDefinitionList ;
  }

  public: GALGAS_lstringlist mProperty_mUnusedRoutineList ;
  public: inline GALGAS_lstringlist readProperty_mUnusedRoutineList (void) const {
    return mProperty_mUnusedRoutineList ;
  }

  public: GALGAS_location mProperty_mEndOfProgram ;
  public: inline GALGAS_location readProperty_mEndOfProgram (void) const {
    return mProperty_mEndOfProgram ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_baseline_5F_model (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMProgramName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProgramName = inValue ;
  }

  public: inline void setter_setMDeviceName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeviceName = inValue ;
  }

  public: inline void setter_setMConfigDefinitionList (const GALGAS_configDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConfigDefinitionList = inValue ;
  }

  public: inline void setter_setMRamDefinitionList (const GALGAS_ramDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRamDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRegisterList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRegisterList = inValue ;
  }

  public: inline void setter_setMConstantDefinitionList (const GALGAS_constantDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantDefinitionList = inValue ;
  }

  public: inline void setter_setMRoutineDefinitionList (const GALGAS_baseline_5F_routineDefinitionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineDefinitionList = inValue ;
  }

  public: inline void setter_setMUnusedRoutineList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnusedRoutineList = inValue ;
  }

  public: inline void setter_setMEndOfProgram (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProgram = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_baseline_5F_model (void) ;

//--------------------------------- Native constructor
  public: GALGAS_baseline_5F_model (const GALGAS_lstring & in_mProgramName,
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
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_baseline_5F_model extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_baseline_5F_model constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 const class GALGAS_configDefinitionList & inOperand2,
                                                                 const class GALGAS_ramDefinitionList & inOperand3,
                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                 const class GALGAS_constantDefinitionList & inOperand5,
                                                                 const class GALGAS_baseline_5F_routineDefinitionList & inOperand6,
                                                                 const class GALGAS_lstringlist & inOperand7,
                                                                 const class GALGAS_location & inOperand8,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_baseline_5F_model & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_baseline_5F_model class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_model ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'pic18_bootloader_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_pic_31__38__5F_bootloader_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_pic_31__38__5F_bootloader_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_parse_5F_bootloader_ (class GALGAS_lstring & outArgument0,
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

  protected: virtual void nt_parse_5F_bootloader_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_parse_5F_bootloader_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_ (class GALGAS_ramDefinitionList & ioArgument0,
                                                 class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_ram_5F_definition_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_ (class GALGAS_routineDeclarationList & ioArgument0,
                                                      class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_routine_5F_declaration_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_importBootloaderSpecification (class GALGAS_piccoloDeviceModel & outArgument0,
                                                                            class GALGAS_string & outArgument1,
                                                                            class GALGAS_uint & outArgument2,
                                                                            class GALGAS_ramBankTable & outArgument3,
                                                                            class GALGAS_registerTable & outArgument4,
                                                                            class GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                            class GALGAS_routineDeclarationList & outArgument6,
                                                                            class GALGAS_routineDeclarationList & outArgument7,
                                                                            class GALGAS_luint & outArgument8,
                                                                            class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GALGAS_lstring & outArgument0,
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

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                             GALGAS_string & outArgument1,
                                                                                                             GALGAS_uint & outArgument2,
                                                                                                             GALGAS_ramBankTable & outArgument3,
                                                                                                             GALGAS_registerTable & outArgument4,
                                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument5,
                                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                                             GALGAS_routineDeclarationList & outArgument7,
                                                                                                             GALGAS_luint & outArgument8,
                                                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GALGAS_routineDeclarationList & ioArgument0,
                                                                                       C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected: void rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected: virtual int32_t select_pic_31__38__5F_bootloader_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotReorderCluster ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_doNotWarnRecursive ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateAssembly ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_generateGraphvizFiles ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_ouputListingFile ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_output_5F_C_5F_Array ;

extern C_BoolCommandLineOption gOption_piccolo_5F_options_performOptimizations ;

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

extern C_StringCommandLineOption gOption_piccolo_5F_options_optimizationFlags ;

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

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const class GALGAS_string constinArgument0,
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
                                                                                                             class Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

