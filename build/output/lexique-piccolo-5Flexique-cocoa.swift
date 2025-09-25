//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//   LEXIQUE piccolo_lexique
//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gFont_piccolo_lexique = EBPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + piccolo_lexique_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gLineHeight_piccolo_lexique = EBPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + piccolo_lexique_lexiqueIdentifier ()
)

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gColors_piccolo_lexique : [EBPreferenceProperty <NSColor>] = [
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-keywordStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-instructionStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-delimitersStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-integerStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-characterStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-stringStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-commentStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_piccolo_lexique-labelStyle"),
  EBPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_piccolo_lexique_lexical_error"),
  EBPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_piccolo_lexique_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gBoldStyle_piccolo_lexique : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-keywordStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-instructionStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-delimitersStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-characterStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique-labelStyle"),
  EBPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_piccolo_lexique_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_piccolo_lexique_template")
]

//--------------------------------------------------------------------------------------------------

@MainActor fileprivate let gItalicStyle_piccolo_lexique : [EBPreferenceProperty <Bool>] = [
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-keywordStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-instructionStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-delimitersStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-integerStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-characterStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-stringStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-commentStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique-labelStyle"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique_lexical_error"),
  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_piccolo_lexique_template")
]

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let piccolo_lexique_1_ : UInt16 = 0
let piccolo_lexique_1_identifier : UInt16 = 1
let piccolo_lexique_1_label : UInt16 = 2
let piccolo_lexique_1_integer : UInt16 = 3
let piccolo_lexique_1_literal_5F_char : UInt16 = 4
let piccolo_lexique_1_literal_5F_string : UInt16 = 5
let piccolo_lexique_1_comment : UInt16 = 6
let piccolo_lexique_1_commentMark : UInt16 = 7
let piccolo_lexique_1_bank : UInt16 = 8
let piccolo_lexique_1_banksave : UInt16 = 9
let piccolo_lexique_1_banksel : UInt16 = 10
let piccolo_lexique_1_baseline : UInt16 = 11
let piccolo_lexique_1_block : UInt16 = 12
let piccolo_lexique_1_bootloader : UInt16 = 13
let piccolo_lexique_1_byte : UInt16 = 14
let piccolo_lexique_1_case : UInt16 = 15
let piccolo_lexique_1_checkbank : UInt16 = 16
let piccolo_lexique_1_checknobank : UInt16 = 17
let piccolo_lexique_1_checkpic : UInt16 = 18
let piccolo_lexique_1_computed : UInt16 = 19
let piccolo_lexique_1_configuration : UInt16 = 20
let piccolo_lexique_1_const : UInt16 = 21
let piccolo_lexique_1_contextsave : UInt16 = 22
let piccolo_lexique_1_data : UInt16 = 23
let piccolo_lexique_1_data_31__36_ : UInt16 = 24
let piccolo_lexique_1_data_38_ : UInt16 = 25
let piccolo_lexique_1_do : UInt16 = 26
let piccolo_lexique_1_end : UInt16 = 27
let piccolo_lexique_1_else : UInt16 = 28
let piccolo_lexique_1_elsif : UInt16 = 29
let piccolo_lexique_1_ensures : UInt16 = 30
let piccolo_lexique_1_fast : UInt16 = 31
let piccolo_lexique_1_forever : UInt16 = 32
let piccolo_lexique_1_if : UInt16 = 33
let piccolo_lexique_1_implements : UInt16 = 34
let piccolo_lexique_1_include : UInt16 = 35
let piccolo_lexique_1_inline : UInt16 = 36
let piccolo_lexique_1_interrupt : UInt16 = 37
let piccolo_lexique_1_macro : UInt16 = 38
let piccolo_lexique_1_midrange : UInt16 = 39
let piccolo_lexique_1_nobank : UInt16 = 40
let piccolo_lexique_1_noreturn : UInt16 = 41
let piccolo_lexique_1_page : UInt16 = 42
let piccolo_lexique_1_pic_31__38_ : UInt16 = 43
let piccolo_lexique_1_preserved : UInt16 = 44
let piccolo_lexique_1_protected : UInt16 = 45
let piccolo_lexique_1_private : UInt16 = 46
let piccolo_lexique_1_ram : UInt16 = 47
let piccolo_lexique_1_requires : UInt16 = 48
let piccolo_lexique_1_rom : UInt16 = 49
let piccolo_lexique_1_routine : UInt16 = 50
let piccolo_lexique_1_switch : UInt16 = 51
let piccolo_lexique_1_unused : UInt16 = 52
let piccolo_lexique_1_uses : UInt16 = 53
let piccolo_lexique_1_w : UInt16 = 54
let piccolo_lexique_1_while : UInt16 = 55
let piccolo_lexique_1_addlw : UInt16 = 56
let piccolo_lexique_1_addwf : UInt16 = 57
let piccolo_lexique_1_addwfc : UInt16 = 58
let piccolo_lexique_1_andlw : UInt16 = 59
let piccolo_lexique_1_andwf : UInt16 = 60
let piccolo_lexique_1_bc : UInt16 = 61
let piccolo_lexique_1_bcf : UInt16 = 62
let piccolo_lexique_1_bn : UInt16 = 63
let piccolo_lexique_1_bnc : UInt16 = 64
let piccolo_lexique_1_bnn : UInt16 = 65
let piccolo_lexique_1_bov : UInt16 = 66
let piccolo_lexique_1_bnov : UInt16 = 67
let piccolo_lexique_1_bnz : UInt16 = 68
let piccolo_lexique_1_bsf : UInt16 = 69
let piccolo_lexique_1_bra : UInt16 = 70
let piccolo_lexique_1_btg : UInt16 = 71
let piccolo_lexique_1_bz : UInt16 = 72
let piccolo_lexique_1_call : UInt16 = 73
let piccolo_lexique_1_clrf : UInt16 = 74
let piccolo_lexique_1_clrw : UInt16 = 75
let piccolo_lexique_1_clrwdt : UInt16 = 76
let piccolo_lexique_1_comf : UInt16 = 77
let piccolo_lexique_1_daw : UInt16 = 78
let piccolo_lexique_1_decf : UInt16 = 79
let piccolo_lexique_1_incf : UInt16 = 80
let piccolo_lexique_1_iorlw : UInt16 = 81
let piccolo_lexique_1_iorwf : UInt16 = 82
let piccolo_lexique_1_fnop : UInt16 = 83
let piccolo_lexique_1_goto : UInt16 = 84
let piccolo_lexique_1_jsr : UInt16 = 85
let piccolo_lexique_1_jump : UInt16 = 86
let piccolo_lexique_1_lfsr : UInt16 = 87
let piccolo_lexique_1_ldataptr : UInt16 = 88
let piccolo_lexique_1_ldata_38_ptr : UInt16 = 89
let piccolo_lexique_1_ldata_31__36_ptr : UInt16 = 90
let piccolo_lexique_1_ltblptr : UInt16 = 91
let piccolo_lexique_1_mnop : UInt16 = 92
let piccolo_lexique_1_movf : UInt16 = 93
let piccolo_lexique_1_movff : UInt16 = 94
let piccolo_lexique_1_movlw : UInt16 = 95
let piccolo_lexique_1_movwf : UInt16 = 96
let piccolo_lexique_1_mullw : UInt16 = 97
let piccolo_lexique_1_mulwf : UInt16 = 98
let piccolo_lexique_1_negf : UInt16 = 99
let piccolo_lexique_1_nop : UInt16 = 100
let piccolo_lexique_1_nopbra : UInt16 = 101
let piccolo_lexique_1_pop : UInt16 = 102
let piccolo_lexique_1_option : UInt16 = 103
let piccolo_lexique_1_push : UInt16 = 104
let piccolo_lexique_1_rcall : UInt16 = 105
let piccolo_lexique_1_reset : UInt16 = 106
let piccolo_lexique_1_retlw : UInt16 = 107
let piccolo_lexique_1_rlcf : UInt16 = 108
let piccolo_lexique_1_rlf : UInt16 = 109
let piccolo_lexique_1_rlncf : UInt16 = 110
let piccolo_lexique_1_rrcf : UInt16 = 111
let piccolo_lexique_1_rrf : UInt16 = 112
let piccolo_lexique_1_rrncf : UInt16 = 113
let piccolo_lexique_1_setf : UInt16 = 114
let piccolo_lexique_1_sleep : UInt16 = 115
let piccolo_lexique_1_subfwb : UInt16 = 116
let piccolo_lexique_1_sublw : UInt16 = 117
let piccolo_lexique_1_subwf : UInt16 = 118
let piccolo_lexique_1_subwfb : UInt16 = 119
let piccolo_lexique_1_swapf : UInt16 = 120
let piccolo_lexique_1_tblrd : UInt16 = 121
let piccolo_lexique_1_tblwt : UInt16 = 122
let piccolo_lexique_1_tris : UInt16 = 123
let piccolo_lexique_1_xorlw : UInt16 = 124
let piccolo_lexique_1_xorwf : UInt16 = 125
let piccolo_lexique_1__2A_ : UInt16 = 126
let piccolo_lexique_1__2A__2B_ : UInt16 = 127
let piccolo_lexique_1__2C_ : UInt16 = 128
let piccolo_lexique_1__21__3D_ : UInt16 = 129
let piccolo_lexique_1__3C__3D_ : UInt16 = 130
let piccolo_lexique_1__3E__3D_ : UInt16 = 131
let piccolo_lexique_1__2A__2D_ : UInt16 = 132
let piccolo_lexique_1__2B__2A_ : UInt16 = 133
let piccolo_lexique_1__3B_ : UInt16 = 134
let piccolo_lexique_1__3A_ : UInt16 = 135
let piccolo_lexique_1__3D__3D_ : UInt16 = 136
let piccolo_lexique_1__3C_ : UInt16 = 137
let piccolo_lexique_1__3E_ : UInt16 = 138
let piccolo_lexique_1__5B_ : UInt16 = 139
let piccolo_lexique_1__5D_ : UInt16 = 140
let piccolo_lexique_1__2E_ : UInt16 = 141
let piccolo_lexique_1__21_ : UInt16 = 142
let piccolo_lexique_1__26_ : UInt16 = 143
let piccolo_lexique_1__7C_ : UInt16 = 144
let piccolo_lexique_1__3D_ : UInt16 = 145
let piccolo_lexique_1__7B_ : UInt16 = 146
let piccolo_lexique_1__7D_ : UInt16 = 147
let piccolo_lexique_1__28_ : UInt16 = 148
let piccolo_lexique_1__29_ : UInt16 = 149
let piccolo_lexique_1__2F_ : UInt16 = 150
let piccolo_lexique_1__2D_ : UInt16 = 151
let piccolo_lexique_1__2B_ : UInt16 = 152
let piccolo_lexique_1__3F_ : UInt16 = 153
let piccolo_lexique_1__5E_ : UInt16 = 154
let piccolo_lexique_1__3C__3C_ : UInt16 = 155
let piccolo_lexique_1__3E__3E_ : UInt16 = 156
let piccolo_lexique_1__7E_ : UInt16 = 157
let piccolo_lexique_1__25_ : UInt16 = 158
let piccolo_lexique_1__2E__2E__2E_ : UInt16 = 159
let piccolo_lexique_2_ERROR : UInt16 = 160
let piccolo_lexique_2_TEMPLATE : UInt16 = 161

//--------------------------------------------------------------------------------------------------

func piccolo_lexique_lexiqueIdentifier () -> String {
  return "piccolo_lexique"
}

//--------------------------------------------------------------------------------------------------

func piccolo_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords:", // 1
    "Instructions:", // 2
    "Delimiters:", // 3
    "Integer Constants:", // 4
    "Character Constants:", // 5
    "String Constants:", // 6
    "Comments:", // 7
    "Labels:", // 8
    "Lexical error", // 9
    "Template" // 10
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func piccolo_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "piccolo_lexique", // 0
    "piccolo_lexique-keywordStyle", // 1
    "piccolo_lexique-instructionStyle", // 2
    "piccolo_lexique-delimitersStyle", // 3
    "piccolo_lexique-integerStyle", // 4
    "piccolo_lexique-characterStyle", // 5
    "piccolo_lexique-stringStyle", // 6
    "piccolo_lexique-commentStyle", // 7
    "piccolo_lexique-labelStyle", // 8
    "piccolo_lexique.ERROR", // 9
    "piccolo_lexique.TEMPLATE" // 10
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class SWIFT_Lexique_piccolo_lexique : SWIFT_Lexique {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_charValue : UInt32 = 0
  private var mLexicalAttribute_identifierString : String = ""
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return piccolo_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 159
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBPreferenceProperty <NSFont> { return gFont_piccolo_lexique }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBPreferenceProperty <Int> { return gLineHeight_piccolo_lexique }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <NSColor> {
    return gColors_piccolo_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gBoldStyle_piccolo_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {
    return gItalicStyle_piccolo_lexique [Int (inStyleIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : piccolo_lexique_1_identifier
      8, // 2 : piccolo_lexique_1_label
      4, // 3 : piccolo_lexique_1_integer
      5, // 4 : piccolo_lexique_1_literal_5F_char
      6, // 5 : piccolo_lexique_1_literal_5F_string
      7, // 6 : piccolo_lexique_1_comment
      7, // 7 : piccolo_lexique_1_commentMark
      1, // 8 : piccolo_lexique_1_bank
      1, // 9 : piccolo_lexique_1_banksave
      1, // 10 : piccolo_lexique_1_banksel
      1, // 11 : piccolo_lexique_1_baseline
      1, // 12 : piccolo_lexique_1_block
      1, // 13 : piccolo_lexique_1_bootloader
      1, // 14 : piccolo_lexique_1_byte
      1, // 15 : piccolo_lexique_1_case
      1, // 16 : piccolo_lexique_1_checkbank
      1, // 17 : piccolo_lexique_1_checknobank
      1, // 18 : piccolo_lexique_1_checkpic
      1, // 19 : piccolo_lexique_1_computed
      1, // 20 : piccolo_lexique_1_configuration
      1, // 21 : piccolo_lexique_1_const
      1, // 22 : piccolo_lexique_1_contextsave
      1, // 23 : piccolo_lexique_1_data
      1, // 24 : piccolo_lexique_1_data_31__36_
      1, // 25 : piccolo_lexique_1_data_38_
      1, // 26 : piccolo_lexique_1_do
      1, // 27 : piccolo_lexique_1_end
      1, // 28 : piccolo_lexique_1_else
      1, // 29 : piccolo_lexique_1_elsif
      1, // 30 : piccolo_lexique_1_ensures
      1, // 31 : piccolo_lexique_1_fast
      1, // 32 : piccolo_lexique_1_forever
      1, // 33 : piccolo_lexique_1_if
      1, // 34 : piccolo_lexique_1_implements
      1, // 35 : piccolo_lexique_1_include
      1, // 36 : piccolo_lexique_1_inline
      1, // 37 : piccolo_lexique_1_interrupt
      1, // 38 : piccolo_lexique_1_macro
      1, // 39 : piccolo_lexique_1_midrange
      1, // 40 : piccolo_lexique_1_nobank
      1, // 41 : piccolo_lexique_1_noreturn
      1, // 42 : piccolo_lexique_1_page
      1, // 43 : piccolo_lexique_1_pic_31__38_
      1, // 44 : piccolo_lexique_1_preserved
      1, // 45 : piccolo_lexique_1_protected
      1, // 46 : piccolo_lexique_1_private
      1, // 47 : piccolo_lexique_1_ram
      1, // 48 : piccolo_lexique_1_requires
      1, // 49 : piccolo_lexique_1_rom
      1, // 50 : piccolo_lexique_1_routine
      1, // 51 : piccolo_lexique_1_switch
      1, // 52 : piccolo_lexique_1_unused
      1, // 53 : piccolo_lexique_1_uses
      1, // 54 : piccolo_lexique_1_w
      1, // 55 : piccolo_lexique_1_while
      2, // 56 : piccolo_lexique_1_addlw
      2, // 57 : piccolo_lexique_1_addwf
      2, // 58 : piccolo_lexique_1_addwfc
      2, // 59 : piccolo_lexique_1_andlw
      2, // 60 : piccolo_lexique_1_andwf
      2, // 61 : piccolo_lexique_1_bc
      2, // 62 : piccolo_lexique_1_bcf
      2, // 63 : piccolo_lexique_1_bn
      2, // 64 : piccolo_lexique_1_bnc
      2, // 65 : piccolo_lexique_1_bnn
      2, // 66 : piccolo_lexique_1_bov
      2, // 67 : piccolo_lexique_1_bnov
      2, // 68 : piccolo_lexique_1_bnz
      2, // 69 : piccolo_lexique_1_bsf
      2, // 70 : piccolo_lexique_1_bra
      2, // 71 : piccolo_lexique_1_btg
      2, // 72 : piccolo_lexique_1_bz
      2, // 73 : piccolo_lexique_1_call
      2, // 74 : piccolo_lexique_1_clrf
      2, // 75 : piccolo_lexique_1_clrw
      2, // 76 : piccolo_lexique_1_clrwdt
      2, // 77 : piccolo_lexique_1_comf
      2, // 78 : piccolo_lexique_1_daw
      2, // 79 : piccolo_lexique_1_decf
      2, // 80 : piccolo_lexique_1_incf
      2, // 81 : piccolo_lexique_1_iorlw
      2, // 82 : piccolo_lexique_1_iorwf
      2, // 83 : piccolo_lexique_1_fnop
      2, // 84 : piccolo_lexique_1_goto
      2, // 85 : piccolo_lexique_1_jsr
      2, // 86 : piccolo_lexique_1_jump
      2, // 87 : piccolo_lexique_1_lfsr
      2, // 88 : piccolo_lexique_1_ldataptr
      2, // 89 : piccolo_lexique_1_ldata_38_ptr
      2, // 90 : piccolo_lexique_1_ldata_31__36_ptr
      2, // 91 : piccolo_lexique_1_ltblptr
      2, // 92 : piccolo_lexique_1_mnop
      2, // 93 : piccolo_lexique_1_movf
      2, // 94 : piccolo_lexique_1_movff
      2, // 95 : piccolo_lexique_1_movlw
      2, // 96 : piccolo_lexique_1_movwf
      2, // 97 : piccolo_lexique_1_mullw
      2, // 98 : piccolo_lexique_1_mulwf
      2, // 99 : piccolo_lexique_1_negf
      2, // 100 : piccolo_lexique_1_nop
      2, // 101 : piccolo_lexique_1_nopbra
      2, // 102 : piccolo_lexique_1_pop
      2, // 103 : piccolo_lexique_1_option
      2, // 104 : piccolo_lexique_1_push
      2, // 105 : piccolo_lexique_1_rcall
      2, // 106 : piccolo_lexique_1_reset
      2, // 107 : piccolo_lexique_1_retlw
      2, // 108 : piccolo_lexique_1_rlcf
      2, // 109 : piccolo_lexique_1_rlf
      2, // 110 : piccolo_lexique_1_rlncf
      2, // 111 : piccolo_lexique_1_rrcf
      2, // 112 : piccolo_lexique_1_rrf
      2, // 113 : piccolo_lexique_1_rrncf
      2, // 114 : piccolo_lexique_1_setf
      2, // 115 : piccolo_lexique_1_sleep
      2, // 116 : piccolo_lexique_1_subfwb
      2, // 117 : piccolo_lexique_1_sublw
      2, // 118 : piccolo_lexique_1_subwf
      2, // 119 : piccolo_lexique_1_subwfb
      2, // 120 : piccolo_lexique_1_swapf
      2, // 121 : piccolo_lexique_1_tblrd
      2, // 122 : piccolo_lexique_1_tblwt
      2, // 123 : piccolo_lexique_1_tris
      2, // 124 : piccolo_lexique_1_xorlw
      2, // 125 : piccolo_lexique_1_xorwf
      3, // 126 : piccolo_lexique_1__2A_
      3, // 127 : piccolo_lexique_1__2A__2B_
      3, // 128 : piccolo_lexique_1__2C_
      3, // 129 : piccolo_lexique_1__21__3D_
      3, // 130 : piccolo_lexique_1__3C__3D_
      3, // 131 : piccolo_lexique_1__3E__3D_
      3, // 132 : piccolo_lexique_1__2A__2D_
      3, // 133 : piccolo_lexique_1__2B__2A_
      3, // 134 : piccolo_lexique_1__3B_
      3, // 135 : piccolo_lexique_1__3A_
      3, // 136 : piccolo_lexique_1__3D__3D_
      3, // 137 : piccolo_lexique_1__3C_
      3, // 138 : piccolo_lexique_1__3E_
      3, // 139 : piccolo_lexique_1__5B_
      3, // 140 : piccolo_lexique_1__5D_
      3, // 141 : piccolo_lexique_1__2E_
      3, // 142 : piccolo_lexique_1__21_
      3, // 143 : piccolo_lexique_1__26_
      3, // 144 : piccolo_lexique_1__7C_
      3, // 145 : piccolo_lexique_1__3D_
      3, // 146 : piccolo_lexique_1__7B_
      3, // 147 : piccolo_lexique_1__7D_
      3, // 148 : piccolo_lexique_1__28_
      3, // 149 : piccolo_lexique_1__29_
      3, // 150 : piccolo_lexique_1__2F_
      3, // 151 : piccolo_lexique_1__2D_
      3, // 152 : piccolo_lexique_1__2B_
      3, // 153 : piccolo_lexique_1__3F_
      3, // 154 : piccolo_lexique_1__5E_
      3, // 155 : piccolo_lexique_1__3C__3C_
      3, // 156 : piccolo_lexique_1__3E__3E_
      3, // 157 : piccolo_lexique_1__7E_
      3, // 158 : piccolo_lexique_1__25_
      3, // 159 : piccolo_lexique_1__2E__2E__2E_
      9, // 160 : piccolo_lexique_2_ERROR
      10  // 161 : piccolo_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : piccolo_lexique_1_identifier
      true, // 2 : piccolo_lexique_1_label
      true, // 3 : piccolo_lexique_1_integer
      true, // 4 : piccolo_lexique_1_literal_5F_char
      false, // 5 : piccolo_lexique_1_literal_5F_string
      false, // 6 : piccolo_lexique_1_comment
      false, // 7 : piccolo_lexique_1_commentMark
      true, // 8 : piccolo_lexique_1_bank
      true, // 9 : piccolo_lexique_1_banksave
      true, // 10 : piccolo_lexique_1_banksel
      true, // 11 : piccolo_lexique_1_baseline
      true, // 12 : piccolo_lexique_1_block
      true, // 13 : piccolo_lexique_1_bootloader
      true, // 14 : piccolo_lexique_1_byte
      true, // 15 : piccolo_lexique_1_case
      true, // 16 : piccolo_lexique_1_checkbank
      true, // 17 : piccolo_lexique_1_checknobank
      true, // 18 : piccolo_lexique_1_checkpic
      true, // 19 : piccolo_lexique_1_computed
      true, // 20 : piccolo_lexique_1_configuration
      true, // 21 : piccolo_lexique_1_const
      true, // 22 : piccolo_lexique_1_contextsave
      true, // 23 : piccolo_lexique_1_data
      true, // 24 : piccolo_lexique_1_data_31__36_
      true, // 25 : piccolo_lexique_1_data_38_
      true, // 26 : piccolo_lexique_1_do
      true, // 27 : piccolo_lexique_1_end
      true, // 28 : piccolo_lexique_1_else
      true, // 29 : piccolo_lexique_1_elsif
      true, // 30 : piccolo_lexique_1_ensures
      true, // 31 : piccolo_lexique_1_fast
      true, // 32 : piccolo_lexique_1_forever
      true, // 33 : piccolo_lexique_1_if
      true, // 34 : piccolo_lexique_1_implements
      true, // 35 : piccolo_lexique_1_include
      true, // 36 : piccolo_lexique_1_inline
      true, // 37 : piccolo_lexique_1_interrupt
      true, // 38 : piccolo_lexique_1_macro
      true, // 39 : piccolo_lexique_1_midrange
      true, // 40 : piccolo_lexique_1_nobank
      true, // 41 : piccolo_lexique_1_noreturn
      true, // 42 : piccolo_lexique_1_page
      true, // 43 : piccolo_lexique_1_pic_31__38_
      true, // 44 : piccolo_lexique_1_preserved
      true, // 45 : piccolo_lexique_1_protected
      true, // 46 : piccolo_lexique_1_private
      true, // 47 : piccolo_lexique_1_ram
      true, // 48 : piccolo_lexique_1_requires
      true, // 49 : piccolo_lexique_1_rom
      true, // 50 : piccolo_lexique_1_routine
      true, // 51 : piccolo_lexique_1_switch
      true, // 52 : piccolo_lexique_1_unused
      true, // 53 : piccolo_lexique_1_uses
      true, // 54 : piccolo_lexique_1_w
      true, // 55 : piccolo_lexique_1_while
      true, // 56 : piccolo_lexique_1_addlw
      true, // 57 : piccolo_lexique_1_addwf
      true, // 58 : piccolo_lexique_1_addwfc
      true, // 59 : piccolo_lexique_1_andlw
      true, // 60 : piccolo_lexique_1_andwf
      true, // 61 : piccolo_lexique_1_bc
      true, // 62 : piccolo_lexique_1_bcf
      true, // 63 : piccolo_lexique_1_bn
      true, // 64 : piccolo_lexique_1_bnc
      true, // 65 : piccolo_lexique_1_bnn
      true, // 66 : piccolo_lexique_1_bov
      true, // 67 : piccolo_lexique_1_bnov
      true, // 68 : piccolo_lexique_1_bnz
      true, // 69 : piccolo_lexique_1_bsf
      true, // 70 : piccolo_lexique_1_bra
      true, // 71 : piccolo_lexique_1_btg
      true, // 72 : piccolo_lexique_1_bz
      true, // 73 : piccolo_lexique_1_call
      true, // 74 : piccolo_lexique_1_clrf
      true, // 75 : piccolo_lexique_1_clrw
      true, // 76 : piccolo_lexique_1_clrwdt
      true, // 77 : piccolo_lexique_1_comf
      true, // 78 : piccolo_lexique_1_daw
      true, // 79 : piccolo_lexique_1_decf
      true, // 80 : piccolo_lexique_1_incf
      true, // 81 : piccolo_lexique_1_iorlw
      true, // 82 : piccolo_lexique_1_iorwf
      true, // 83 : piccolo_lexique_1_fnop
      true, // 84 : piccolo_lexique_1_goto
      true, // 85 : piccolo_lexique_1_jsr
      true, // 86 : piccolo_lexique_1_jump
      true, // 87 : piccolo_lexique_1_lfsr
      true, // 88 : piccolo_lexique_1_ldataptr
      true, // 89 : piccolo_lexique_1_ldata_38_ptr
      true, // 90 : piccolo_lexique_1_ldata_31__36_ptr
      true, // 91 : piccolo_lexique_1_ltblptr
      true, // 92 : piccolo_lexique_1_mnop
      true, // 93 : piccolo_lexique_1_movf
      true, // 94 : piccolo_lexique_1_movff
      true, // 95 : piccolo_lexique_1_movlw
      true, // 96 : piccolo_lexique_1_movwf
      true, // 97 : piccolo_lexique_1_mullw
      true, // 98 : piccolo_lexique_1_mulwf
      true, // 99 : piccolo_lexique_1_negf
      true, // 100 : piccolo_lexique_1_nop
      true, // 101 : piccolo_lexique_1_nopbra
      true, // 102 : piccolo_lexique_1_pop
      true, // 103 : piccolo_lexique_1_option
      true, // 104 : piccolo_lexique_1_push
      true, // 105 : piccolo_lexique_1_rcall
      true, // 106 : piccolo_lexique_1_reset
      true, // 107 : piccolo_lexique_1_retlw
      true, // 108 : piccolo_lexique_1_rlcf
      true, // 109 : piccolo_lexique_1_rlf
      true, // 110 : piccolo_lexique_1_rlncf
      true, // 111 : piccolo_lexique_1_rrcf
      true, // 112 : piccolo_lexique_1_rrf
      true, // 113 : piccolo_lexique_1_rrncf
      true, // 114 : piccolo_lexique_1_setf
      true, // 115 : piccolo_lexique_1_sleep
      true, // 116 : piccolo_lexique_1_subfwb
      true, // 117 : piccolo_lexique_1_sublw
      true, // 118 : piccolo_lexique_1_subwf
      true, // 119 : piccolo_lexique_1_subwfb
      true, // 120 : piccolo_lexique_1_swapf
      true, // 121 : piccolo_lexique_1_tblrd
      true, // 122 : piccolo_lexique_1_tblwt
      true, // 123 : piccolo_lexique_1_tris
      true, // 124 : piccolo_lexique_1_xorlw
      true, // 125 : piccolo_lexique_1_xorwf
      true, // 126 : piccolo_lexique_1__2A_
      true, // 127 : piccolo_lexique_1__2A__2B_
      true, // 128 : piccolo_lexique_1__2C_
      true, // 129 : piccolo_lexique_1__21__3D_
      true, // 130 : piccolo_lexique_1__3C__3D_
      true, // 131 : piccolo_lexique_1__3E__3D_
      true, // 132 : piccolo_lexique_1__2A__2D_
      true, // 133 : piccolo_lexique_1__2B__2A_
      true, // 134 : piccolo_lexique_1__3B_
      true, // 135 : piccolo_lexique_1__3A_
      true, // 136 : piccolo_lexique_1__3D__3D_
      true, // 137 : piccolo_lexique_1__3C_
      true, // 138 : piccolo_lexique_1__3E_
      true, // 139 : piccolo_lexique_1__5B_
      true, // 140 : piccolo_lexique_1__5D_
      true, // 141 : piccolo_lexique_1__2E_
      true, // 142 : piccolo_lexique_1__21_
      true, // 143 : piccolo_lexique_1__26_
      true, // 144 : piccolo_lexique_1__7C_
      true, // 145 : piccolo_lexique_1__3D_
      true, // 146 : piccolo_lexique_1__7B_
      true, // 147 : piccolo_lexique_1__7D_
      true, // 148 : piccolo_lexique_1__28_
      true, // 149 : piccolo_lexique_1__29_
      true, // 150 : piccolo_lexique_1__2F_
      true, // 151 : piccolo_lexique_1__2D_
      true, // 152 : piccolo_lexique_1__2B_
      true, // 153 : piccolo_lexique_1__3F_
      true, // 154 : piccolo_lexique_1__5E_
      true, // 155 : piccolo_lexique_1__3C__3C_
      true, // 156 : piccolo_lexique_1__3E__3E_
      true, // 157 : piccolo_lexique_1__7E_
      true, // 158 : piccolo_lexique_1__25_
      true, // 159 : piccolo_lexique_1__2E__2E__2E_
      false, // 160 : piccolo_lexique_2_ERROR
      false  // 161 : piccolo_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {
    return [
      "Routine Definition" /* routineDefinition */,
      "Routine Call" /* routineCall */,
      "Variable Declaration" /* variableDeclaration */,
      "Variable Use" /* variableUse */,
      "Constant Declaration" /* constantDeclaration */
    ]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 8
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return piccolo_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return piccolo_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_charValue = 0
    self.mLexicalAttribute_identifierString = ""
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForCharWithFunction (isUnicodeLetter)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (self.previousChar))
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForCharWithFunction (isUnicodeLetter) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_piccolo_5F_lexique_instructionKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if (tokenCode == 0) {
        tokenCode = search_into_piccolo_5F_lexique_controlKeyWordList (mLexicalAttribute_identifierString) ;
      }
      if tokenCode == 0 {
        tokenCode = piccolo_lexique_1_identifier ;
      }
    }else if scanningOk && (self.testForInputChar (64)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = piccolo_lexique_1_label
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
      tokenCode = piccolo_lexique_1_integer
    }else if scanningOk && (self.testForInputString ("0b", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:49)) {
          scanner_cocoa_routine_enterBinDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = piccolo_lexique_1_integer
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
      tokenCode = piccolo_lexique_1_integer
    }else if scanningOk && (self.testForInputChar (39)) {
      if scanningOk && (self.testForInputChar (92)) {
        if scanningOk && (self.testForInputChar (102)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 12)
        }else if scanningOk && (self.testForInputChar (110)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 10)
        }else if scanningOk && (self.testForInputChar (114)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 13)
        }else if scanningOk && (self.testForInputChar (116)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 9)
        }else if scanningOk && (self.testForInputChar (118)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 11)
        }else if scanningOk && (self.testForInputChar (92)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 92)
        }else if scanningOk && (self.testForInputChar (48)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 0)
        }else if scanningOk && (self.testForInputChar (39)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 39)
        }else if scanningOk && (self.testForInputChar (120) || self.testForInputChar (88)) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            while (loop && scanningOk) {
              scanner_cocoa_routine_enterHexDigitIntoASCIIcharacter (&scanningOk, &self.mLexicalAttribute_charValue, self.previousChar)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              }else{
                loop = false
              }
            }
            loop = true
          }else{
            scanningOk = false
          }
        }else{
          scanningOk = false
        }
      }else if scanningOk && (self.testForInputFromChar (32, toChar:126)) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, self.previousChar)
      }else{
        scanningOk = false
      }
      if scanningOk && (self.testForInputChar (39)) {
        tokenCode = piccolo_lexique_1_literal_5F_char
      }else{
        scanningOk = false
      }
    }else if scanningOk && self.testForInputString ("...", advance: true) {
      tokenCode = piccolo_lexique_1__2E__2E__2E_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = piccolo_lexique_1__3E__3E_
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = piccolo_lexique_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = piccolo_lexique_1__3D__3D_
    }else if scanningOk && self.testForInputString ("<=", advance: true) {
      tokenCode = piccolo_lexique_1__3C__3D_
    }else if scanningOk && self.testForInputString ("<<", advance: true) {
      tokenCode = piccolo_lexique_1__3C__3C_
    }else if scanningOk && self.testForInputString ("+*", advance: true) {
      tokenCode = piccolo_lexique_1__2B__2A_
    }else if scanningOk && self.testForInputString ("*-", advance: true) {
      tokenCode = piccolo_lexique_1__2A__2D_
    }else if scanningOk && self.testForInputString ("*+", advance: true) {
      tokenCode = piccolo_lexique_1__2A__2B_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = piccolo_lexique_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = piccolo_lexique_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = piccolo_lexique_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = piccolo_lexique_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = piccolo_lexique_1__7B_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = piccolo_lexique_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = piccolo_lexique_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = piccolo_lexique_1__5B_
    }else if scanningOk && self.testForInputString ("?", advance: true) {
      tokenCode = piccolo_lexique_1__3F_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = piccolo_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = piccolo_lexique_1__3D_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = piccolo_lexique_1__3C_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = piccolo_lexique_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = piccolo_lexique_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = piccolo_lexique_1__2F_
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = piccolo_lexique_1__2E_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = piccolo_lexique_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = piccolo_lexique_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = piccolo_lexique_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = piccolo_lexique_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = piccolo_lexique_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = piccolo_lexique_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = piccolo_lexique_1__26_
    }else if scanningOk && self.testForInputString ("%", advance: true) {
      tokenCode = piccolo_lexique_1__25_
    }else if scanningOk && self.testForInputString ("!", advance: true) {
      tokenCode = piccolo_lexique_1__21_
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
        tokenCode = piccolo_lexique_1_literal_5F_string
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (35)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = piccolo_lexique_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = piccolo_lexique_1_comment
      }
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = piccolo_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = piccolo_lexique_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//--------------------------------------------------------------------------------------------------

/*

*/


//--------------------------------------------------------------------------------------------------
//
//             Key words table 'controlKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_piccolo_5F_lexique_controlKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "w" : piccolo_lexique_1_w,
    "do" : piccolo_lexique_1_do,
    "if" : piccolo_lexique_1_if,
    "end" : piccolo_lexique_1_end,
    "ram" : piccolo_lexique_1_ram,
    "rom" : piccolo_lexique_1_rom,
    "bank" : piccolo_lexique_1_bank,
    "byte" : piccolo_lexique_1_byte,
    "case" : piccolo_lexique_1_case,
    "data" : piccolo_lexique_1_data,
    "else" : piccolo_lexique_1_else,
    "fast" : piccolo_lexique_1_fast,
    "page" : piccolo_lexique_1_page,
    "uses" : piccolo_lexique_1_uses,
    "block" : piccolo_lexique_1_block,
    "const" : piccolo_lexique_1_const,
    "data8" : piccolo_lexique_1_data_38_,
    "elsif" : piccolo_lexique_1_elsif,
    "macro" : piccolo_lexique_1_macro,
    "pic18" : piccolo_lexique_1_pic_31__38_,
    "while" : piccolo_lexique_1_while,
    "data16" : piccolo_lexique_1_data_31__36_,
    "inline" : piccolo_lexique_1_inline,
    "nobank" : piccolo_lexique_1_nobank,
    "switch" : piccolo_lexique_1_switch,
    "unused" : piccolo_lexique_1_unused,
    "banksel" : piccolo_lexique_1_banksel,
    "ensures" : piccolo_lexique_1_ensures,
    "forever" : piccolo_lexique_1_forever,
    "include" : piccolo_lexique_1_include,
    "private" : piccolo_lexique_1_private,
    "routine" : piccolo_lexique_1_routine,
    "banksave" : piccolo_lexique_1_banksave,
    "baseline" : piccolo_lexique_1_baseline,
    "checkpic" : piccolo_lexique_1_checkpic,
    "computed" : piccolo_lexique_1_computed,
    "midrange" : piccolo_lexique_1_midrange,
    "noreturn" : piccolo_lexique_1_noreturn,
    "requires" : piccolo_lexique_1_requires,
    "checkbank" : piccolo_lexique_1_checkbank,
    "interrupt" : piccolo_lexique_1_interrupt,
    "preserved" : piccolo_lexique_1_preserved,
    "protected" : piccolo_lexique_1_protected,
    "bootloader" : piccolo_lexique_1_bootloader,
    "implements" : piccolo_lexique_1_implements,
    "checknobank" : piccolo_lexique_1_checknobank,
    "contextsave" : piccolo_lexique_1_contextsave,
    "configuration" : piccolo_lexique_1_configuration
  ]
  return dictionary [inSearchedString, default: piccolo_lexique_1_]
}

//--------------------------------------------------------------------------------------------------
//
//             Key words table 'instructionKeyWordList'      
//
//--------------------------------------------------------------------------------------------------

fileprivate func search_into_piccolo_5F_lexique_instructionKeyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "bc" : piccolo_lexique_1_bc,
    "bn" : piccolo_lexique_1_bn,
    "bz" : piccolo_lexique_1_bz,
    "bcf" : piccolo_lexique_1_bcf,
    "bnc" : piccolo_lexique_1_bnc,
    "bnn" : piccolo_lexique_1_bnn,
    "bnz" : piccolo_lexique_1_bnz,
    "bov" : piccolo_lexique_1_bov,
    "bra" : piccolo_lexique_1_bra,
    "bsf" : piccolo_lexique_1_bsf,
    "btg" : piccolo_lexique_1_btg,
    "daw" : piccolo_lexique_1_daw,
    "jsr" : piccolo_lexique_1_jsr,
    "nop" : piccolo_lexique_1_nop,
    "pop" : piccolo_lexique_1_pop,
    "rlf" : piccolo_lexique_1_rlf,
    "rrf" : piccolo_lexique_1_rrf,
    "bnov" : piccolo_lexique_1_bnov,
    "call" : piccolo_lexique_1_call,
    "clrf" : piccolo_lexique_1_clrf,
    "clrw" : piccolo_lexique_1_clrw,
    "comf" : piccolo_lexique_1_comf,
    "decf" : piccolo_lexique_1_decf,
    "fnop" : piccolo_lexique_1_fnop,
    "goto" : piccolo_lexique_1_goto,
    "incf" : piccolo_lexique_1_incf,
    "jump" : piccolo_lexique_1_jump,
    "lfsr" : piccolo_lexique_1_lfsr,
    "mnop" : piccolo_lexique_1_mnop,
    "movf" : piccolo_lexique_1_movf,
    "negf" : piccolo_lexique_1_negf,
    "push" : piccolo_lexique_1_push,
    "rlcf" : piccolo_lexique_1_rlcf,
    "rrcf" : piccolo_lexique_1_rrcf,
    "setf" : piccolo_lexique_1_setf,
    "tris" : piccolo_lexique_1_tris,
    "addlw" : piccolo_lexique_1_addlw,
    "addwf" : piccolo_lexique_1_addwf,
    "andlw" : piccolo_lexique_1_andlw,
    "andwf" : piccolo_lexique_1_andwf,
    "iorlw" : piccolo_lexique_1_iorlw,
    "iorwf" : piccolo_lexique_1_iorwf,
    "movff" : piccolo_lexique_1_movff,
    "movlw" : piccolo_lexique_1_movlw,
    "movwf" : piccolo_lexique_1_movwf,
    "mullw" : piccolo_lexique_1_mullw,
    "mulwf" : piccolo_lexique_1_mulwf,
    "rcall" : piccolo_lexique_1_rcall,
    "reset" : piccolo_lexique_1_reset,
    "retlw" : piccolo_lexique_1_retlw,
    "rlncf" : piccolo_lexique_1_rlncf,
    "rrncf" : piccolo_lexique_1_rrncf,
    "sleep" : piccolo_lexique_1_sleep,
    "sublw" : piccolo_lexique_1_sublw,
    "subwf" : piccolo_lexique_1_subwf,
    "swapf" : piccolo_lexique_1_swapf,
    "tblrd" : piccolo_lexique_1_tblrd,
    "tblwt" : piccolo_lexique_1_tblwt,
    "xorlw" : piccolo_lexique_1_xorlw,
    "xorwf" : piccolo_lexique_1_xorwf,
    "addwfc" : piccolo_lexique_1_addwfc,
    "clrwdt" : piccolo_lexique_1_clrwdt,
    "nopbra" : piccolo_lexique_1_nopbra,
    "option" : piccolo_lexique_1_option,
    "subfwb" : piccolo_lexique_1_subfwb,
    "subwfb" : piccolo_lexique_1_subwfb,
    "ltblptr" : piccolo_lexique_1_ltblptr,
    "ldataptr" : piccolo_lexique_1_ldataptr,
    "ldata8ptr" : piccolo_lexique_1_ldata_38_ptr,
    "ldata16ptr" : piccolo_lexique_1_ldata_31__36_ptr
  ]
  return dictionary [inSearchedString, default: piccolo_lexique_1_]
}



//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


