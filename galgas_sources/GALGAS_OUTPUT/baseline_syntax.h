//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'baseline_syntax.h'                          *
//                        Generated by version 2.4.3                         *
//                      april 14th, 2013, at 16h33'45"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef baseline_syntax_ENTITIES_DEFINED
#define baseline_syntax_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "piccolo_lexique.h"

//---------------------------------------------------------------------------*

#include "generic_metamodel.h"
#include "baseline_ast.h"
#include "baseline_instruction_groups.h"
#include "baseline_compilation.h"
#include "piccoloDevice_semantics.h"
#include "piccolo_embedded_devices.h"
#include "piccolo_config.h"
#include "ram_sections.h"
#include "ipic18_metamodel.h"
#include "pic18_metamodel.h"
#include "ipic_generic.h"
#include "baseline_semantic_analysis.h"
#include "baseline_intermediate_classes.h"
#include "baseline_intermediate_instruction_length.h"
#include "baseline_intermediate_instruction_print.h"
#include "baseline_build_assembly_code.h"
#include "baseline_assembly_classes.h"
#include "baseline_build_binary_code.h"
#include "baseline_print_assembly_instructions.h"
#include "baseline_assembly_instruction_length.h"

//---------------------------------------------------------------------------*

class GALGAS__32_stringlist ;
class GALGAS__32_stringlist_2E_element ;
class GALGAS_FA_5F_instruction_5F_base_5F_code ;
class GALGAS_actualConfigurationMap ;
class GALGAS_actualConfigurationMap_2E_element ;
class GALGAS_andCondition ;
class GALGAS_application ;
class GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code ;
class GALGAS_baseline_5F_IF_5F_BitTest_5F_opcode ;
class GALGAS_baseline_5F_WO_5F_OPERAND_5F_group ;
class GALGAS_baseline_5F_andCondition ;
class GALGAS_baseline_5F_assembly_5F_CALL ;
class GALGAS_baseline_5F_assembly_5F_GOTO ;
class GALGAS_baseline_5F_assembly_5F_SKIP ;
class GALGAS_baseline_5F_assembly_5F_TRIS ;
class GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
class GALGAS_baseline_5F_assembly_5F_actualInstruction ;
class GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
class GALGAS_baseline_5F_assembly_5F_instruction ;
class GALGAS_baseline_5F_assembly_5F_instructionList ;
class GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ;
class GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
class GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
class GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
class GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
class GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
class GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ;
class GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
class GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
class GALGAS_baseline_5F_bit_5F_oriented_5F_op ;
class GALGAS_baseline_5F_conditionExpression ;
class GALGAS_baseline_5F_incDecRegisterInCondition ;
class GALGAS_baseline_5F_instruction ;
class GALGAS_baseline_5F_instructionList ;
class GALGAS_baseline_5F_instructionList_2E_element ;
class GALGAS_baseline_5F_instruction_5F_CALL ;
class GALGAS_baseline_5F_instruction_5F_F ;
class GALGAS_baseline_5F_instruction_5F_FB ;
class GALGAS_baseline_5F_instruction_5F_FD ;
class GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code ;
class GALGAS_baseline_5F_instruction_5F_FOREVER ;
class GALGAS_baseline_5F_instruction_5F_GOTO ;
class GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest ;
class GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec ;
class GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
class GALGAS_baseline_5F_instruction_5F_MNOP ;
class GALGAS_baseline_5F_instruction_5F_TRIS ;
class GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
class GALGAS_baseline_5F_instruction_5F_banksel ;
class GALGAS_baseline_5F_instruction_5F_do_5F_while ;
class GALGAS_baseline_5F_instruction_5F_literalOperation ;
class GALGAS_baseline_5F_instruction_5F_nobanksel ;
class GALGAS_baseline_5F_instruction_5F_savebank ;
class GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
class GALGAS_baseline_5F_intermediate_5F_CALL ;
class GALGAS_baseline_5F_intermediate_5F_GOTO ;
class GALGAS_baseline_5F_intermediate_5F_NULL ;
class GALGAS_baseline_5F_intermediate_5F_TRIS ;
class GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
class GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
class GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition ;
class GALGAS_baseline_5F_intermediate_5F_instruction ;
class GALGAS_baseline_5F_intermediate_5F_instructionList ;
class GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP ;
class GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
class GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
class GALGAS_baseline_5F_intermediate_5F_registerExpression ;
class GALGAS_baseline_5F_literal_5F_instruction_5F_opcode ;
class GALGAS_baseline_5F_model ;
class GALGAS_baseline_5F_negateCondition ;
class GALGAS_baseline_5F_partList ;
class GALGAS_baseline_5F_partList_2E_element ;
class GALGAS_baseline_5F_routineDefinitionList ;
class GALGAS_baseline_5F_routineDefinitionList_2E_element ;
class GALGAS_baseline_5F_symbolTable ;
class GALGAS_baseline_5F_symbolTable_2E_element ;
class GALGAS_bcc_5F_in_5F_structured_5F_if_5F_condition ;
class GALGAS_binaryset ;
class GALGAS_bitNumberExpression ;
class GALGAS_bitNumberLabelValue ;
class GALGAS_bitNumberLiteralValue ;
class GALGAS_bitSliceTable ;
class GALGAS_bitSliceTable_2E_element ;
class GALGAS_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
class GALGAS_bit_5F_oriented_5F_op ;
class GALGAS_bool ;
class GALGAS_bootloaderReservedRAMmap ;
class GALGAS_bootloaderReservedRAMmap_2E_element ;
class GALGAS_byteDeclarationInRam ;
class GALGAS_char ;
class GALGAS_condionalBranchMode ;
class GALGAS_conditionExpression ;
class GALGAS_conditional_5F_branch ;
class GALGAS_configDefinitionList ;
class GALGAS_configDefinitionList_2E_element ;
class GALGAS_configFieldMap ;
class GALGAS_configFieldMap_2E_element ;
class GALGAS_configRegisterMap ;
class GALGAS_configRegisterMap_2E_element ;
class GALGAS_configRegisterMaskMap ;
class GALGAS_configRegisterMaskMap_2E_element ;
class GALGAS_configSettingList ;
class GALGAS_configSettingList_2E_element ;
class GALGAS_constantDefinitionList ;
class GALGAS_constantDefinitionList_2E_element ;
class GALGAS_constantMap ;
class GALGAS_constantMap_2E_element ;
class GALGAS_data ;
class GALGAS_dataList ;
class GALGAS_dataList_2E_element ;
class GALGAS_declarationInRam ;
class GALGAS_declarationInRamList ;
class GALGAS_declarationInRamList_2E_element ;
class GALGAS_double ;
class GALGAS_fieldSettingMap ;
class GALGAS_fieldSettingMap_2E_element ;
class GALGAS_filewrapper ;
class GALGAS_function ;
class GALGAS_functionlist ;
class GALGAS_functionlist_2E_element ;
class GALGAS_if_5F_semi_5F_colon_5F_op ;
class GALGAS_illegalMaskList ;
class GALGAS_illegalMaskList_2E_element ;
class GALGAS_immediatAdd ;
class GALGAS_immediatAnd ;
class GALGAS_immediatComplement ;
class GALGAS_immediatDiv ;
class GALGAS_immediatEqualTest ;
class GALGAS_immediatExpression ;
class GALGAS_immediatExpressionList ;
class GALGAS_immediatExpressionList_2E_element ;
class GALGAS_immediatGreaterOrEqualTest ;
class GALGAS_immediatGreaterTest ;
class GALGAS_immediatInteger ;
class GALGAS_immediatLeftShift ;
class GALGAS_immediatLowerOrEqualTest ;
class GALGAS_immediatLowerTest ;
class GALGAS_immediatMod ;
class GALGAS_immediatMul ;
class GALGAS_immediatNegate ;
class GALGAS_immediatNotEqualTest ;
class GALGAS_immediatOr ;
class GALGAS_immediatRegister ;
class GALGAS_immediatRightShift ;
class GALGAS_immediatSlice ;
class GALGAS_immediatSliceExpressionList ;
class GALGAS_immediatSliceExpressionList_2E_element ;
class GALGAS_immediatSub ;
class GALGAS_immediatXor ;
class GALGAS_incDecRegisterInCondition ;
class GALGAS_instructionList ;
class GALGAS_instructionList_2E_element ;
class GALGAS_instruction_5F_CLRWDT ;
class GALGAS_instruction_5F_DAW ;
class GALGAS_instruction_5F_FA ;
class GALGAS_instruction_5F_FBA ;
class GALGAS_instruction_5F_FDA ;
class GALGAS_instruction_5F_FDA_5F_base_5F_code ;
class GALGAS_instruction_5F_FOREVER ;
class GALGAS_instruction_5F_IF_5F_BitTest ;
class GALGAS_instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ;
class GALGAS_instruction_5F_IF_5F_IncDec ;
class GALGAS_instruction_5F_IF_5F_SEMI_5F_COLON ;
class GALGAS_instruction_5F_JSR ;
class GALGAS_instruction_5F_JUMP ;
class GALGAS_instruction_5F_JUMPCC ;
class GALGAS_instruction_5F_LDATAPTR ;
class GALGAS_instruction_5F_LFSR ;
class GALGAS_instruction_5F_LTBLPTR ;
class GALGAS_instruction_5F_MNOP ;
class GALGAS_instruction_5F_MOVFF ;
class GALGAS_instruction_5F_NOP ;
class GALGAS_instruction_5F_POP ;
class GALGAS_instruction_5F_PUSH ;
class GALGAS_instruction_5F_RESET ;
class GALGAS_instruction_5F_SLEEP ;
class GALGAS_instruction_5F_TBLRD ;
class GALGAS_instruction_5F_TBLWT ;
class GALGAS_instruction_5F_banksel ;
class GALGAS_instruction_5F_computed_5F_bra ;
class GALGAS_instruction_5F_computed_5F_goto ;
class GALGAS_instruction_5F_computed_5F_rcall ;
class GALGAS_instruction_5F_computed_5F_retlw ;
class GALGAS_instruction_5F_do_5F_while ;
class GALGAS_instruction_5F_literalOperation ;
class GALGAS_instruction_5F_nobanksel ;
class GALGAS_instruction_5F_savebank ;
class GALGAS_instruction_5F_structured_5F_if ;
class GALGAS_interruptDefinitionList ;
class GALGAS_interruptDefinitionList_2E_element ;
class GALGAS_ipic_31__38__5F_instruction ;
class GALGAS_ipic_31__38__5F_instructionList ;
class GALGAS_ipic_31__38__5F_instructionList_2E_element ;
class GALGAS_ipic_31__38__5F_instruction_5F_BitTestSkip ;
class GALGAS_ipic_31__38__5F_instruction_5F_CLRWDT ;
class GALGAS_ipic_31__38__5F_instruction_5F_DAW ;
class GALGAS_ipic_31__38__5F_instruction_5F_FA ;
class GALGAS_ipic_31__38__5F_instruction_5F_FBA ;
class GALGAS_ipic_31__38__5F_instruction_5F_FDA ;
class GALGAS_ipic_31__38__5F_instruction_5F_LFSR ;
class GALGAS_ipic_31__38__5F_instruction_5F_MNOP ;
class GALGAS_ipic_31__38__5F_instruction_5F_MOVFF ;
class GALGAS_ipic_31__38__5F_instruction_5F_MOVLB ;
class GALGAS_ipic_31__38__5F_instruction_5F_NOP ;
class GALGAS_ipic_31__38__5F_instruction_5F_POP ;
class GALGAS_ipic_31__38__5F_instruction_5F_PUSH ;
class GALGAS_ipic_31__38__5F_instruction_5F_RESET ;
class GALGAS_ipic_31__38__5F_instruction_5F_RETFIE ;
class GALGAS_ipic_31__38__5F_instruction_5F_RETLW ;
class GALGAS_ipic_31__38__5F_instruction_5F_RETURN ;
class GALGAS_ipic_31__38__5F_instruction_5F_RETURN_5F_NOT_5F_OPTIMIZABLE ;
class GALGAS_ipic_31__38__5F_instruction_5F_SLEEP ;
class GALGAS_ipic_31__38__5F_instruction_5F_TBLRD ;
class GALGAS_ipic_31__38__5F_instruction_5F_TBLWT ;
class GALGAS_ipic_31__38__5F_instruction_5F_computed_5F_bra ;
class GALGAS_ipic_31__38__5F_instruction_5F_computed_5F_goto ;
class GALGAS_ipic_31__38__5F_instruction_5F_computed_5F_rcall ;
class GALGAS_ipic_31__38__5F_instruction_5F_computed_5F_retlw ;
class GALGAS_ipic_31__38__5F_instruction_5F_conditionalBranch ;
class GALGAS_ipic_31__38__5F_instruction_5F_literalOperation ;
class GALGAS_ipic_5F_JSR ;
class GALGAS_ipic_5F_JUMP ;
class GALGAS_ipic_5F_MOV_5F_LABEL_5F_W ;
class GALGAS_ipic_5F_NULL ;
class GALGAS_ipic_5F_actualInstruction ;
class GALGAS_ipic_5F_incDecRegisterInCondition ;
class GALGAS_ipic_5F_jump_5F_test_5F_register ;
class GALGAS_ipic_5F_pseudo_5F_LABEL ;
class GALGAS_ipic_5F_pseudo_5F_ORG ;
class GALGAS_ipic_5F_registerComparisonCondition ;
class GALGAS_ipic_5F_registerExpression ;
class GALGAS_ipic_5F_registerExpressionWithoutBSRIndication ;
class GALGAS_ipic_5F_word ;
class GALGAS_jumpInstructionKind ;
class GALGAS_lbool ;
class GALGAS_lchar ;
class GALGAS_ldouble ;
class GALGAS_literal_5F_instruction_5F_opcode ;
class GALGAS_location ;
class GALGAS_lsint ;
class GALGAS_lsint_36__34_ ;
class GALGAS_lstring ;
class GALGAS_lstringlist ;
class GALGAS_lstringlist_2E_element ;
class GALGAS_luint ;
class GALGAS_luint_36__34_ ;
class GALGAS_luintlist ;
class GALGAS_luintlist_2E_element ;
class GALGAS_negateCondition ;
class GALGAS_object ;
class GALGAS_objectlist ;
class GALGAS_objectlist_2E_element ;
class GALGAS_partList ;
class GALGAS_partList_2E_element ;
class GALGAS_piccoloDeviceModel ;
class GALGAS_piccoloModel ;
class GALGAS_piccolo_5F_instruction ;
class GALGAS_processorType ;
class GALGAS_programKind ;
class GALGAS_ramBankTable ;
class GALGAS_ramBankTable_2E_element ;
class GALGAS_ramDefinitionList ;
class GALGAS_ramDefinitionList_2E_element ;
class GALGAS_range ;
class GALGAS_registerComparison ;
class GALGAS_registerComparisonCondition ;
class GALGAS_registerExpression ;
class GALGAS_registerTable ;
class GALGAS_registerTable_2E_element ;
class GALGAS_registerTestCondition ;
class GALGAS_routineDeclarationList ;
class GALGAS_routineDeclarationList_2E_element ;
class GALGAS_routineDefinitionList ;
class GALGAS_routineDefinitionList_2E_element ;
class GALGAS_routineKind ;
class GALGAS_routineMap ;
class GALGAS_routineMap_2E_element ;
class GALGAS_sint ;
class GALGAS_sint_36__34_ ;
class GALGAS_string ;
class GALGAS_stringlist ;
class GALGAS_stringlist_2E_element ;
class GALGAS_stringset ;
class GALGAS_symbolTableForOptimizations ;
class GALGAS_symbolTableForOptimizations_2E_element ;
class GALGAS_tableAccessOption ;
class GALGAS_type ;
class GALGAS_typelist ;
class GALGAS_typelist_2E_element ;
class GALGAS_uint ;
class GALGAS_uint_36__34_ ;
class GALGAS_uint_36__34_list ;
class GALGAS_uint_36__34_list_2E_element ;
class GALGAS_uintlist ;
class GALGAS_uintlist_2E_element ;

//---------------------------------------------------------------------------*
//                                                                           *
//                Parser class 'baseline_syntax' declaration                 *
//                                                                           *
//---------------------------------------------------------------------------*

class cParser_baseline_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_baseline_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_baseline_5F_condition_5F_expression_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                    C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_factor_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_factor_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_term_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                              C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_condition_5F_term_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_instruction_5F_list_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_instruction_5F_list_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_routine_5F_definition_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                  C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_routine_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_simple_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                  C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_simple_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                            C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_if_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_instruction_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                      C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_baseline_5F_structured_5F_instruction_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_ (GALGAS_bitNumberExpression & outArgument0,
                                                         C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_bit_5F_number_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_ (GALGAS_configDefinitionList & ioArgument0,
                                                            GALGAS_bool & ioArgument1,
                                                            C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_configuration_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_ (GALGAS_constantDefinitionList & ioArgument0,
                                                       C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_constant_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_ (GALGAS_immediatExpression & outArgument0,
                                                        C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_immediate_5F_expression_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_ (GALGAS_bool & outArgument0,
                                                            C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_optional_5F_w_5F_as_5F_dest_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_ (GALGAS_ramDefinitionList & ioArgument0,
                                                  C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_ram_5F_definition_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_ (GALGAS_registerExpression & outArgument0,
                                                    C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_register_5F_parsing_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                             GALGAS_uint & outArgument1,
                                                                             GALGAS_ramBankTable & outArgument2,
                                                                             GALGAS_registerTable & outArgument3,
                                                                             GALGAS_bootloaderReservedRAMmap & outArgument4,
                                                                             GALGAS_routineDeclarationList & outArgument5,
                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                             GALGAS_luint & outArgument7,
                                                                             C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_baseline_5F_syntax_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                             GALGAS_uint & outArgument1,
                                                                                             GALGAS_ramBankTable & outArgument2,
                                                                                             GALGAS_registerTable & outArgument3,
                                                                                             GALGAS_bootloaderReservedRAMmap & outArgument4,
                                                                                             GALGAS_routineDeclarationList & outArgument5,
                                                                                             GALGAS_routineDeclarationList & outArgument6,
                                                                                             GALGAS_luint & outArgument7,
                                                                                             C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_ (GALGAS_baseline_5F_instructionList & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_ (GALGAS_baseline_5F_routineDefinitionList & ioArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                      C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                            C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_ (GALGAS_baseline_5F_instruction & outArgument0,
                                                                                  C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                                    C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_ (GALGAS_baseline_5F_conditionExpression & outArgument0,
                                                                               C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual PMSInt32 select_baseline_5F_syntax_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_1 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_2 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_3 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_4 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_5 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_6 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_7 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_8 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_9 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_10 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_11 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_12 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_13 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_14 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_15 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_16 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_17 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_18 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_19 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_20 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_21 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_22 (C_Lexique_piccolo_5F_lexique *) = 0 ;

  protected : virtual PMSInt32 select_baseline_5F_syntax_23 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif