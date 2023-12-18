//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-piccolo-5F-lexique-cocoa.h"
#import "PMDebug.h"

//--------------------------------------------------------------------------------------------------

@implementation OC_Lexique_piccolo_lexique

//--------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_charValue = 0 ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
}

//--------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//--------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//--------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString
  return [NSArray arrayWithObjects:
    @"Routine Definition",
    @"Routine Call",
    @"Variable Declaration",
    @"Variable Use",
    @"Constant Declaration",
    NULL
  ] ;
}

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//
//             Key words table 'controlKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_piccolo_5F_lexique_controlKeyWordList [48] = {
  {"w", piccolo_lexique_1_w},
  {"do", piccolo_lexique_1_do},
  {"if", piccolo_lexique_1_if},
  {"end", piccolo_lexique_1_end},
  {"ram", piccolo_lexique_1_ram},
  {"rom", piccolo_lexique_1_rom},
  {"bank", piccolo_lexique_1_bank},
  {"byte", piccolo_lexique_1_byte},
  {"case", piccolo_lexique_1_case},
  {"data", piccolo_lexique_1_data},
  {"else", piccolo_lexique_1_else},
  {"fast", piccolo_lexique_1_fast},
  {"page", piccolo_lexique_1_page},
  {"uses", piccolo_lexique_1_uses},
  {"block", piccolo_lexique_1_block},
  {"const", piccolo_lexique_1_const},
  {"data8", piccolo_lexique_1_data_38_},
  {"elsif", piccolo_lexique_1_elsif},
  {"macro", piccolo_lexique_1_macro},
  {"pic18", piccolo_lexique_1_pic_31__38_},
  {"while", piccolo_lexique_1_while},
  {"data16", piccolo_lexique_1_data_31__36_},
  {"inline", piccolo_lexique_1_inline},
  {"nobank", piccolo_lexique_1_nobank},
  {"switch", piccolo_lexique_1_switch},
  {"unused", piccolo_lexique_1_unused},
  {"banksel", piccolo_lexique_1_banksel},
  {"ensures", piccolo_lexique_1_ensures},
  {"forever", piccolo_lexique_1_forever},
  {"include", piccolo_lexique_1_include},
  {"private", piccolo_lexique_1_private},
  {"routine", piccolo_lexique_1_routine},
  {"banksave", piccolo_lexique_1_banksave},
  {"baseline", piccolo_lexique_1_baseline},
  {"checkpic", piccolo_lexique_1_checkpic},
  {"computed", piccolo_lexique_1_computed},
  {"midrange", piccolo_lexique_1_midrange},
  {"noreturn", piccolo_lexique_1_noreturn},
  {"requires", piccolo_lexique_1_requires},
  {"checkbank", piccolo_lexique_1_checkbank},
  {"interrupt", piccolo_lexique_1_interrupt},
  {"preserved", piccolo_lexique_1_preserved},
  {"protected", piccolo_lexique_1_protected},
  {"bootloader", piccolo_lexique_1_bootloader},
  {"implements", piccolo_lexique_1_implements},
  {"checknobank", piccolo_lexique_1_checknobank},
  {"contextsave", piccolo_lexique_1_contextsave},
  {"configuration", piccolo_lexique_1_configuration}
} ;

static NSInteger search_into_piccolo_5F_lexique_controlKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_piccolo_5F_lexique_controlKeyWordList, 48) ;
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'instructionKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_piccolo_5F_lexique_instructionKeyWordList [70] = {
  {"bc", piccolo_lexique_1_bc},
  {"bn", piccolo_lexique_1_bn},
  {"bz", piccolo_lexique_1_bz},
  {"bcf", piccolo_lexique_1_bcf},
  {"bnc", piccolo_lexique_1_bnc},
  {"bnn", piccolo_lexique_1_bnn},
  {"bnz", piccolo_lexique_1_bnz},
  {"bov", piccolo_lexique_1_bov},
  {"bra", piccolo_lexique_1_bra},
  {"bsf", piccolo_lexique_1_bsf},
  {"btg", piccolo_lexique_1_btg},
  {"daw", piccolo_lexique_1_daw},
  {"jsr", piccolo_lexique_1_jsr},
  {"nop", piccolo_lexique_1_nop},
  {"pop", piccolo_lexique_1_pop},
  {"rlf", piccolo_lexique_1_rlf},
  {"rrf", piccolo_lexique_1_rrf},
  {"bnov", piccolo_lexique_1_bnov},
  {"call", piccolo_lexique_1_call},
  {"clrf", piccolo_lexique_1_clrf},
  {"clrw", piccolo_lexique_1_clrw},
  {"comf", piccolo_lexique_1_comf},
  {"decf", piccolo_lexique_1_decf},
  {"fnop", piccolo_lexique_1_fnop},
  {"goto", piccolo_lexique_1_goto},
  {"incf", piccolo_lexique_1_incf},
  {"jump", piccolo_lexique_1_jump},
  {"lfsr", piccolo_lexique_1_lfsr},
  {"mnop", piccolo_lexique_1_mnop},
  {"movf", piccolo_lexique_1_movf},
  {"negf", piccolo_lexique_1_negf},
  {"push", piccolo_lexique_1_push},
  {"rlcf", piccolo_lexique_1_rlcf},
  {"rrcf", piccolo_lexique_1_rrcf},
  {"setf", piccolo_lexique_1_setf},
  {"tris", piccolo_lexique_1_tris},
  {"addlw", piccolo_lexique_1_addlw},
  {"addwf", piccolo_lexique_1_addwf},
  {"andlw", piccolo_lexique_1_andlw},
  {"andwf", piccolo_lexique_1_andwf},
  {"iorlw", piccolo_lexique_1_iorlw},
  {"iorwf", piccolo_lexique_1_iorwf},
  {"movff", piccolo_lexique_1_movff},
  {"movlw", piccolo_lexique_1_movlw},
  {"movwf", piccolo_lexique_1_movwf},
  {"mullw", piccolo_lexique_1_mullw},
  {"mulwf", piccolo_lexique_1_mulwf},
  {"rcall", piccolo_lexique_1_rcall},
  {"reset", piccolo_lexique_1_reset},
  {"retlw", piccolo_lexique_1_retlw},
  {"rlncf", piccolo_lexique_1_rlncf},
  {"rrncf", piccolo_lexique_1_rrncf},
  {"sleep", piccolo_lexique_1_sleep},
  {"sublw", piccolo_lexique_1_sublw},
  {"subwf", piccolo_lexique_1_subwf},
  {"swapf", piccolo_lexique_1_swapf},
  {"tblrd", piccolo_lexique_1_tblrd},
  {"tblwt", piccolo_lexique_1_tblwt},
  {"xorlw", piccolo_lexique_1_xorlw},
  {"xorwf", piccolo_lexique_1_xorwf},
  {"addwfc", piccolo_lexique_1_addwfc},
  {"clrwdt", piccolo_lexique_1_clrwdt},
  {"nopbra", piccolo_lexique_1_nopbra},
  {"option", piccolo_lexique_1_option},
  {"subfwb", piccolo_lexique_1_subfwb},
  {"subwfb", piccolo_lexique_1_subwfb},
  {"ltblptr", piccolo_lexique_1_ltblptr},
  {"ldataptr", piccolo_lexique_1_ldataptr},
  {"ldata8ptr", piccolo_lexique_1_ldata_38_ptr},
  {"ldata16ptr", piccolo_lexique_1_ldata_31__36_ptr}
} ;

static NSInteger search_into_piccolo_5F_lexique_instructionKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_piccolo_5F_lexique_instructionKeyWordList, 70) ;
}


//--------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mLexicalAttribute_charValue = 0 ;
  [mLexicalAttribute_identifierString setString:@""] ;
  [mLexicalAttribute_tokenString setString:@""] ;
  mLexicalAttribute_uint32value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter])) {
    BOOL loop2416 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForCharWithFunction: isUnicodeLetter] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop2416 = NO ;
      }
    }while (loop2416 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_piccolo_5F_lexique_instructionKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = search_into_piccolo_5F_lexique_controlKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = piccolo_lexique_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputChar:64])) {
    BOOL loop2883 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop2883 = NO ;
      }
    }while (loop2883 && scanningOk) ;
    mTokenCode = piccolo_lexique_1_label ;
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    BOOL loop3422 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputFromChar:97 toChar:102])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputFromChar:65 toChar:70])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop3422 = NO ;
      }
    }while (loop3422 && scanningOk) ;
    mTokenCode = piccolo_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputString:@"0b" advance:YES])) {
    BOOL loop3798 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:49])) {
        scanner_cocoa_routine_enterBinDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop3798 = NO ;
      }
    }while (loop3798 && scanningOk) ;
    mTokenCode = piccolo_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
    BOOL loop4053 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop4053 = NO ;
      }
    }while (loop4053 && scanningOk) ;
    mTokenCode = piccolo_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputChar:39])) {
    if (scanningOk && ([self testForInputChar:92])) {
      if (scanningOk && ([self testForInputChar:102])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 12) ;
      }else if (scanningOk && ([self testForInputChar:110])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 10) ;
      }else if (scanningOk && ([self testForInputChar:114])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 13) ;
      }else if (scanningOk && ([self testForInputChar:116])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 9) ;
      }else if (scanningOk && ([self testForInputChar:118])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 11) ;
      }else if (scanningOk && ([self testForInputChar:92])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 92) ;
      }else if (scanningOk && ([self testForInputChar:48])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 0) ;
      }else if (scanningOk && ([self testForInputChar:39])) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, 39) ;
      }else if (scanningOk && ([self testForInputChar:120] || [self testForInputChar:88])) {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
          BOOL loop5212 = YES ;
          do {
            scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57] || [self testForInputFromChar:97 toChar:102] || [self testForInputFromChar:65 toChar:70])) {
            }else{
              loop5212 = NO ;
            }
          }while (loop5212 && scanningOk) ;
        }else{
          scanningOk = NO ;
        }
      }else{
        scanningOk = NO ;
      }
    }else if (scanningOk && ([self testForInputFromChar:32 toChar:126])) {
      scanner_cocoa_routine_enterCharacterIntoCharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
    }else{
      scanningOk = NO ;
    }
    if (scanningOk && ([self testForInputChar:39])) {
      mTokenCode = piccolo_lexique_1_literal_5F_char ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && [self testForInputString:@"..." advance:YES]) {
    mTokenCode = piccolo_lexique_1__2E__2E__2E_ ;
  }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3E__3E_ ;
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<=" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3C__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<<" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3C__3C_ ;
  }else if (scanningOk && [self testForInputString:@"+*" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2B__2A_ ;
  }else if (scanningOk && [self testForInputString:@"*-" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2A__2D_ ;
  }else if (scanningOk && [self testForInputString:@"*+" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2A__2B_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = piccolo_lexique_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = piccolo_lexique_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = piccolo_lexique_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = piccolo_lexique_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = piccolo_lexique_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = piccolo_lexique_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = piccolo_lexique_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = piccolo_lexique_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@"\?" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3F_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3C_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = piccolo_lexique_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = piccolo_lexique_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = piccolo_lexique_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2B_ ;
  }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
    mTokenCode = piccolo_lexique_1__2A_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = piccolo_lexique_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = piccolo_lexique_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = piccolo_lexique_1__26_ ;
  }else if (scanningOk && [self testForInputString:@"%" advance:YES]) {
    mTokenCode = piccolo_lexique_1__25_ ;
  }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
    mTokenCode = piccolo_lexique_1__21_ ;
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop6402 = YES ;
    do {
      if (scanningOk && ([self testForInputChar:92])) {
        if (scanningOk && ([self testForInputChar:102])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 12) ;
        }else if (scanningOk && ([self testForInputChar:110])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 10) ;
        }else if (scanningOk && ([self testForInputChar:114])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 13) ;
        }else if (scanningOk && ([self testForInputChar:116])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 9) ;
        }else if (scanningOk && ([self testForInputChar:118])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 11) ;
        }else if (scanningOk && ([self testForInputChar:92])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 92) ;
        }else if (scanningOk && ([self testForInputChar:48])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 0) ;
        }else if (scanningOk && ([self testForInputChar:34])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 34) ;
        }else if (scanningOk && ([self testForInputChar:39])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 39) ;
        }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          BOOL loop7085 = YES ;
          do {
            scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            }else{
              loop7085 = NO ;
            }
          }while (loop7085 && scanningOk) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
        }else{
          scanningOk = NO ;
        }
      }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:126])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop6402 = NO ;
      }
    }while (loop6402 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = piccolo_lexique_1_literal_5F_string ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:35])) {
    if (scanningOk && ([self testForInputChar:33])) {
      BOOL loop7800 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop7800 = NO ;
        }
      }while (loop7800 && scanningOk) ;
      mTokenCode = piccolo_lexique_1_commentMark ;
    }else{
      BOOL loop7930 = YES ;
      do {
        if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
        }else{
          loop7930 = NO ;
        }
      }while (loop7930 && scanningOk) ;
      mTokenCode = piccolo_lexique_1_comment ;
    }
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = piccolo_lexique_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//--------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//--------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 159 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 9 ;
}

//--------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//--------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [160] = {0,
    0 /* piccolo_lexique_1_identifier */,
    8 /* piccolo_lexique_1_label */,
    4 /* piccolo_lexique_1_integer */,
    5 /* piccolo_lexique_1_literal_5F_char */,
    6 /* piccolo_lexique_1_literal_5F_string */,
    7 /* piccolo_lexique_1_comment */,
    7 /* piccolo_lexique_1_commentMark */,
    1 /* piccolo_lexique_1_bank */,
    1 /* piccolo_lexique_1_banksave */,
    1 /* piccolo_lexique_1_banksel */,
    1 /* piccolo_lexique_1_baseline */,
    1 /* piccolo_lexique_1_block */,
    1 /* piccolo_lexique_1_bootloader */,
    1 /* piccolo_lexique_1_byte */,
    1 /* piccolo_lexique_1_case */,
    1 /* piccolo_lexique_1_checkbank */,
    1 /* piccolo_lexique_1_checknobank */,
    1 /* piccolo_lexique_1_checkpic */,
    1 /* piccolo_lexique_1_computed */,
    1 /* piccolo_lexique_1_configuration */,
    1 /* piccolo_lexique_1_const */,
    1 /* piccolo_lexique_1_contextsave */,
    1 /* piccolo_lexique_1_data */,
    1 /* piccolo_lexique_1_data_31__36_ */,
    1 /* piccolo_lexique_1_data_38_ */,
    1 /* piccolo_lexique_1_do */,
    1 /* piccolo_lexique_1_end */,
    1 /* piccolo_lexique_1_else */,
    1 /* piccolo_lexique_1_elsif */,
    1 /* piccolo_lexique_1_ensures */,
    1 /* piccolo_lexique_1_fast */,
    1 /* piccolo_lexique_1_forever */,
    1 /* piccolo_lexique_1_if */,
    1 /* piccolo_lexique_1_implements */,
    1 /* piccolo_lexique_1_include */,
    1 /* piccolo_lexique_1_inline */,
    1 /* piccolo_lexique_1_interrupt */,
    1 /* piccolo_lexique_1_macro */,
    1 /* piccolo_lexique_1_midrange */,
    1 /* piccolo_lexique_1_nobank */,
    1 /* piccolo_lexique_1_noreturn */,
    1 /* piccolo_lexique_1_page */,
    1 /* piccolo_lexique_1_pic_31__38_ */,
    1 /* piccolo_lexique_1_preserved */,
    1 /* piccolo_lexique_1_protected */,
    1 /* piccolo_lexique_1_private */,
    1 /* piccolo_lexique_1_ram */,
    1 /* piccolo_lexique_1_requires */,
    1 /* piccolo_lexique_1_rom */,
    1 /* piccolo_lexique_1_routine */,
    1 /* piccolo_lexique_1_switch */,
    1 /* piccolo_lexique_1_unused */,
    1 /* piccolo_lexique_1_uses */,
    1 /* piccolo_lexique_1_w */,
    1 /* piccolo_lexique_1_while */,
    2 /* piccolo_lexique_1_addlw */,
    2 /* piccolo_lexique_1_addwf */,
    2 /* piccolo_lexique_1_addwfc */,
    2 /* piccolo_lexique_1_andlw */,
    2 /* piccolo_lexique_1_andwf */,
    2 /* piccolo_lexique_1_bc */,
    2 /* piccolo_lexique_1_bcf */,
    2 /* piccolo_lexique_1_bn */,
    2 /* piccolo_lexique_1_bnc */,
    2 /* piccolo_lexique_1_bnn */,
    2 /* piccolo_lexique_1_bov */,
    2 /* piccolo_lexique_1_bnov */,
    2 /* piccolo_lexique_1_bnz */,
    2 /* piccolo_lexique_1_bsf */,
    2 /* piccolo_lexique_1_bra */,
    2 /* piccolo_lexique_1_btg */,
    2 /* piccolo_lexique_1_bz */,
    2 /* piccolo_lexique_1_call */,
    2 /* piccolo_lexique_1_clrf */,
    2 /* piccolo_lexique_1_clrw */,
    2 /* piccolo_lexique_1_clrwdt */,
    2 /* piccolo_lexique_1_comf */,
    2 /* piccolo_lexique_1_daw */,
    2 /* piccolo_lexique_1_decf */,
    2 /* piccolo_lexique_1_incf */,
    2 /* piccolo_lexique_1_iorlw */,
    2 /* piccolo_lexique_1_iorwf */,
    2 /* piccolo_lexique_1_fnop */,
    2 /* piccolo_lexique_1_goto */,
    2 /* piccolo_lexique_1_jsr */,
    2 /* piccolo_lexique_1_jump */,
    2 /* piccolo_lexique_1_lfsr */,
    2 /* piccolo_lexique_1_ldataptr */,
    2 /* piccolo_lexique_1_ldata_38_ptr */,
    2 /* piccolo_lexique_1_ldata_31__36_ptr */,
    2 /* piccolo_lexique_1_ltblptr */,
    2 /* piccolo_lexique_1_mnop */,
    2 /* piccolo_lexique_1_movf */,
    2 /* piccolo_lexique_1_movff */,
    2 /* piccolo_lexique_1_movlw */,
    2 /* piccolo_lexique_1_movwf */,
    2 /* piccolo_lexique_1_mullw */,
    2 /* piccolo_lexique_1_mulwf */,
    2 /* piccolo_lexique_1_negf */,
    2 /* piccolo_lexique_1_nop */,
    2 /* piccolo_lexique_1_nopbra */,
    2 /* piccolo_lexique_1_pop */,
    2 /* piccolo_lexique_1_option */,
    2 /* piccolo_lexique_1_push */,
    2 /* piccolo_lexique_1_rcall */,
    2 /* piccolo_lexique_1_reset */,
    2 /* piccolo_lexique_1_retlw */,
    2 /* piccolo_lexique_1_rlcf */,
    2 /* piccolo_lexique_1_rlf */,
    2 /* piccolo_lexique_1_rlncf */,
    2 /* piccolo_lexique_1_rrcf */,
    2 /* piccolo_lexique_1_rrf */,
    2 /* piccolo_lexique_1_rrncf */,
    2 /* piccolo_lexique_1_setf */,
    2 /* piccolo_lexique_1_sleep */,
    2 /* piccolo_lexique_1_subfwb */,
    2 /* piccolo_lexique_1_sublw */,
    2 /* piccolo_lexique_1_subwf */,
    2 /* piccolo_lexique_1_subwfb */,
    2 /* piccolo_lexique_1_swapf */,
    2 /* piccolo_lexique_1_tblrd */,
    2 /* piccolo_lexique_1_tblwt */,
    2 /* piccolo_lexique_1_tris */,
    2 /* piccolo_lexique_1_xorlw */,
    2 /* piccolo_lexique_1_xorwf */,
    3 /* piccolo_lexique_1__2A_ */,
    3 /* piccolo_lexique_1__2A__2B_ */,
    3 /* piccolo_lexique_1__2C_ */,
    3 /* piccolo_lexique_1__21__3D_ */,
    3 /* piccolo_lexique_1__3C__3D_ */,
    3 /* piccolo_lexique_1__3E__3D_ */,
    3 /* piccolo_lexique_1__2A__2D_ */,
    3 /* piccolo_lexique_1__2B__2A_ */,
    3 /* piccolo_lexique_1__3B_ */,
    3 /* piccolo_lexique_1__3A_ */,
    3 /* piccolo_lexique_1__3D__3D_ */,
    3 /* piccolo_lexique_1__3C_ */,
    3 /* piccolo_lexique_1__3E_ */,
    3 /* piccolo_lexique_1__5B_ */,
    3 /* piccolo_lexique_1__5D_ */,
    3 /* piccolo_lexique_1__2E_ */,
    3 /* piccolo_lexique_1__21_ */,
    3 /* piccolo_lexique_1__26_ */,
    3 /* piccolo_lexique_1__7C_ */,
    3 /* piccolo_lexique_1__3D_ */,
    3 /* piccolo_lexique_1__7B_ */,
    3 /* piccolo_lexique_1__7D_ */,
    3 /* piccolo_lexique_1__28_ */,
    3 /* piccolo_lexique_1__29_ */,
    3 /* piccolo_lexique_1__2F_ */,
    3 /* piccolo_lexique_1__2D_ */,
    3 /* piccolo_lexique_1__2B_ */,
    3 /* piccolo_lexique_1__3F_ */,
    3 /* piccolo_lexique_1__5E_ */,
    3 /* piccolo_lexique_1__3C__3C_ */,
    3 /* piccolo_lexique_1__3E__3E_ */,
    3 /* piccolo_lexique_1__7E_ */,
    3 /* piccolo_lexique_1__25_ */,
    3 /* piccolo_lexique_1__2E__2E__2E_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//--------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [160] = {NO,
    YES /* piccolo_lexique_1_identifier */,
    YES /* piccolo_lexique_1_label */,
    YES /* piccolo_lexique_1_integer */,
    YES /* piccolo_lexique_1_literal_5F_char */,
    NO /* piccolo_lexique_1_literal_5F_string */,
    NO /* piccolo_lexique_1_comment */,
    NO /* piccolo_lexique_1_commentMark */,
    YES /* piccolo_lexique_1_bank */,
    YES /* piccolo_lexique_1_banksave */,
    YES /* piccolo_lexique_1_banksel */,
    YES /* piccolo_lexique_1_baseline */,
    YES /* piccolo_lexique_1_block */,
    YES /* piccolo_lexique_1_bootloader */,
    YES /* piccolo_lexique_1_byte */,
    YES /* piccolo_lexique_1_case */,
    YES /* piccolo_lexique_1_checkbank */,
    YES /* piccolo_lexique_1_checknobank */,
    YES /* piccolo_lexique_1_checkpic */,
    YES /* piccolo_lexique_1_computed */,
    YES /* piccolo_lexique_1_configuration */,
    YES /* piccolo_lexique_1_const */,
    YES /* piccolo_lexique_1_contextsave */,
    YES /* piccolo_lexique_1_data */,
    YES /* piccolo_lexique_1_data_31__36_ */,
    YES /* piccolo_lexique_1_data_38_ */,
    YES /* piccolo_lexique_1_do */,
    YES /* piccolo_lexique_1_end */,
    YES /* piccolo_lexique_1_else */,
    YES /* piccolo_lexique_1_elsif */,
    YES /* piccolo_lexique_1_ensures */,
    YES /* piccolo_lexique_1_fast */,
    YES /* piccolo_lexique_1_forever */,
    YES /* piccolo_lexique_1_if */,
    YES /* piccolo_lexique_1_implements */,
    YES /* piccolo_lexique_1_include */,
    YES /* piccolo_lexique_1_inline */,
    YES /* piccolo_lexique_1_interrupt */,
    YES /* piccolo_lexique_1_macro */,
    YES /* piccolo_lexique_1_midrange */,
    YES /* piccolo_lexique_1_nobank */,
    YES /* piccolo_lexique_1_noreturn */,
    YES /* piccolo_lexique_1_page */,
    YES /* piccolo_lexique_1_pic_31__38_ */,
    YES /* piccolo_lexique_1_preserved */,
    YES /* piccolo_lexique_1_protected */,
    YES /* piccolo_lexique_1_private */,
    YES /* piccolo_lexique_1_ram */,
    YES /* piccolo_lexique_1_requires */,
    YES /* piccolo_lexique_1_rom */,
    YES /* piccolo_lexique_1_routine */,
    YES /* piccolo_lexique_1_switch */,
    YES /* piccolo_lexique_1_unused */,
    YES /* piccolo_lexique_1_uses */,
    YES /* piccolo_lexique_1_w */,
    YES /* piccolo_lexique_1_while */,
    YES /* piccolo_lexique_1_addlw */,
    YES /* piccolo_lexique_1_addwf */,
    YES /* piccolo_lexique_1_addwfc */,
    YES /* piccolo_lexique_1_andlw */,
    YES /* piccolo_lexique_1_andwf */,
    YES /* piccolo_lexique_1_bc */,
    YES /* piccolo_lexique_1_bcf */,
    YES /* piccolo_lexique_1_bn */,
    YES /* piccolo_lexique_1_bnc */,
    YES /* piccolo_lexique_1_bnn */,
    YES /* piccolo_lexique_1_bov */,
    YES /* piccolo_lexique_1_bnov */,
    YES /* piccolo_lexique_1_bnz */,
    YES /* piccolo_lexique_1_bsf */,
    YES /* piccolo_lexique_1_bra */,
    YES /* piccolo_lexique_1_btg */,
    YES /* piccolo_lexique_1_bz */,
    YES /* piccolo_lexique_1_call */,
    YES /* piccolo_lexique_1_clrf */,
    YES /* piccolo_lexique_1_clrw */,
    YES /* piccolo_lexique_1_clrwdt */,
    YES /* piccolo_lexique_1_comf */,
    YES /* piccolo_lexique_1_daw */,
    YES /* piccolo_lexique_1_decf */,
    YES /* piccolo_lexique_1_incf */,
    YES /* piccolo_lexique_1_iorlw */,
    YES /* piccolo_lexique_1_iorwf */,
    YES /* piccolo_lexique_1_fnop */,
    YES /* piccolo_lexique_1_goto */,
    YES /* piccolo_lexique_1_jsr */,
    YES /* piccolo_lexique_1_jump */,
    YES /* piccolo_lexique_1_lfsr */,
    YES /* piccolo_lexique_1_ldataptr */,
    YES /* piccolo_lexique_1_ldata_38_ptr */,
    YES /* piccolo_lexique_1_ldata_31__36_ptr */,
    YES /* piccolo_lexique_1_ltblptr */,
    YES /* piccolo_lexique_1_mnop */,
    YES /* piccolo_lexique_1_movf */,
    YES /* piccolo_lexique_1_movff */,
    YES /* piccolo_lexique_1_movlw */,
    YES /* piccolo_lexique_1_movwf */,
    YES /* piccolo_lexique_1_mullw */,
    YES /* piccolo_lexique_1_mulwf */,
    YES /* piccolo_lexique_1_negf */,
    YES /* piccolo_lexique_1_nop */,
    YES /* piccolo_lexique_1_nopbra */,
    YES /* piccolo_lexique_1_pop */,
    YES /* piccolo_lexique_1_option */,
    YES /* piccolo_lexique_1_push */,
    YES /* piccolo_lexique_1_rcall */,
    YES /* piccolo_lexique_1_reset */,
    YES /* piccolo_lexique_1_retlw */,
    YES /* piccolo_lexique_1_rlcf */,
    YES /* piccolo_lexique_1_rlf */,
    YES /* piccolo_lexique_1_rlncf */,
    YES /* piccolo_lexique_1_rrcf */,
    YES /* piccolo_lexique_1_rrf */,
    YES /* piccolo_lexique_1_rrncf */,
    YES /* piccolo_lexique_1_setf */,
    YES /* piccolo_lexique_1_sleep */,
    YES /* piccolo_lexique_1_subfwb */,
    YES /* piccolo_lexique_1_sublw */,
    YES /* piccolo_lexique_1_subwf */,
    YES /* piccolo_lexique_1_subwfb */,
    YES /* piccolo_lexique_1_swapf */,
    YES /* piccolo_lexique_1_tblrd */,
    YES /* piccolo_lexique_1_tblwt */,
    YES /* piccolo_lexique_1_tris */,
    YES /* piccolo_lexique_1_xorlw */,
    YES /* piccolo_lexique_1_xorwf */,
    YES /* piccolo_lexique_1__2A_ */,
    YES /* piccolo_lexique_1__2A__2B_ */,
    YES /* piccolo_lexique_1__2C_ */,
    YES /* piccolo_lexique_1__21__3D_ */,
    YES /* piccolo_lexique_1__3C__3D_ */,
    YES /* piccolo_lexique_1__3E__3D_ */,
    YES /* piccolo_lexique_1__2A__2D_ */,
    YES /* piccolo_lexique_1__2B__2A_ */,
    YES /* piccolo_lexique_1__3B_ */,
    YES /* piccolo_lexique_1__3A_ */,
    YES /* piccolo_lexique_1__3D__3D_ */,
    YES /* piccolo_lexique_1__3C_ */,
    YES /* piccolo_lexique_1__3E_ */,
    YES /* piccolo_lexique_1__5B_ */,
    YES /* piccolo_lexique_1__5D_ */,
    YES /* piccolo_lexique_1__2E_ */,
    YES /* piccolo_lexique_1__21_ */,
    YES /* piccolo_lexique_1__26_ */,
    YES /* piccolo_lexique_1__7C_ */,
    YES /* piccolo_lexique_1__3D_ */,
    YES /* piccolo_lexique_1__7B_ */,
    YES /* piccolo_lexique_1__7D_ */,
    YES /* piccolo_lexique_1__28_ */,
    YES /* piccolo_lexique_1__29_ */,
    YES /* piccolo_lexique_1__2F_ */,
    YES /* piccolo_lexique_1__2D_ */,
    YES /* piccolo_lexique_1__2B_ */,
    YES /* piccolo_lexique_1__3F_ */,
    YES /* piccolo_lexique_1__5E_ */,
    YES /* piccolo_lexique_1__3C__3C_ */,
    YES /* piccolo_lexique_1__3E__3E_ */,
    YES /* piccolo_lexique_1__7E_ */,
    YES /* piccolo_lexique_1__25_ */,
    YES /* piccolo_lexique_1__2E__2E__2E_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//--------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//--------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 9)) {
    NSString * kStyleArray [9] = {
      @"Default Style",
      @"Keywords:",
      @"Instructions:",
      @"Delimiters:",
      @"Integer Constants:",
      @"Character Constants:",
      @"String Constants:",
      @"Comments:",
      @"Labels:"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//--------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 9)) {
    NSString * kStyleArray [9] = {
      @"piccolo_lexique",
      @"piccolo_lexique-keywordStyle",
      @"piccolo_lexique-instructionStyle",
      @"piccolo_lexique-delimitersStyle",
      @"piccolo_lexique-integerStyle",
      @"piccolo_lexique-characterStyle",
      @"piccolo_lexique-stringStyle",
      @"piccolo_lexique-commentStyle",
      @"piccolo_lexique-labelStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//--------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"piccolo_lexique" ;
}

//--------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


