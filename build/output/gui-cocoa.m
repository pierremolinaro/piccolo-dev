//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Token.h"
#import "F_CocoaWrapperForGalgas.h"
#import "OC_GGS_CommandLineOption.h"
#import "lexique-piccolo-5F-lexique-cocoa.h"
#import "PMPiccoloCocoa.h"
#import "installCLITools.h"

#ifdef USER_DEFAULT_COLORS_DEFINED
  #import "user_default_colors.h"
#endif

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Nibs

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

NSArray * nibsAndClasses (void) {
  return [NSArray arrayWithObjects:
    [NSArray arrayWithObjects:@"PMPiccoloCocoa", [PMPiccoloCocoa class], nil],
    [NSArray arrayWithObjects:@"installCLITools", [installCLITools class], nil],
    nil
  ] ;
}


//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Command Line Options

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Command Line Options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#import "option-piccolo-5F-options-cocoa.h"

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

#pragma mark Lexique piccolo_lexique

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     P O P    U P    L I S T    D A T A                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const UInt16 gPopUpData_piccolo_5F_lexique_241 [6] = {
  0, // Leading character count to strip
  piccolo_lexique_1_routine, 0,
  piccolo_lexique_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_269 [6] = {
  0, // Leading character count to strip
  piccolo_lexique_1_ram, 0,
  piccolo_lexique_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_303 [6] = {
  0, // Leading character count to strip
  piccolo_lexique_1_interrupt, 0,
  piccolo_lexique_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_339 [6] = {
  0, // Leading character count to strip
  piccolo_lexique_1_include, 0,
  piccolo_lexique_1_literal_5F_string, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_378 [8] = {
  0, // Leading character count to strip
  piccolo_lexique_1_unused, 0,
  piccolo_lexique_1_byte, 0,
  piccolo_lexique_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_420 [8] = {
  0, // Leading character count to strip
  piccolo_lexique_1_unused, 0,
  piccolo_lexique_1_routine, 0,
  piccolo_lexique_1_identifier, 0,
  0
} ;

static const UInt16 gPopUpData_piccolo_5F_lexique_450 [4] = {
  1, // Leading character count to strip
  piccolo_lexique_1_commentMark, 32,
  0
} ;

static const UInt16 * gPopUpData_piccolo_5F_lexique [8] = {
  gPopUpData_piccolo_5F_lexique_241,
  gPopUpData_piccolo_5F_lexique_269,
  gPopUpData_piccolo_5F_lexique_303,
  gPopUpData_piccolo_5F_lexique_339,
  gPopUpData_piccolo_5F_lexique_378,
  gPopUpData_piccolo_5F_lexique_420,
  gPopUpData_piccolo_5F_lexique_450,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Lexique interface                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Tokenizer_piccolo_lexique : OC_Lexique_piccolo_lexique {

}

- (NSString *) blockComment ;

- (const UInt16 * *) popupListData ;

- (NSUInteger) textMacroCount ;

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;

- (NSString *) tabItemTitle ;

@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Tokenizer_piccolo_lexique

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) blockComment {
  return @"#" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (const UInt16 * *) popupListData {
  return gPopUpData_piccolo_5F_lexique ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) textMacroCount {
  return 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) tabItemTitle {
  return @"Source" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroTitle [1] = {
    NULL
  } ;
  return kTextMacroTitle [inIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {
  static NSString * kTextMacroContent [1] = {
    NULL
  } ;
  return kTextMacroContent [inIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end



//---------------------------------------------------------------------------------------------------------------------*

OC_Lexique * tokenizerForExtension (const NSString * inExtension) {
  OC_Lexique * result = nil ;
  if ([inExtension isEqualToString:@"piccolo"]) {
    result = [OC_Tokenizer_piccolo_lexique new] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

NSArray * tokenizers (void) {
  return [NSArray arrayWithObjects:
    [OC_Tokenizer_piccolo_lexique new],
    nil
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

NSString * buildRunOption (void) {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


