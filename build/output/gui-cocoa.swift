//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//--------------------------------------------------------------------------------------------------
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                
//--------------------------------------------------------------------------------------------------

/*
NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"PMPiccoloCocoa", [PMPiccoloCocoa class], nil],
    [NSArray arrayWithObjects:@"installCLITools", [installCLITools class], nil],
    nil
  ] ;
}


*/
//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

/* NSDictionary * indexingDescriptorDictionary (void) {
  return [NSDictionary dictionaryWithObjectsAndKeys: @"PICCOLO_INDEXES", @"piccolo", nil] ;
} */

//--------------------------------------------------------------------------------------------------
//
//                       Command Line Options                                                    
//
//--------------------------------------------------------------------------------------------------

// #import "option-piccolo-5Foptions-cocoa.h"

//--------------------------------------------------------------------------------------------------

/*
void enterOptions (NSMutableArray * ioBoolOptionArray,
                   NSMutableArray * ioUIntOptionArray,
                   NSMutableArray * ioStringOptionArray,
                   NSMutableArray * ioStringListOptionArray) {
  enterOptionsFor_piccolo_5F_options (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;
  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"galgas_cli_options"
    identifier:@"quiet_output"
    commandChar:'q'
    commandString:@"quiet"
    comment:@"Quiet output"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
}

*/

//--------------------------------------------------------------------------------------------------
//                     P O P    U P    L I S T    D A T A
//--------------------------------------------------------------------------------------------------

fileprivate let gPopUpData_0_piccolo_5F_lexique : [[UInt16]] = [
  [0, // Leading character count to strip
    piccolo_lexique_1_routine, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_ram, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_interrupt, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_include, 0,
    piccolo_lexique_1_literal_5F_string, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_unused, 0,
    piccolo_lexique_1_byte, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_unused, 0,
    piccolo_lexique_1_routine, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [1, // Leading character count to strip
    piccolo_lexique_1_commentMark, 32
  ]
]

//--------------------------------------------------------------------------------------------------
//                            Lexique interface
//--------------------------------------------------------------------------------------------------
  
class SWIFT_Tokenizer_0_piccolo_lexique : SWIFT_Lexique_piccolo_lexique, SWIFT_Tokenizer_Protocol {

//- (NSUInteger) textMacroCount ;

//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func popupListData () -> [[UInt16]] {
    return gPopUpData_0_piccolo_5F_lexique
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func tabItemTitle () -> String {
    return "Source"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  
  func blockComment () -> String {
    return "#"
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {
    let fontManager = NSFontManager.shared
    var font = fontManager.convert (
      self.font.propval,
      toHaveTrait: self.bold (forStyle: inStyleIndex).propval ? .boldFontMask : .unboldFontMask
    )
    font = fontManager.convert (
      font,
      toHaveTrait: self.italic (forStyle: inStyleIndex).propval ? .italicFontMask : .unitalicFontMask
    )
    let result : [NSAttributedString.Key : Any] = [
      .foregroundColor : self.color (forStyle: inStyleIndex).propval,
      .font : font
    ]
    return result
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

/* @implementation OC_Tokenizer_0_piccolo_lexique

//--------------------------------------------------------------------------------------------------

- (NSUInteger) textMacroCount {
  return 0 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    nullptr
  } ;
  return kTextMacroTitle [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    nullptr
  } ;
  return kTextMacroContent [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

@end */



//--------------------------------------------------------------------------------------------------
//   Global functions
//--------------------------------------------------------------------------------------------------

@MainActor func tokenizerFor (extension inExtension : String) -> (any SWIFT_Tokenizer_Protocol)? {
  var result : (any SWIFT_Tokenizer_Protocol)? = nil
  if inExtension == "piccolo" {
    result = SWIFT_Tokenizer_0_piccolo_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------

@MainActor func tokenizers () -> [any SWIFT_Tokenizer_Protocol] {
  return [
    SWIFT_Tokenizer_0_piccolo_lexique ()
  ]
}

//--------------------------------------------------------------------------------------------------

func buildRunOption () -> String {
  return ""
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


