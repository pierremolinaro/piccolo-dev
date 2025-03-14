//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//--------------------------------------------------------------------------------------------------
//
//                    E X T E R N    R O U T I N E S
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                    E X T E R N    F U N C T I O N S
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//
//--------------------------------------------------------------------------------------------------

enum {piccolo_lexique_1_,
  piccolo_lexique_1_identifier,
  piccolo_lexique_1_label,
  piccolo_lexique_1_integer,
  piccolo_lexique_1_literal_5F_char,
  piccolo_lexique_1_literal_5F_string,
  piccolo_lexique_1_comment,
  piccolo_lexique_1_commentMark,
  piccolo_lexique_1_bank,
  piccolo_lexique_1_banksave,
  piccolo_lexique_1_banksel,
  piccolo_lexique_1_baseline,
  piccolo_lexique_1_block,
  piccolo_lexique_1_bootloader,
  piccolo_lexique_1_byte,
  piccolo_lexique_1_case,
  piccolo_lexique_1_checkbank,
  piccolo_lexique_1_checknobank,
  piccolo_lexique_1_checkpic,
  piccolo_lexique_1_computed,
  piccolo_lexique_1_configuration,
  piccolo_lexique_1_const,
  piccolo_lexique_1_contextsave,
  piccolo_lexique_1_data,
  piccolo_lexique_1_data_31__36_,
  piccolo_lexique_1_data_38_,
  piccolo_lexique_1_do,
  piccolo_lexique_1_end,
  piccolo_lexique_1_else,
  piccolo_lexique_1_elsif,
  piccolo_lexique_1_ensures,
  piccolo_lexique_1_fast,
  piccolo_lexique_1_forever,
  piccolo_lexique_1_if,
  piccolo_lexique_1_implements,
  piccolo_lexique_1_include,
  piccolo_lexique_1_inline,
  piccolo_lexique_1_interrupt,
  piccolo_lexique_1_macro,
  piccolo_lexique_1_midrange,
  piccolo_lexique_1_nobank,
  piccolo_lexique_1_noreturn,
  piccolo_lexique_1_page,
  piccolo_lexique_1_pic_31__38_,
  piccolo_lexique_1_preserved,
  piccolo_lexique_1_protected,
  piccolo_lexique_1_private,
  piccolo_lexique_1_ram,
  piccolo_lexique_1_requires,
  piccolo_lexique_1_rom,
  piccolo_lexique_1_routine,
  piccolo_lexique_1_switch,
  piccolo_lexique_1_unused,
  piccolo_lexique_1_uses,
  piccolo_lexique_1_w,
  piccolo_lexique_1_while,
  piccolo_lexique_1_addlw,
  piccolo_lexique_1_addwf,
  piccolo_lexique_1_addwfc,
  piccolo_lexique_1_andlw,
  piccolo_lexique_1_andwf,
  piccolo_lexique_1_bc,
  piccolo_lexique_1_bcf,
  piccolo_lexique_1_bn,
  piccolo_lexique_1_bnc,
  piccolo_lexique_1_bnn,
  piccolo_lexique_1_bov,
  piccolo_lexique_1_bnov,
  piccolo_lexique_1_bnz,
  piccolo_lexique_1_bsf,
  piccolo_lexique_1_bra,
  piccolo_lexique_1_btg,
  piccolo_lexique_1_bz,
  piccolo_lexique_1_call,
  piccolo_lexique_1_clrf,
  piccolo_lexique_1_clrw,
  piccolo_lexique_1_clrwdt,
  piccolo_lexique_1_comf,
  piccolo_lexique_1_daw,
  piccolo_lexique_1_decf,
  piccolo_lexique_1_incf,
  piccolo_lexique_1_iorlw,
  piccolo_lexique_1_iorwf,
  piccolo_lexique_1_fnop,
  piccolo_lexique_1_goto,
  piccolo_lexique_1_jsr,
  piccolo_lexique_1_jump,
  piccolo_lexique_1_lfsr,
  piccolo_lexique_1_ldataptr,
  piccolo_lexique_1_ldata_38_ptr,
  piccolo_lexique_1_ldata_31__36_ptr,
  piccolo_lexique_1_ltblptr,
  piccolo_lexique_1_mnop,
  piccolo_lexique_1_movf,
  piccolo_lexique_1_movff,
  piccolo_lexique_1_movlw,
  piccolo_lexique_1_movwf,
  piccolo_lexique_1_mullw,
  piccolo_lexique_1_mulwf,
  piccolo_lexique_1_negf,
  piccolo_lexique_1_nop,
  piccolo_lexique_1_nopbra,
  piccolo_lexique_1_pop,
  piccolo_lexique_1_option,
  piccolo_lexique_1_push,
  piccolo_lexique_1_rcall,
  piccolo_lexique_1_reset,
  piccolo_lexique_1_retlw,
  piccolo_lexique_1_rlcf,
  piccolo_lexique_1_rlf,
  piccolo_lexique_1_rlncf,
  piccolo_lexique_1_rrcf,
  piccolo_lexique_1_rrf,
  piccolo_lexique_1_rrncf,
  piccolo_lexique_1_setf,
  piccolo_lexique_1_sleep,
  piccolo_lexique_1_subfwb,
  piccolo_lexique_1_sublw,
  piccolo_lexique_1_subwf,
  piccolo_lexique_1_subwfb,
  piccolo_lexique_1_swapf,
  piccolo_lexique_1_tblrd,
  piccolo_lexique_1_tblwt,
  piccolo_lexique_1_tris,
  piccolo_lexique_1_xorlw,
  piccolo_lexique_1_xorwf,
  piccolo_lexique_1__2A_,
  piccolo_lexique_1__2A__2B_,
  piccolo_lexique_1__2C_,
  piccolo_lexique_1__21__3D_,
  piccolo_lexique_1__3C__3D_,
  piccolo_lexique_1__3E__3D_,
  piccolo_lexique_1__2A__2D_,
  piccolo_lexique_1__2B__2A_,
  piccolo_lexique_1__3B_,
  piccolo_lexique_1__3A_,
  piccolo_lexique_1__3D__3D_,
  piccolo_lexique_1__3C_,
  piccolo_lexique_1__3E_,
  piccolo_lexique_1__5B_,
  piccolo_lexique_1__5D_,
  piccolo_lexique_1__2E_,
  piccolo_lexique_1__21_,
  piccolo_lexique_1__26_,
  piccolo_lexique_1__7C_,
  piccolo_lexique_1__3D_,
  piccolo_lexique_1__7B_,
  piccolo_lexique_1__7D_,
  piccolo_lexique_1__28_,
  piccolo_lexique_1__29_,
  piccolo_lexique_1__2F_,
  piccolo_lexique_1__2D_,
  piccolo_lexique_1__2B_,
  piccolo_lexique_1__3F_,
  piccolo_lexique_1__5E_,
  piccolo_lexique_1__3C__3C_,
  piccolo_lexique_1__3E__3E_,
  piccolo_lexique_1__7E_,
  piccolo_lexique_1__25_,
  piccolo_lexique_1__2E__2E__2E_
} ;

//--------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S
//
//--------------------------------------------------------------------------------------------------

@interface OC_Lexique_piccolo_lexique : OC_Lexique {
//--- Attributes
  @protected UInt32 mLexicalAttribute_charValue ;
  @protected NSMutableString * mLexicalAttribute_identifierString ;
  @protected NSMutableString * mLexicalAttribute_tokenString ;
  @protected UInt32 mLexicalAttribute_uint32value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (BOOL) internalParseLexicalTokenForLexicalColoring ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//--------------------------------------------------------------------------------------------------
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

