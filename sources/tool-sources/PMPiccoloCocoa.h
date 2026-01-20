//  PMPiccoloCocoa.h
//  
//
//  Created by Pierre Molinaro on 20/04/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PMPiccoloCocoa : NSObject {
  @private IBOutlet NSMenu * mDeviceMenu ;
  @private IBOutlet NSTextView * mResultText ;
  @private IBOutlet NSProgressIndicator * mProgressIndicator ;

  @private NSTask * mTask ;
  @private NSPipe * mPipe ;
  @private NSMutableData * mResultData ;

//--- Dialog
  @private IBOutlet NSTextField * mDeviceNameTextfield ;
  @private NSString * mDeviceName ;
}

- (IBAction) baselineDevices : (id) inSender ;
- (IBAction) midrangeDevices : (id) inSender ;
- (IBAction) pic18Devices : (id) inSender ;
- (IBAction) allDevices : (id) inSender ;

- (IBAction) deviceMemory : (id) inSender ;
- (IBAction) deviceRegisters : (id) inSender ;
- (IBAction) deviceConfiguration : (id) inSender ;

@end
