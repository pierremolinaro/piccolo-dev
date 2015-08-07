//
//  PMPiccoloCocoa.m
//  
//
//  Created by Pierre Molinaro on 20/04/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//------------------------------------------------------------------*

#import "PMPiccoloCocoa.h"
#import "OC_GGS_ApplicationDelegate.h"

//------------------------------------------------------------------*

@implementation PMPiccoloCocoa

//------------------------------------------------------------------*

- (void) awakeFromNib {
  NSMenu * mainMenu = [NSApp menu] ;
  [mainMenu removeItemAtIndex:mainMenu.numberOfItems - 1] ;
  NSMenuItem * item = [mainMenu
    addItemWithTitle:@"Devices"
    action:NULL
    keyEquivalent:@""
  ] ;
  [mainMenu setSubmenu:mDeviceMenu forItem:item] ;
  mResultText.font = [NSFont fontWithName:@"Courier" size:13.0] ;
//---
  mDeviceName = [[NSUserDefaults standardUserDefaults]
    stringForKey:@"PMDeviceNameForDialog"
  ] ;
//---
  [mDeviceNameTextfield
    bind:@"value" 
    toObject:self
    withKeyPath:@"mDeviceName" 
    options:[NSDictionary dictionaryWithObjectsAndKeys:
      [NSNumber numberWithBool:YES], NSContinuouslyUpdatesValueBindingOption,
     nil
    ]
  ] ;
//---
  [[NSNotificationCenter defaultCenter]
    addObserver:self
    selector:@selector(applicationWillTerminateAction:)
    name:NSApplicationWillTerminateNotification
    object:nil
  ] ;
}

//----------------------------------------------------------------------------*
//    applicationWillTerminateAction:                                         *
//----------------------------------------------------------------------------*

- (void) applicationWillTerminateAction: (NSNotification *) inNotification {
  [[NSUserDefaults standardUserDefaults]
    setObject:mDeviceName
    forKey:@"PMDeviceNameForDialog"
  ] ;
}

//------------------------------------------------------------------*

- (void) launchTaskWithOption: (NSString *) inOption {
  NSArray * commandLineArray = [gCocoaApplicationDelegate commandLineItemArray] ;
//--- Command line tool does actually exist ? (First argument is not "?")
  if ([[commandLineArray objectAtIndex:0] isEqualToString:@"?"]) {
    NSAlert * alert = [NSAlert alertWithMessageText:@"Error"
      defaultButton: nil
      alternateButton: nil
      otherButton: nil
      informativeTextWithFormat:@"No command line Tool is currently embedded by application."
    ] ;
    [alert
      beginSheetModalForWindow:mResultText.window
      modalDelegate:nil
      didEndSelector:0
      contextInfo:NULL
    ] ;
  }else{
 //--- Create task
    mTask = [NSTask new] ;
    [mTask setLaunchPath:[commandLineArray objectAtIndex:0]] ;
    [mTask
      setArguments:[NSArray arrayWithObjects:
        @"--no-color",
        inOption,
        nil
      ]
    ] ;
    // NSLog (@"'%@' %@", [mTask launchPath], arguments) ;
  //--- Set standard output notification
    mPipe = [NSPipe pipe] ;
    [mTask setStandardOutput:mPipe] ;
    [mTask setStandardError:mPipe] ;
    mResultData = [NSMutableData new] ;
  //---
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector (getDataFromTaskOutput:)
      name:NSFileHandleReadCompletionNotification
      object:[mPipe fileHandleForReading]
    ] ;
    [mPipe.fileHandleForReading readInBackgroundAndNotify] ;
  //--- Start task
    [mTask launch] ;
  //---
    mResultText.string = @"" ;
    [mProgressIndicator startAnimation:nil] ;
    [mResultText.window makeKeyAndOrderFront:nil] ;
  }
}

//---------------------------------------------------------------------------*

- (void) getDataFromTaskOutput: (NSNotification *) inNotification {
  #ifdef DEBUG_MESSAGES
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  NSData * data = [[inNotification userInfo] objectForKey:NSFileHandleNotificationDataItem];
  if (data.length > 0) {
    [mResultData appendData:data] ;
    [inNotification.object readInBackgroundAndNotify] ;
  }else{
    [[NSNotificationCenter defaultCenter]
      removeObserver:self
      name:NSFileHandleReadCompletionNotification
      object:[mPipe fileHandleForReading]
    ] ;
    [[mPipe fileHandleForReading] closeFile] ;
  //  [mTask terminate] ;
    mTask = nil ;
    mPipe = nil ;
    mResultText.string = [[NSString alloc]
      initWithData:mResultData 
      encoding:NSUTF8StringEncoding
    ] ;
    mResultData = nil ;
    [mProgressIndicator stopAnimation:nil] ;
  }
}

//------------------------------------------------------------------*

- (IBAction) allDevices : (id) inSender {
  [self launchTaskWithOption:@"-D"] ;
}

//------------------------------------------------------------------*

- (IBAction) baselineDevices : (id) inSender {
  [self launchTaskWithOption:@"--baseline"] ;
}

//------------------------------------------------------------------*

- (IBAction) midrangeDevices : (id) inSender {
  [self launchTaskWithOption:@"--midrange"] ;
}

//------------------------------------------------------------------*

- (IBAction) pic18Devices : (id) inSender {
  [self launchTaskWithOption:@"--pic18"] ;
}

//------------------------------------------------------------------*

- (IBAction) deviceMemory : (id) inSender {
  const NSInteger returnCode = [NSApp
    runModalForWindow:mDeviceNameTextfield.window
  ] ;
  // NSLog (@"mDeviceName %@", mDeviceName) ;
  if (0 != returnCode) {
    [self
      launchTaskWithOption:[@"-M="
        stringByAppendingString:mDeviceName
      ]
    ] ;
  }
}

//------------------------------------------------------------------*

- (IBAction) deviceRegisters : (id) inSender {
  const NSInteger returnCode = [NSApp
    runModalForWindow:mDeviceNameTextfield.window
  ] ;
  // NSLog (@"mDeviceName %@", mDeviceName) ;
  if (0 != returnCode) {
    [self
      launchTaskWithOption:[@"-R="
        stringByAppendingString:mDeviceName
      ]
    ] ;
  }
}

//------------------------------------------------------------------*

- (IBAction) deviceConfiguration : (id) inSender {
  const NSInteger returnCode = [NSApp
    runModalForWindow:mDeviceNameTextfield.window
  ] ;
  // NSLog (@"mDeviceName %@", mDeviceName) ;
  if (0 != returnCode) {
    [self
      launchTaskWithOption:[@"-F="
        stringByAppendingString:mDeviceName
      ]
    ] ;
  }
}

//------------------------------------------------------------------*

@end
