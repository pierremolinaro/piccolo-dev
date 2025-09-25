//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE piccoloDevice_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI
import AppKit

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_piccoloDevice_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_piccoloDevice_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_piccoloDevice_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_piccoloDevice_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_piccoloDevice_lexique-keywordStyle")
  private var mColorFor_keywordStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-keywordStyle")
  private var mBoldFor_keywordStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-keywordStyle")
  private var mItalicFor_keywordStyle : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique-instructionStyle")
  private var mColorFor_instructionStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-instructionStyle")
  private var mBoldFor_instructionStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-instructionStyle")
  private var mItalicFor_instructionStyle : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_piccoloDevice_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_piccoloDevice_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_piccoloDevice_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_piccoloDevice_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_piccoloDevice_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_piccoloDevice_lexique_template")
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
  SettingViewFor_piccoloDevice_lexique ()
}

//--------------------------------------------------------------------------------------------------

final class ScannerFor_piccoloDevice_lexique : SWIFT_Scanner {

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
    return piccoloDevice_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 33
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 6
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return piccoloDevice_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return piccoloDevice_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  private var mLineHeight : Int = 12
  private var mDefaultColor : Color = .black
  private var mColorFor_keywordStyle : Color = .black
  private var mBoldFor_keywordStyle : Bool = false
  private var mItalicFor_keywordStyle : Bool = false
  private var mColorFor_instructionStyle : Color = .black
  private var mBoldFor_instructionStyle : Bool = false
  private var mItalicFor_instructionStyle : Bool = false
  private var mColorFor_delimitersStyle : Color = .black
  private var mBoldFor_delimitersStyle : Bool = false
  private var mItalicFor_delimitersStyle : Bool = false
  private var mColorFor_integerStyle : Color = .black
  private var mBoldFor_integerStyle : Bool = false
  private var mItalicFor_integerStyle : Bool = false
  private var mColorFor_stringStyle : Color = .black
  private var mBoldFor_stringStyle : Bool = false
  private var mItalicFor_stringStyle : Bool = false
  private var mColorFor_commentStyle : Color = .black
  private var mBoldFor_commentStyle : Bool = false
  private var mItalicFor_commentStyle : Bool = false
  private var mColorFor_lexical_error : Color = .red
  private var mBoldFor_lexical_error : Bool = false
  private var mItalicFor_lexical_error : Bool = false
  private var mColorFor_template : Color = .gray
  private var mBoldFor_template : Bool = false
  private var mItalicFor_template : Bool = false
  private var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_galgasScanner3"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_galgasScanner3"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_galgasScanner3"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-keywordStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordStyle != v {
        self.mColorFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-keywordStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-keywordStyle")
      if self.mBoldFor_keywordStyle != v {
        self.mBoldFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-keywordStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-keywordStyle")
      if self.mItalicFor_keywordStyle != v {
        self.mItalicFor_keywordStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-instructionStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_instructionStyle != v {
        self.mColorFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-instructionStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-instructionStyle")
      if self.mBoldFor_instructionStyle != v {
        self.mBoldFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-instructionStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-instructionStyle")
      if self.mItalicFor_instructionStyle != v {
        self.mItalicFor_instructionStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_piccoloDevice_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_piccoloDevice_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_piccoloDevice_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_piccoloDevice_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_piccoloDevice_lexique_template")
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
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
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
      let tsDelegate : NSTextStorageDelegate? = inTextStorage.delegate
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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'controlKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_piccoloDevice_5F_lexique_controlKeyWordList : [String : UInt16] = [
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

fileprivate func search_into_piccoloDevice_5F_lexique_controlKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_piccoloDevice_5F_lexique_controlKeyWordList [inSearchedString, default: piccoloDevice_lexique_1_]
}



//--------------------------------------------------------------------------------------------------

func piccoloDevice_lexique_lexiqueIdentifier () -> String {
  return "piccoloDevice_lexique"
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


