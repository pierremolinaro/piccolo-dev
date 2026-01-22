//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let piccolo = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".piccolo")
  nonisolated static let piccoloDevice = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".piccolodevice")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.piccolo, .piccoloDevice]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["piccolo", "piccolodevice"])

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "piccolo" {
    result = ScannerFor_piccolo_lexique ()
  }else if fileExtension == "piccolodevice" {
    result = ScannerFor_piccoloDevice_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------
// Setting View
//--------------------------------------------------------------------------------------------------

struct SettingsView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarItem {
    case commandLineOptions
    case piccolo_lexique_0
    case piccoloDevice_lexique_1
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source").tag (SidebarItem.piccolo_lexique_0)
        Text ("Device Source").tag (SidebarItem.piccoloDevice_lexique_1)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .piccolo_lexique_0 : SettingViewFor_piccolo_lexique ()
        case .piccoloDevice_lexique_1 : SettingViewFor_piccoloDevice_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'piccolo_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_piccolo_lexique : [[UInt16]] = [
  [0, // Leading character count to strip
    piccolo_lexique_1_routine, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_ram, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_interrupt, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_include, 0,
    piccolo_lexique_1_literal_5F_string, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_unused, 0,
    piccolo_lexique_1_byte, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [0, // Leading character count to strip
    piccolo_lexique_1_unused, 0,
    piccolo_lexique_1_routine, 0,
    piccolo_lexique_1_identifier, 0
  ],
  [1, // Leading character count to strip
    piccolo_lexique_1_commentMark, 32
  ]
]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'piccolo_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_piccolo_lexique : String? = "#"

//--------------------------------------------------------------------------------------------------
//   Popup list data for 'piccoloDevice_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_piccoloDevice_lexique : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'piccoloDevice_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_piccoloDevice_lexique : String? = "#"


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


