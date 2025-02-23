//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptionsFor_piccolo_5F_options_5F_not_5F_in_5F_cocoa () -> [SWIFT_CommandLineOption] {
  var array = [SWIFT_CommandLineOption] ()
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .bool,
    identifier: "outputBaselineDeviceList",
    commandChar: "",
    commandString: "baseline",
    comment: "Output the list of supported baseline devices"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .bool,
    identifier: "outputDeviceList",
    commandChar: "D",
    commandString: "device-list",
    comment: "Output the list of supported devices"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .bool,
    identifier: "outputMidrangeDeviceList",
    commandChar: "",
    commandString: "midrange",
    comment: "Output the list of supported mid-range devices"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .bool,
    identifier: "outputPic18DeviceList",
    commandChar: "",
    commandString: "pic18",
    comment: "Output the list of supported pic18 devices"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .string,
    identifier: "exportDeviceFiles",
    commandChar: "E",
    commandString: "export",
    comment: "Export device definition files to the directory named by string"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .string,
    identifier: "memoryDescription",
    commandChar: "M",
    commandString: "memory",
    comment: "Output the RAM, ROM and EEPROM description of the device named by string"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .string,
    identifier: "configDescription",
    commandChar: "F",
    commandString: "configuration",
    comment: "Output the configuration register description of the device named by string"
  ))
  array.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    type: .string,
    identifier: "registerDescription",
    commandChar: "R",
    commandString: "registers",
    comment: "Output the special register description of the device named by string"
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


