//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'pic18_start_symbol.h'                         *
//                        Generated by version 2.4.3                         *
//                      march 25th, 2013, at 12h3'36"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef pic18_start_symbol_ENTITIES_DEFINED
#define pic18_start_symbol_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "piccolo_lexique.h"

//---------------------------------------------------------------------------*

#include "pic18_metamodel.h"
#include "generic_metamodel.h"
#include "pic18_semantics.h"
#include "ipic18_build_binary_code.h"
#include "ipic18_metamodel.h"
#include "ipic_generic.h"
#include "piccoloDevice_semantics.h"
#include "ipic18_build_assembly_code.h"
#include "piccolo_embedded_devices.h"
#include "pic18_checkingAndBuildIPIC.h"
#include "ipc18_convert_relatives.h"
#include "ipic18_optimizations.h"
#include "piccolo_config.h"
#include "ram_sections.h"

//---------------------------------------------------------------------------*

class GALGAS__32_stringlist ;
class GALGAS__32_stringlist_2E_element ;
class GALGAS_FA_5F_instruction_5F_base_5F_code ;
class GALGAS_actualConfigurationMap ;
class GALGAS_actualConfigurationMap_2E_element ;
class GALGAS_andCondition ;
class GALGAS_application ;
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
class GALGAS_commonBranchList ;
class GALGAS_commonBranchList_2E_element ;
class GALGAS_commonDeclarationInRam ;
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
class GALGAS_dataMap ;
class GALGAS_dataMap_2E_element ;
class GALGAS_declarationInRam ;
class GALGAS_declarationInRamList ;
class GALGAS_declarationInRamList_2E_element ;
class GALGAS_double ;
class GALGAS_emittedCodeList ;
class GALGAS_emittedCodeList_2E_element ;
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
class GALGAS_ipic_31__38__5F_symbolTable ;
class GALGAS_ipic_31__38__5F_symbolTable_2E_element ;
class GALGAS_ipic_31__38__5F_symbolTableForConvertingRelatives ;
class GALGAS_ipic_31__38__5F_symbolTableForConvertingRelatives_2E_element ;
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
//               Parser class 'pic18_start_symbol' declaration               *
//                                                                           *
//---------------------------------------------------------------------------*

class cParser_pic_31__38__5F_start_5F_symbol {
//--- Virtual destructor
  public : virtual ~ cParser_pic_31__38__5F_start_5F_symbol (void) {}

//--- Non terminal declarations
  protected : virtual void nt_body_ (GALGAS_interruptDefinitionList & ioArgument0,
                                     GALGAS_routineDefinitionList & ioArgument1,
                                     GALGAS_ramDefinitionList & ioArgument2,
                                     GALGAS_configDefinitionList & ioArgument3,
                                     GALGAS_constantDefinitionList & ioArgument4,
                                     GALGAS_dataList & ioArgument5,
                                     GALGAS_bool & ioArgument6,
                                     GALGAS_bool & ioArgument7,
                                     GALGAS_bool & ioArgument8,
                                     C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_body_parse (C_Lexique_piccolo_5F_lexique * inLexique) = 0 ;

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
  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GALGAS_piccoloDeviceModel & outArgument0,
                                                                                                         GALGAS_uint & outArgument1,
                                                                                                         GALGAS_ramBankTable & outArgument2,
                                                                                                         GALGAS_registerTable & outArgument3,
                                                                                                         GALGAS_bootloaderReservedRAMmap & outArgument4,
                                                                                                         GALGAS_routineDeclarationList & outArgument5,
                                                                                                         GALGAS_routineDeclarationList & outArgument6,
                                                                                                         GALGAS_luint & outArgument7,
                                                                                                         C_Lexique_piccolo_5F_lexique * inLexique) ;

  protected : void rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (C_Lexique_piccolo_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual PMSInt32 select_pic_31__38__5F_start_5F_symbol_0 (C_Lexique_piccolo_5F_lexique *) = 0 ;


} ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif