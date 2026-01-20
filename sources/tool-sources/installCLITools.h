//
//  installCLITools.h
//  galgas
//
//
//--------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//--------------------------------------------------------------------------*

@interface installCLITools : NSObject {

//--- Install CLI tool
  @private IBOutlet NSTextField * mCLIToolInstallationPath ;
  @private IBOutlet NSView * mInstallCLIView ;
}

- (IBAction) performCLIToolInstallation: (id) inSender ;

- (IBAction) performCLIToolRemove: (id) inSender ;

@end

//--------------------------------------------------------------------------*
