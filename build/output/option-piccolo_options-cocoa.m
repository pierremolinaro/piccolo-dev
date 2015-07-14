//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------------------------------------------------*

#import "option-piccolo_options-cocoa.h"
#import "OC_GGS_CommandLineOption.h"

//---------------------------------------------------------------------------------------------------------------------*

void enterOptionsFor_piccolo_5F_options (NSMutableArray * ioBoolOptionArray,
                                                       NSMutableArray * ioUIntOptionArray,
                                                       NSMutableArray * ioStringOptionArray,
                                                       NSMutableArray * ioStringListOptionArray) {
  OC_GGS_CommandLineOption * option ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"doNotReorderCluster"
    commandChar:78
    commandString:@"no-relative-resolution"
    comment:@"Do not try to re order blocks for using relatives branches (PIC18 compiler only)"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"doNotWarnRecursive"
    commandChar:82
    commandString:@"no-warning-on-recursive-routines"
    comment:@"Do not warn when there are recursive routines (PIC18 compiler only)"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"generateAssembly"
    commandChar:83
    commandString:@"asm"
    comment:@"Generate also an assembly language text file (with .asm extension)"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"generateGraphvizFiles"
    commandChar:71
    commandString:@"generate-graphviz-files"
    comment:@"Generate Graphviz files  containing block invocation, block sorting constraints, ..."
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"ouputListingFile"
    commandChar:76
    commandString:@"list"
    comment:@"Output a list file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"output_C_Array"
    commandChar:67
    commandString:@"output-c-files"
    comment:@"Generate output code in a C header file and C source file"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"performOptimizations"
    commandChar:79
    commandString:@"optimize"
    comment:@"Perform code optimizations"
    defaultValue:@""
  ] ;
  [ioBoolOptionArray addObject:option] ;
  option = [[OC_GGS_CommandLineOption alloc]
    initWithDomainName:@"piccolo_options"
    identifier:@"optimizationFlags"
    commandChar:0
    commandString:@"optimization-flags"
    comment:@"Fine tuning of optimizations (PIC18 compiler only)"
    defaultValue:@""
  ] ;
  [ioStringOptionArray addObject:option] ;
}

//---------------------------------------------------------------------------------------------------------------------*

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2



