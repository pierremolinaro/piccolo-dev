//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "doNotReorderCluster",
    commandChar: "N",
    commandString: "no-relative-resolution",
    comment: "Do not try to re order blocks for using relatives branches (PIC18 compiler only)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "doNotWarnRecursive",
    commandChar: "R",
    commandString: "no-warning-on-recursive-routines",
    comment: "Do not warn when there are recursive routines (PIC18 compiler only)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "generateAssembly",
    commandChar: "S",
    commandString: "asm",
    comment: "Generate also an assembly language text file (with .asm extension)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "generateGraphvizFiles",
    commandChar: "G",
    commandString: "generate-graphviz-files",
    comment: "Generate Graphviz files  containing block invocation, block sorting constraints, ...",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "ouputListingFile",
    commandChar: "L",
    commandString: "list",
    comment: "Output a list file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "output_C_Array",
    commandChar: "C",
    commandString: "output-c-files",
    comment: "Generate output code in a C header file and C source file",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "performOptimizations",
    commandChar: "O",
    commandString: "optimize",
    comment: "Perform code optimizations",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options",
    identifier: "optimizationFlags",
    commandChar: "",
    commandString: "optimization-flags",
    comment: "Fine tuning of optimizations (PIC18 compiler only)",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output",
    defaultValue: ""
  ))
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


