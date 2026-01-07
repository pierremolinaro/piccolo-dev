//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE piccolo_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_piccolo_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_piccolo_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_piccolo_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_piccolo_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_piccolo_lexique-keywordStyle")
  private var mColorFor_keywordStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-keywordStyle")
  private var mBoldFor_keywordStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-keywordStyle")
  private var mItalicFor_keywordStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-instructionStyle")
  private var mColorFor_instructionStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-instructionStyle")
  private var mBoldFor_instructionStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-instructionStyle")
  private var mItalicFor_instructionStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-characterStyle")
  private var mColorFor_characterStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-characterStyle")
  private var mBoldFor_characterStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-characterStyle")
  private var mItalicFor_characterStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false

  @AppStorage("ColorFor_piccolo_lexique-labelStyle")
  private var mColorFor_labelStyle : Color = .black

  @AppStorage("BoldFor_piccolo_lexique-labelStyle")
  private var mBoldFor_labelStyle : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique-labelStyle")
  private var mItalicFor_labelStyle : Bool = false


  @AppStorage("ColorFor_piccolo_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_piccolo_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_piccolo_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_piccolo_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_piccolo_lexique_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Keywords:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordStyle)
        }
      }
      LabeledContent ("Instructions:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_instructionStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_instructionStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_instructionStyle)
        }
      }
      LabeledContent ("Delimiters:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Integer Constants:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("Character Constants:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_characterStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_characterStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_characterStyle)
        }
      }
      LabeledContent ("String Constants:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Comments:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Labels:") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_labelStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_labelStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_labelStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

#Preview {
  SettingViewFor_piccolo_lexique ()
}

//--------------------------------------------------------------------------------------------------

class ScannerFor_piccolo_lexique : SWIFT_Scanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [SWIFT_Token] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
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

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
  final var mColorFor_keywordStyle : Color = .black
  final var mBoldFor_keywordStyle : Bool = false
  final var mItalicFor_keywordStyle : Bool = false
  final var mColorFor_instructionStyle : Color = .black
  final var mBoldFor_instructionStyle : Bool = false
  final var mItalicFor_instructionStyle : Bool = false
  final var mColorFor_delimitersStyle : Color = .black
  final var mBoldFor_delimitersStyle : Bool = false
  final var mItalicFor_delimitersStyle : Bool = false
  final var mColorFor_integerStyle : Color = .black
  final var mBoldFor_integerStyle : Bool = false
  final var mItalicFor_integerStyle : Bool = false
  final var mColorFor_characterStyle : Color = .black
  final var mBoldFor_characterStyle : Bool = false
  final var mItalicFor_characterStyle : Bool = false
  final var mColorFor_stringStyle : Color = .black
  final var mBoldFor_stringStyle : Bool = false
  final var mItalicFor_stringStyle : Bool = false
  final var mColorFor_commentStyle : Color = .black
  final var mBoldFor_commentStyle : Bool = false
  final var mItalicFor_commentStyle : Bool = false
  final var mColorFor_labelStyle : Color = .black
  final var mBoldFor_labelStyle : Bool = false
  final var mItalicFor_labelStyle : Bool = false
  final var mColorFor_lexical_error : Color = .red
  final var mBoldFor_lexical_error : Bool = false
  final var mItalicFor_lexical_error : Bool = false
  final var mColorFor_template : Color = .gray
  final var mBoldFor_template : Bool = false
  final var mItalicFor_template : Bool = false
  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_piccolo_lexique"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_piccolo_lexique"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-keywordStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordStyle != v {
        self.mColorFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-keywordStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-keywordStyle")
      if self.mBoldFor_keywordStyle != v {
        self.mBoldFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-keywordStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-keywordStyle")
      if self.mItalicFor_keywordStyle != v {
        self.mItalicFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-instructionStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_instructionStyle != v {
        self.mColorFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-instructionStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-instructionStyle")
      if self.mBoldFor_instructionStyle != v {
        self.mBoldFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-instructionStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-instructionStyle")
      if self.mItalicFor_instructionStyle != v {
        self.mItalicFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-characterStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_characterStyle != v {
        self.mColorFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-characterStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-characterStyle")
      if self.mBoldFor_characterStyle != v {
        self.mBoldFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-characterStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-characterStyle")
      if self.mItalicFor_characterStyle != v {
        self.mItalicFor_characterStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique-labelStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_labelStyle != v {
        self.mColorFor_labelStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique-labelStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique-labelStyle")
      if self.mBoldFor_labelStyle != v {
        self.mBoldFor_labelStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique-labelStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique-labelStyle")
      if self.mItalicFor_labelStyle != v {
        self.mItalicFor_labelStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccolo_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccolo_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_piccolo_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccolo_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccolo_lexique_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for keywordStyle
      if self.mColorFor_keywordStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keywordStyle)
      }
      if self.mBoldFor_keywordStyle && self.mItalicFor_keywordStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keywordStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keywordStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for instructionStyle
      if self.mColorFor_instructionStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_instructionStyle)
      }
      if self.mBoldFor_instructionStyle && self.mItalicFor_instructionStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_instructionStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_instructionStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitersStyle
      if self.mColorFor_delimitersStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitersStyle)
      }
      if self.mBoldFor_delimitersStyle && self.mItalicFor_delimitersStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitersStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitersStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for characterStyle
      if self.mColorFor_characterStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_characterStyle)
      }
      if self.mBoldFor_characterStyle && self.mItalicFor_characterStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_characterStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_characterStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for labelStyle
      if self.mColorFor_labelStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_labelStyle)
      }
      if self.mBoldFor_labelStyle && self.mItalicFor_labelStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_labelStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_labelStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = SWIFT_Token (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : SWIFT_Token = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0) ? 0 : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
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
    if scanningOk && (self.testForChar_isUnicodeLetter ()) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_identifierString, scanner_cocoa_function_toLower (self.previousChar))
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
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
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_piccolo_5F_lexique_controlKeyWordList : [String : UInt16] = [
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

fileprivate func search_into_piccolo_5F_lexique_controlKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_piccolo_5F_lexique_controlKeyWordList [inSearchedString, default: piccolo_lexique_1_]
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'instructionKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_piccolo_5F_lexique_instructionKeyWordList : [String : UInt16] = [
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

fileprivate func search_into_piccolo_5F_lexique_instructionKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_piccolo_5F_lexique_instructionKeyWordList [inSearchedString, default: piccolo_lexique_1_]
}



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

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


