//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
  return [  "piccolo" : "PICCOLO_INDEXES",]
}

//--------------------------------------------------------------------------------------------------
//   Global functions
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> SWIFT_Scanner? {
  var result : SWIFT_Scanner? = nil
  if inExtension == "piccolo" {
    result = ScannerFor_piccolo_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------

/* @MainActor func tokenizers () -> [any SWIFT_Tokenizer_Protocol] {
  return [
    SettingViewFor_piccolo_lexique ()
  ]
} */

//--------------------------------------------------------------------------------------------------

struct SettingsView : View {
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    TabView {
      SettingViewFor_piccolo_lexique ().tabItem { Text ("Source") }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------

/* func buildRunOption () -> String {
  return ""
} */

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


