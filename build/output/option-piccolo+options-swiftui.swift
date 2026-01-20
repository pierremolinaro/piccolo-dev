//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let doNotReorderCluster_PREFKEY = "piccoloOptions:doNotReorderCluster"
fileprivate let doNotWarnRecursive_PREFKEY = "piccoloOptions:doNotWarnRecursive"
fileprivate let generateGraphvizFiles_PREFKEY = "piccoloOptions:generateGraphvizFiles"
fileprivate let generateAssembly_PREFKEY = "piccoloOptions:generateAssembly"
fileprivate let output_C_Array_PREFKEY = "piccoloOptions:output_C_Array"
fileprivate let ouputListingFile_PREFKEY = "piccoloOptions:ouputListingFile"
fileprivate let performOptimizations_PREFKEY = "piccoloOptions:performOptimizations"
fileprivate let optimizationFlags_PREFKEY = "piccoloOptions:optimizationFlags"

//--------------------------------------------------------------------------------------------------
//   Options View
//--------------------------------------------------------------------------------------------------

struct OptionView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mCompilerTools : [CompilerTool] = compilerTools ()
  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("prefix.by.time.utility") private var mPrefixByTimeUtility = false
  @State private var mCommandLine = compilerCommandExplained ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Bool options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(doNotReorderCluster_PREFKEY) private var doNotReorderCluster : Bool = false
  @AppStorage(doNotWarnRecursive_PREFKEY) private var doNotWarnRecursive : Bool = false
  @AppStorage(generateGraphvizFiles_PREFKEY) private var generateGraphvizFiles : Bool = false
  @AppStorage(generateAssembly_PREFKEY) private var generateAssembly : Bool = false
  @AppStorage(output_C_Array_PREFKEY) private var output_C_Array : Bool = false
  @AppStorage(ouputListingFile_PREFKEY) private var ouputListingFile : Bool = false
  @AppStorage(performOptimizations_PREFKEY) private var performOptimizations : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(optimizationFlags_PREFKEY) private var optimizationFlags : String = ""

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String list options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // Body
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    VStack {
      HStack {
        Picker("Compiler", selection: self.$mSelectedCompilerIndex) {
          ForEach (self.mCompilerTools, id: \.id) { tool in
            Text (tool.url.lastPathComponent).tag (tool.id)
          }
        }.pickerStyle (.automatic)
        Toggle ("Prefix by 'time' utility", isOn: self.$mPrefixByTimeUtility)
        Spacer ()
      }
      ScrollView {
        VStack (alignment: .leading) {
          Toggle ("Do not try to re order blocks for using relatives branches (PIC18 compiler only)", isOn: self.$doNotReorderCluster)
          Toggle ("Do not warn when there are recursive routines (PIC18 compiler only)", isOn: self.$doNotWarnRecursive)
          Toggle ("Generate Graphviz files  containing block invocation, block sorting constraints, ...", isOn: self.$generateGraphvizFiles)
          Toggle ("Generate also an assembly language text file (with .asm extension)", isOn: self.$generateAssembly)
          Toggle ("Generate output code in a C header file and C source file", isOn: self.$output_C_Array)
          Toggle ("Output a list file", isOn: self.$ouputListingFile)
          Toggle ("Perform code optimizations", isOn: self.$performOptimizations)
          HStack { Text ("Fine tuning of optimizations (PIC18 compiler only)") ; TextField ("", text: self.$optimizationFlags) }
        }.padding ()
      }.background (.white)
      HStack { Text ("Build Command") ; Spacer () }
      TextEditor (text: .constant (self.mCommandLine))
      .font (.system (size: 12).monospaced())
      .frame (height: 64)
    }.padding ()
    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in
      self.mCommandLine = compilerCommandExplained ()
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

private func compilerCommandExplained () -> String {
  let command : CommandLineToolInvocation = commandLineToolInvocation ()
  var result = command.tool.lastPathComponent
  for arg in command.arguments {
    result += " " + arg
  }
  return result
}

//--------------------------------------------------------------------------------------------------

struct CommandLineToolInvocation {
  let tool : URL
  let arguments : [String]
}

//--------------------------------------------------------------------------------------------------

func commandLineToolInvocation () -> CommandLineToolInvocation {
  let ud = UserDefaults.standard
  let compilerTools : [CompilerTool] = compilerTools ()
  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)
  let tool = compilerTools [selectedCompilerIndex].url
  var arguments = [String] ()
  if ud.bool (forKey: doNotReorderCluster_PREFKEY) {
    arguments.append ("--no-relative-resolution")
  }
  if ud.bool (forKey: doNotWarnRecursive_PREFKEY) {
    arguments.append ("--no-warning-on-recursive-routines")
  }
  if ud.bool (forKey: generateGraphvizFiles_PREFKEY) {
    arguments.append ("--generate-graphviz-files")
  }
  if ud.bool (forKey: generateAssembly_PREFKEY) {
    arguments.append ("--asm")
  }
  if ud.bool (forKey: output_C_Array_PREFKEY) {
    arguments.append ("--output-c-files")
  }
  if ud.bool (forKey: ouputListingFile_PREFKEY) {
    arguments.append ("--list")
  }
  if ud.bool (forKey: performOptimizations_PREFKEY) {
    arguments.append ("--optimize")
  }
  do{
    let v : String = ud.string (forKey: optimizationFlags_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--optimization-flags=" + v)
    }
  }
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


