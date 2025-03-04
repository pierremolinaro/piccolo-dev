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

enum {piccoloDevice_lexique_1_,
  piccoloDevice_lexique_1_identifier,
  piccoloDevice_lexique_1_integer,
  piccoloDevice_lexique_1_string,
  piccoloDevice_lexique_1_comment,
  piccoloDevice_lexique_1_controller,
  piccoloDevice_lexique_1_processor,
  piccoloDevice_lexique_1_romsize,
  piccoloDevice_lexique_1_eepromsize,
  piccoloDevice_lexique_1_bank,
  piccoloDevice_lexique_1_unusedregister,
  piccoloDevice_lexique_1_mirrorat,
  piccoloDevice_lexique_1_ram,
  piccoloDevice_lexique_1_register,
  piccoloDevice_lexique_1_at,
  piccoloDevice_lexique_1_to,
  piccoloDevice_lexique_1_configuration,
  piccoloDevice_lexique_1_width,
  piccoloDevice_lexique_1_description,
  piccoloDevice_lexique_1_mask,
  piccoloDevice_lexique_1_illegal,
  piccoloDevice_lexique_1_message,
  piccoloDevice_lexique_1_setting,
  piccoloDevice_lexique_1__3C_,
  piccoloDevice_lexique_1__3E_,
  piccoloDevice_lexique_1__2C_,
  piccoloDevice_lexique_1__2D_,
  piccoloDevice_lexique_1__2F_,
  piccoloDevice_lexique_1__3B_,
  piccoloDevice_lexique_1__3A_,
  piccoloDevice_lexique_1__5B_,
  piccoloDevice_lexique_1__5D_,
  piccoloDevice_lexique_1__7B_,
  piccoloDevice_lexique_1__7D_
} ;

//--------------------------------------------------------------------------------------------------
//
//                     S C A N N E R    C L A S S
//
//--------------------------------------------------------------------------------------------------

@interface OC_Lexique_piccoloDevice_lexique : OC_Lexique {
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

