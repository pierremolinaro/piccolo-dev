//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//--------------------------------------------------------------------------------------------------

func enterOptions (_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioUIntOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringOptionArray : inout [SWIFT_CommandLineOption],
                   _ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "outputBaselineDeviceList",
    commandChar: "",
    commandString: "baseline",
    comment: "Output the list of supported baseline devices",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "outputDeviceList",
    commandChar: "D",
    commandString: "device-list",
    comment: "Output the list of supported devices",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "outputMidrangeDeviceList",
    commandChar: "",
    commandString: "midrange",
    comment: "Output the list of supported mid-range devices",
    defaultValue: ""
  ))
  ioBoolOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "outputPic18DeviceList",
    commandChar: "",
    commandString: "pic18",
    comment: "Output the list of supported pic18 devices",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "configDescription",
    commandChar: "F",
    commandString: "configuration",
    comment: "Output the configuration register description of the device named by string",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "exportDeviceFiles",
    commandChar: "E",
    commandString: "export",
    comment: "Export device definition files to the directory named by string",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "memoryDescription",
    commandChar: "M",
    commandString: "memory",
    comment: "Output the RAM, ROM and EEPROM description of the device named by string",
    defaultValue: ""
  ))
  ioStringOptionArray.append (SWIFT_CommandLineOption (
    domainName: "piccolo_options_not_in_cocoa",
    identifier: "registerDescription",
    commandChar: "R",
    commandString: "registers",
    comment: "Output the special register description of the device named by string",
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


