//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//----------------------------------------------------------------------------------------------------------------------
//   LEXIQUE piccoloDevice_lexique
//----------------------------------------------------------------------------------------------------------------------

fileprivate let gFont_piccoloDevice_lexique = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + piccoloDevice_lexique_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gLineHeight_piccoloDevice_lexique = EBGenericPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + piccoloDevice_lexique_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gColors_piccoloDevice_lexique : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-keywordStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-instructionStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccoloDevice_lexique-commentStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_piccoloDevice_lexique_lexical_error"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_piccoloDevice_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_piccoloDevice_lexique : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-keywordStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-instructionStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_piccoloDevice_lexique_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccoloDevice_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gItalicStyle_piccoloDevice_lexique : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-keywordStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-instructionStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccoloDevice_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//----------------------------------------------------------------------------------------------------------------------

let piccoloDevice_lexique_1_ : UInt16 = 0
let piccoloDevice_lexique_1_identifier : UInt16 = 1
let piccoloDevice_lexique_1_integer : UInt16 = 2
let piccoloDevice_lexique_1_string : UInt16 = 3
let piccoloDevice_lexique_1_comment : UInt16 = 4
let piccoloDevice_lexique_1_controller : UInt16 = 5
let piccoloDevice_lexique_1_processor : UInt16 = 6
let piccoloDevice_lexique_1_romsize : UInt16 = 7
let piccoloDevice_lexique_1_eepromsize : UInt16 = 8
let piccoloDevice_lexique_1_bank : UInt16 = 9
let piccoloDevice_lexique_1_unusedregister : UInt16 = 10
let piccoloDevice_lexique_1_mirrorat : UInt16 = 11
let piccoloDevice_lexique_1_ram : UInt16 = 12
let piccoloDevice_lexique_1_register : UInt16 = 13
let piccoloDevice_lexique_1_at : UInt16 = 14
let piccoloDevice_lexique_1_to : UInt16 = 15
let piccoloDevice_lexique_1_configuration : UInt16 = 16
let piccoloDevice_lexique_1_width : UInt16 = 17
let piccoloDevice_lexique_1_description : UInt16 = 18
let piccoloDevice_lexique_1_mask : UInt16 = 19
let piccoloDevice_lexique_1_illegal : UInt16 = 20
let piccoloDevice_lexique_1_message : UInt16 = 21
let piccoloDevice_lexique_1_setting : UInt16 = 22
let piccoloDevice_lexique_1__3C_ : UInt16 = 23
let piccoloDevice_lexique_1__3E_ : UInt16 = 24
let piccoloDevice_lexique_1__2C_ : UInt16 = 25
let piccoloDevice_lexique_1__2D_ : UInt16 = 26
let piccoloDevice_lexique_1__2F_ : UInt16 = 27
let piccoloDevice_lexique_1__3B_ : UInt16 = 28
let piccoloDevice_lexique_1__3A_ : UInt16 = 29
let piccoloDevice_lexique_1__5B_ : UInt16 = 30
let piccoloDevice_lexique_1__5D_ : UInt16 = 31
let piccoloDevice_lexique_1__7B_ : UInt16 = 32
let piccoloDevice_lexique_1__7D_ : UInt16 = 33
let piccoloDevice_lexique_2_ERROR : UInt16 = 34
let piccoloDevice_lexique_2_TEMPLATE : UInt16 = 35

//----------------------------------------------------------------------------------------------------------------------

func piccoloDevice_lexique_lexiqueIdentifier () -> String {
  return "piccoloDevice_lexique"
}

//----------------------------------------------------------------------------------------------------------------------

func piccoloDevice_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords:", // 1
    "Instructions:", // 2
    "Delimiters:", // 3
    "Integer Constants:", // 4
    "String Constants:", // 5
    "Comments:", // 6
    "Lexical error", // 7
    "Template" // 8
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------

func piccoloDevice_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "piccoloDevice_lexique", // 0
    "piccoloDevice_lexique-keywordStyle", // 1
    "piccoloDevice_lexique-instructionStyle", // 2
    "piccoloDevice_lexique-delimitersStyle", // 3
    "piccoloDevice_lexique-integerStyle", // 4
    "piccoloDevice_lexique-stringStyle", // 5
    "piccoloDevice_lexique-commentStyle", // 6
    "piccoloDevice_lexique.ERROR", // 7
    "piccoloDevice_lexique.TEMPLATE" // 8
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class SWIFT_Lexique_piccoloDevice_lexique : SWIFT_Lexique {

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_charValue : UInt32 = 0
  private var mLexicalAttribute_identifierString : String = ""
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return piccoloDevice_lexique_lexiqueIdentifier ()
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 33
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gFont_piccoloDevice_lexique }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_piccoloDevice_lexique }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_piccoloDevice_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_piccoloDevice_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gItalicStyle_piccoloDevice_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : piccoloDevice_lexique_1_identifier
      4, // 2 : piccoloDevice_lexique_1_integer
      5, // 3 : piccoloDevice_lexique_1_string
      6, // 4 : piccoloDevice_lexique_1_comment
      1, // 5 : piccoloDevice_lexique_1_controller
      1, // 6 : piccoloDevice_lexique_1_processor
      1, // 7 : piccoloDevice_lexique_1_romsize
      1, // 8 : piccoloDevice_lexique_1_eepromsize
      1, // 9 : piccoloDevice_lexique_1_bank
      1, // 10 : piccoloDevice_lexique_1_unusedregister
      1, // 11 : piccoloDevice_lexique_1_mirrorat
      1, // 12 : piccoloDevice_lexique_1_ram
      1, // 13 : piccoloDevice_lexique_1_register
      1, // 14 : piccoloDevice_lexique_1_at
      1, // 15 : piccoloDevice_lexique_1_to
      1, // 16 : piccoloDevice_lexique_1_configuration
      1, // 17 : piccoloDevice_lexique_1_width
      1, // 18 : piccoloDevice_lexique_1_description
      1, // 19 : piccoloDevice_lexique_1_mask
      1, // 20 : piccoloDevice_lexique_1_illegal
      1, // 21 : piccoloDevice_lexique_1_message
      1, // 22 : piccoloDevice_lexique_1_setting
      3, // 23 : piccoloDevice_lexique_1__3C_
      3, // 24 : piccoloDevice_lexique_1__3E_
      3, // 25 : piccoloDevice_lexique_1__2C_
      3, // 26 : piccoloDevice_lexique_1__2D_
      3, // 27 : piccoloDevice_lexique_1__2F_
      3, // 28 : piccoloDevice_lexique_1__3B_
      3, // 29 : piccoloDevice_lexique_1__3A_
      3, // 30 : piccoloDevice_lexique_1__5B_
      3, // 31 : piccoloDevice_lexique_1__5D_
      3, // 32 : piccoloDevice_lexique_1__7B_
      3, // 33 : piccoloDevice_lexique_1__7D_
      7, // 34 : piccoloDevice_lexique_2_ERROR
      8  // 35 : piccoloDevice_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : piccoloDevice_lexique_1_identifier
      true, // 2 : piccoloDevice_lexique_1_integer
      true, // 3 : piccoloDevice_lexique_1_string
      true, // 4 : piccoloDevice_lexique_1_comment
      true, // 5 : piccoloDevice_lexique_1_controller
      true, // 6 : piccoloDevice_lexique_1_processor
      true, // 7 : piccoloDevice_lexique_1_romsize
      true, // 8 : piccoloDevice_lexique_1_eepromsize
      true, // 9 : piccoloDevice_lexique_1_bank
      true, // 10 : piccoloDevice_lexique_1_unusedregister
      true, // 11 : piccoloDevice_lexique_1_mirrorat
      true, // 12 : piccoloDevice_lexique_1_ram
      true, // 13 : piccoloDevice_lexique_1_register
      true, // 14 : piccoloDevice_lexique_1_at
      true, // 15 : piccoloDevice_lexique_1_to
      true, // 16 : piccoloDevice_lexique_1_configuration
      true, // 17 : piccoloDevice_lexique_1_width
      true, // 18 : piccoloDevice_lexique_1_description
      true, // 19 : piccoloDevice_lexique_1_mask
      true, // 20 : piccoloDevice_lexique_1_illegal
      true, // 21 : piccoloDevice_lexique_1_message
      true, // 22 : piccoloDevice_lexique_1_setting
      true, // 23 : piccoloDevice_lexique_1__3C_
      true, // 24 : piccoloDevice_lexique_1__3E_
      true, // 25 : piccoloDevice_lexique_1__2C_
      true, // 26 : piccoloDevice_lexique_1__2D_
      true, // 27 : piccoloDevice_lexique_1__2F_
      true, // 28 : piccoloDevice_lexique_1__3B_
      true, // 29 : piccoloDevice_lexique_1__3A_
      true, // 30 : piccoloDevice_lexique_1__5B_
      true, // 31 : piccoloDevice_lexique_1__5D_
      true, // 32 : piccoloDevice_lexique_1__7B_
      true, // 33 : piccoloDevice_lexique_1__7D_
      false, // 34 : piccoloDevice_lexique_2_ERROR
      false  // 35 : piccoloDevice_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 6
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return piccoloDevice_lexique_styleNameFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return piccoloDevice_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_charValue = 0
    self.mLexicalAttribute_identifierString = ""
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (self.previousChar))
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_piccoloDevice_5F_lexique_controlKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = piccoloDevice_lexique_1_identifier ;
      }
    }else if scanningOk && (self.testForInputString ("0x", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
        }else if scanningOk && (self.testForInputFromChar (97, toChar:102)) {
          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
        }else if scanningOk && (self.testForInputFromChar (65, toChar:70)) {
          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = piccoloDevice_lexique_1_integer
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = piccoloDevice_lexique_1_integer
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = piccoloDevice_lexique_1__7D_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = piccoloDevice_lexique_1__7B_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = piccoloDevice_lexique_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = piccoloDevice_lexique_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = piccoloDevice_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = piccoloDevice_lexique_1__3C_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = piccoloDevice_lexique_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = piccoloDevice_lexique_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = piccoloDevice_lexique_1__2F_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = piccoloDevice_lexique_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = piccoloDevice_lexique_1__2C_
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (92)) {
          if scanningOk && (self.testForInputChar (102)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 12)
          }else if scanningOk && (self.testForInputChar (110)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 10)
          }else if scanningOk && (self.testForInputChar (114)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 13)
          }else if scanningOk && (self.testForInputChar (116)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 9)
          }else if scanningOk && (self.testForInputChar (118)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 11)
          }else if scanningOk && (self.testForInputChar (92)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputChar (48)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 0)
          }else if scanningOk && (self.testForInputChar (34)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
          }else if scanningOk && (self.testForInputChar (39)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
          }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
            while (loop && scanningOk) {
              scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (&scanningOk, &self.mLexicalAttribute_charValue, self.previousChar)
              if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
              }else{
                loop = false
              }
            }
            loop = true
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, mLexicalAttribute_charValue)
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:126)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = piccoloDevice_lexique_1_string
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (35)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = piccoloDevice_lexique_1_comment
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = piccoloDevice_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = piccoloDevice_lexique_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//----------------------------------------------------------------------------------------------------------------------

/* - (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_charValue = 0 ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
} */

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------

/*

*/


//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'controlKeyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

fileprivate func search_into_piccoloDevice_5F_lexique_controlKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "at" : piccoloDevice_lexique_1_at,
    "to" : piccoloDevice_lexique_1_to,
    "ram" : piccoloDevice_lexique_1_ram,
    "bank" : piccoloDevice_lexique_1_bank,
    "mask" : piccoloDevice_lexique_1_mask,
    "width" : piccoloDevice_lexique_1_width,
    "illegal" : piccoloDevice_lexique_1_illegal,
    "message" : piccoloDevice_lexique_1_message,
    "romsize" : piccoloDevice_lexique_1_romsize,
    "setting" : piccoloDevice_lexique_1_setting,
    "mirrorat" : piccoloDevice_lexique_1_mirrorat,
    "register" : piccoloDevice_lexique_1_register,
    "processor" : piccoloDevice_lexique_1_processor,
    "controller" : piccoloDevice_lexique_1_controller,
    "eepromsize" : piccoloDevice_lexique_1_eepromsize,
    "description" : piccoloDevice_lexique_1_description,
    "configuration" : piccoloDevice_lexique_1_configuration,
    "unusedregister" : piccoloDevice_lexique_1_unusedregister
  ]
  return dictionary [inSearchedString, default: piccoloDevice_lexique_1_]
}





//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

/* - (void) parseLexicalTokenForLexicalColoring {
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

*/

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


