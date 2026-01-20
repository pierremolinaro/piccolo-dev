//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

fileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = "selected.compiler.tool.index"
fileprivate let outputBaselineDeviceList_PREFKEY = "piccolo_options_not_in_cocoa:outputBaselineDeviceList"
fileprivate let outputDeviceList_PREFKEY = "piccolo_options_not_in_cocoa:outputDeviceList"
fileprivate let outputMidrangeDeviceList_PREFKEY = "piccolo_options_not_in_cocoa:outputMidrangeDeviceList"
fileprivate let outputPic18DeviceList_PREFKEY = "piccolo_options_not_in_cocoa:outputPic18DeviceList"
fileprivate let exportDeviceFiles_PREFKEY = "piccolo_options_not_in_cocoa:exportDeviceFiles"
fileprivate let memoryDescription_PREFKEY = "piccolo_options_not_in_cocoa:memoryDescription"
fileprivate let configDescription_PREFKEY = "piccolo_options_not_in_cocoa:configDescription"
fileprivate let registerDescription_PREFKEY = "piccolo_options_not_in_cocoa:registerDescription"

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

  @AppStorage(outputBaselineDeviceList_PREFKEY) private var outputBaselineDeviceList : Bool = false
  @AppStorage(outputDeviceList_PREFKEY) private var outputDeviceList : Bool = false
  @AppStorage(outputMidrangeDeviceList_PREFKEY) private var outputMidrangeDeviceList : Bool = false
  @AppStorage(outputPic18DeviceList_PREFKEY) private var outputPic18DeviceList : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // UInt options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  // String options
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage(exportDeviceFiles_PREFKEY) private var exportDeviceFiles : String = ""
  @AppStorage(memoryDescription_PREFKEY) private var memoryDescription : String = ""
  @AppStorage(configDescription_PREFKEY) private var configDescription : String = ""
  @AppStorage(registerDescription_PREFKEY) private var registerDescription : String = ""

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
          Toggle ("Output the list of supported baseline devices", isOn: self.$outputBaselineDeviceList)
          Toggle ("Output the list of supported devices", isOn: self.$outputDeviceList)
          Toggle ("Output the list of supported mid-range devices", isOn: self.$outputMidrangeDeviceList)
          Toggle ("Output the list of supported pic18 devices", isOn: self.$outputPic18DeviceList)
          HStack { Text ("Export device definition files to the directory named by string") ; TextField ("", text: self.$exportDeviceFiles) }
          HStack { Text ("Output the RAM, ROM and EEPROM description of the device named by string") ; TextField ("", text: self.$memoryDescription) }
          HStack { Text ("Output the configuration register description of the device named by string") ; TextField ("", text: self.$configDescription) }
          HStack { Text ("Output the special register description of the device named by string") ; TextField ("", text: self.$registerDescription) }
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
  if ud.bool (forKey: outputBaselineDeviceList_PREFKEY) {
    arguments.append ("--baseline")
  }
  if ud.bool (forKey: outputDeviceList_PREFKEY) {
    arguments.append ("--device-list")
  }
  if ud.bool (forKey: outputMidrangeDeviceList_PREFKEY) {
    arguments.append ("--midrange")
  }
  if ud.bool (forKey: outputPic18DeviceList_PREFKEY) {
    arguments.append ("--pic18")
  }
  do{
    let v : String = ud.string (forKey: exportDeviceFiles_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--export=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: memoryDescription_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--memory=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: configDescription_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--configuration=" + v)
    }
  }
  do{
    let v : String = ud.string (forKey: registerDescription_PREFKEY) ?? ""
    if v != "" {
      arguments.append ("--registers=" + v)
    }
  }
  return CommandLineToolInvocation (tool: tool, arguments: arguments)
}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


