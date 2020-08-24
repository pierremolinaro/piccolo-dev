//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//----------------------------------------------------------------------------------------------------------------------

#import "option-piccolo-5F-options-5F-not-5F-in-5F-cocoa-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//----------------------------------------------------------------------------------------------------------------------

void enterOptionsFor_piccolo_5F_options_5F_not_5F_in_5F_cocoa (NSMutableArray * ioBoolOptionArray,
                                                               NSMutableArray * ioUIntOptionArray,
                                                               NSMutableArray * ioStringOptionArray,
                                                               NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"outputBaselineDeviceList"
    commandChar:0
    commandString:@"baseline"
    comment:@"Output the list of supported baseline devices"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"outputDeviceList"
    commandChar:68
    commandString:@"device-list"
    comment:@"Output the list of supported devices"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"outputMidrangeDeviceList"
    commandChar:0
    commandString:@"midrange"
    comment:@"Output the list of supported mid-range devices"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"outputPic18DeviceList"
    commandChar:0
    commandString:@"pic18"
    comment:@"Output the list of supported pic18 devices"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"configDescription"
    commandChar:70
    commandString:@"configuration"
    comment:@"Output the configuration register description of the device named by string"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"exportDeviceFiles"
    commandChar:69
    commandString:@"export"
    comment:@"Export device definition files to the directory named by string"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"memoryDescription"
    commandChar:77
    commandString:@"memory"
    comment:@"Output the RAM, ROM and EEPROM description of the device named by string"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options_not_in_cocoa"
    identifier:@"registerDescription"
    commandChar:82
    commandString:@"registers"
    comment:@"Output the special register description of the device named by string"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
}

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


