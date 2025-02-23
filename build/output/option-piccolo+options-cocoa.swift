//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptionsFor_piccoloOptions () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "doNotReorderCluster",
    commandChar: "N",
    commandString: "no-relative-resolution",
    comment: "Do not try to re order blocks for using relatives branches (PIC18 compiler only)"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "doNotWarnRecursive",
    commandChar: "R",
    commandString: "no-warning-on-recursive-routines",
    comment: "Do not warn when there are recursive routines (PIC18 compiler only)"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "generateGraphvizFiles",
    commandChar: "G",
    commandString: "generate-graphviz-files",
    comment: "Generate Graphviz files  containing block invocation, block sorting constraints, ..."
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "generateAssembly",
    commandChar: "S",
    commandString: "asm",
    comment: "Generate also an assembly language text file (with .asm extension)"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "output_C_Array",
    commandChar: "C",
    commandString: "output-c-files",
    comment: "Generate output code in a C header file and C source file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "ouputListingFile",
    commandChar: "L",
    commandString: "list",
    comment: "Output a list file"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .bool,
    identifier: "performOptimizations",
    commandChar: "O",
    commandString: "optimize",
    comment: "Perform code optimizations"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccoloOptions",
    type: .string,
    identifier: "optimizationFlags",
    commandChar: "",
    commandString: "optimization-flags",
    comment: "Fine tuning of optimizations (PIC18 compiler only)"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "galgas_cli_options",
    type: .bool,
    identifier: "quiet_output",
    commandChar: "q",
    commandString: "quiet",
    comment: "Quiet output"
  ))
  return array
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


