//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-piccolo+device-5Flexique-cocoa.h"
#import "PMDebug.h"

//--------------------------------------------------------------------------------------------------

@implementation OC_Lexique_piccoloDevice_lexique

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

  return [NSArray array] ;
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

static const C_cocoa_lexique_table_entry ktable_for_piccoloDevice_5F_lexique_controlKeyWordList [18] = {
  {"at", piccoloDevice_lexique_1_at},
  {"to", piccoloDevice_lexique_1_to},
  {"ram", piccoloDevice_lexique_1_ram},
  {"bank", piccoloDevice_lexique_1_bank},
  {"mask", piccoloDevice_lexique_1_mask},
  {"width", piccoloDevice_lexique_1_width},
  {"illegal", piccoloDevice_lexique_1_illegal},
  {"message", piccoloDevice_lexique_1_message},
  {"romsize", piccoloDevice_lexique_1_romsize},
  {"setting", piccoloDevice_lexique_1_setting},
  {"mirrorat", piccoloDevice_lexique_1_mirrorat},
  {"register", piccoloDevice_lexique_1_register},
  {"processor", piccoloDevice_lexique_1_processor},
  {"controller", piccoloDevice_lexique_1_controller},
  {"eepromsize", piccoloDevice_lexique_1_eepromsize},
  {"description", piccoloDevice_lexique_1_description},
  {"configuration", piccoloDevice_lexique_1_configuration},
  {"unusedregister", piccoloDevice_lexique_1_unusedregister}
} ;

static NSInteger search_into_piccoloDevice_5F_lexique_controlKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_piccoloDevice_5F_lexique_controlKeyWordList, 18) ;
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
  if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
    BOOL loop920 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (mPreviousChar)) ;
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop920 = NO ;
      }
    }while (loop920 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_piccoloDevice_5F_lexique_controlKeyWordList (mLexicalAttribute_identifierString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = piccoloDevice_lexique_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputString:@"0x" advance:YES])) {
    BOOL loop1504 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputFromChar:97 toChar:102])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputFromChar:65 toChar:70])) {
        scanner_cocoa_routine_enterHexDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop1504 = NO ;
      }
    }while (loop1504 && scanningOk) ;
    mTokenCode = piccoloDevice_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
    BOOL loop1969 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterDigitIntoUInt (& scanningOk, mPreviousChar, & mLexicalAttribute_uint32value) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop1969 = NO ;
      }
    }while (loop1969 && scanningOk) ;
    mTokenCode = piccoloDevice_lexique_1_integer ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__3C_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__2F_ ;
  }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__2D_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = piccoloDevice_lexique_1__2C_ ;
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop2762 = YES ;
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
          BOOL loop3454 = YES ;
          do {
            scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (& scanningOk, & mLexicalAttribute_charValue, mPreviousChar) ;
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            }else{
              loop3454 = NO ;
            }
          }while (loop3454 && scanningOk) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mLexicalAttribute_charValue) ;
        }else{
          scanningOk = NO ;
        }
      }else if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:126])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop2762 = NO ;
      }
    }while (loop2762 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = piccoloDevice_lexique_1_string ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && ([self testForInputChar:35])) {
    BOOL loop4040 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
      }else{
        loop4040 = NO ;
      }
    }while (loop4040 && scanningOk) ;
    mTokenCode = piccoloDevice_lexique_1_comment ;
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = piccoloDevice_lexique_1_ ; // Empty string code
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
  return 33 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//--------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 7 ;
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
  static const NSUInteger kTerminalSymbolStyles [34] = {0,
    0 /* piccoloDevice_lexique_1_identifier */,
    4 /* piccoloDevice_lexique_1_integer */,
    5 /* piccoloDevice_lexique_1_string */,
    6 /* piccoloDevice_lexique_1_comment */,
    1 /* piccoloDevice_lexique_1_controller */,
    1 /* piccoloDevice_lexique_1_processor */,
    1 /* piccoloDevice_lexique_1_romsize */,
    1 /* piccoloDevice_lexique_1_eepromsize */,
    1 /* piccoloDevice_lexique_1_bank */,
    1 /* piccoloDevice_lexique_1_unusedregister */,
    1 /* piccoloDevice_lexique_1_mirrorat */,
    1 /* piccoloDevice_lexique_1_ram */,
    1 /* piccoloDevice_lexique_1_register */,
    1 /* piccoloDevice_lexique_1_at */,
    1 /* piccoloDevice_lexique_1_to */,
    1 /* piccoloDevice_lexique_1_configuration */,
    1 /* piccoloDevice_lexique_1_width */,
    1 /* piccoloDevice_lexique_1_description */,
    1 /* piccoloDevice_lexique_1_mask */,
    1 /* piccoloDevice_lexique_1_illegal */,
    1 /* piccoloDevice_lexique_1_message */,
    1 /* piccoloDevice_lexique_1_setting */,
    3 /* piccoloDevice_lexique_1__3C_ */,
    3 /* piccoloDevice_lexique_1__3E_ */,
    3 /* piccoloDevice_lexique_1__2C_ */,
    3 /* piccoloDevice_lexique_1__2D_ */,
    3 /* piccoloDevice_lexique_1__2F_ */,
    3 /* piccoloDevice_lexique_1__3B_ */,
    3 /* piccoloDevice_lexique_1__3A_ */,
    3 /* piccoloDevice_lexique_1__5B_ */,
    3 /* piccoloDevice_lexique_1__5D_ */,
    3 /* piccoloDevice_lexique_1__7B_ */,
    3 /* piccoloDevice_lexique_1__7D_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//--------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//--------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [34] = {NO,
    YES /* piccoloDevice_lexique_1_identifier */,
    YES /* piccoloDevice_lexique_1_integer */,
    YES /* piccoloDevice_lexique_1_string */,
    YES /* piccoloDevice_lexique_1_comment */,
    YES /* piccoloDevice_lexique_1_controller */,
    YES /* piccoloDevice_lexique_1_processor */,
    YES /* piccoloDevice_lexique_1_romsize */,
    YES /* piccoloDevice_lexique_1_eepromsize */,
    YES /* piccoloDevice_lexique_1_bank */,
    YES /* piccoloDevice_lexique_1_unusedregister */,
    YES /* piccoloDevice_lexique_1_mirrorat */,
    YES /* piccoloDevice_lexique_1_ram */,
    YES /* piccoloDevice_lexique_1_register */,
    YES /* piccoloDevice_lexique_1_at */,
    YES /* piccoloDevice_lexique_1_to */,
    YES /* piccoloDevice_lexique_1_configuration */,
    YES /* piccoloDevice_lexique_1_width */,
    YES /* piccoloDevice_lexique_1_description */,
    YES /* piccoloDevice_lexique_1_mask */,
    YES /* piccoloDevice_lexique_1_illegal */,
    YES /* piccoloDevice_lexique_1_message */,
    YES /* piccoloDevice_lexique_1_setting */,
    YES /* piccoloDevice_lexique_1__3C_ */,
    YES /* piccoloDevice_lexique_1__3E_ */,
    YES /* piccoloDevice_lexique_1__2C_ */,
    YES /* piccoloDevice_lexique_1__2D_ */,
    YES /* piccoloDevice_lexique_1__2F_ */,
    YES /* piccoloDevice_lexique_1__3B_ */,
    YES /* piccoloDevice_lexique_1__3A_ */,
    YES /* piccoloDevice_lexique_1__5B_ */,
    YES /* piccoloDevice_lexique_1__5D_ */,
    YES /* piccoloDevice_lexique_1__7B_ */,
    YES /* piccoloDevice_lexique_1__7D_ */
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
  if ((inIndex >= 0) && (inIndex < 7)) {
    NSString * kStyleArray [7] = {
      @"Default Style",
      @"Keywords:",
      @"Instructions:",
      @"Delimiters:",
      @"Integer Constants:",
      @"String Constants:",
      @"Comments:"
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
  if ((inIndex >= 0) && (inIndex < 7)) {
    NSString * kStyleArray [7] = {
      @"piccoloDevice_lexique",
      @"piccoloDevice_lexique-keywordStyle",
      @"piccoloDevice_lexique-instructionStyle",
      @"piccoloDevice_lexique-delimitersStyle",
      @"piccoloDevice_lexique-integerStyle",
      @"piccoloDevice_lexique-stringStyle",
      @"piccoloDevice_lexique-commentStyle"
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
  return @"piccoloDevice_lexique" ;
}

//--------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


