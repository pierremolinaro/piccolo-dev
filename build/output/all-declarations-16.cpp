#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition (const GALGAS_lstring constinArgument_inDeviceName,
                                    GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  GALGAS_filewrapper var_fw_320 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GALGAS_string var_deviceFullName_381 = constinArgument_inDeviceName.readProperty_string ().add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_fw_320.getter_fileExistsAtPath (var_deviceFullName_381, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 18)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_definitionString_503 = var_fw_320.getter_textFileContentsAtPath (var_deviceFullName_381, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 19)) ;
      outArgument_outPiccoloDeviceModel.drop () ;
      cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString_503, var_deviceFullName_381, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 20)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("The '").add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)).add_operation (GALGAS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "piccolo",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .piccolo extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.1.9" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 7)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 8)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_allDevices_455 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 11)) ;
        GALGAS_stringlist var_pic_31__38__5F_devices_529 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 12)) ;
        GALGAS_stringlist var_midrange_5F_devices_579 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 13)) ;
        GALGAS_stringlist var_baseline_5F_devices_629 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("piccolo_program.galgas", 14)) ;
        cEnumerator_stringlist enumerator_688 (var_allDevices_455, kENUMERATION_UP) ;
        while (enumerator_688.hasCurrentObject ()) {
          GALGAS_string var_name_730 = enumerator_688.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 17)) ;
          GALGAS_piccoloDeviceModel var_piccoloDeviceModel_906 ;
          {
          routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_name_730, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), var_piccoloDeviceModel_906, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)) ;
          }
          switch (var_piccoloDeviceModel_906.readProperty_mProcessorType ().enumValue ()) {
          case GALGAS_processorType::kNotBuilt:
            break ;
          case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
          case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
            {
              var_pic_31__38__5F_devices_529.addAssign_operation (var_name_730  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
            }
            break ;
          case GALGAS_processorType::kEnum_midrange:
            {
              var_midrange_5F_devices_579.addAssign_operation (var_name_730  COMMA_SOURCE_FILE ("piccolo_program.galgas", 23)) ;
            }
            break ;
          case GALGAS_processorType::kEnum_baseline:
            {
              var_baseline_5F_devices_629.addAssign_operation (var_name_730  COMMA_SOURCE_FILE ("piccolo_program.galgas", 31)) ;
            }
            break ;
          }
          enumerator_688.gotoNextObject () ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 35)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->printMessage (var_baseline_5F_devices_629.getter_length (SOURCE_FILE ("piccolo_program.galgas", 36)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)) ;
            GALGAS_uint var_idx_1800 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_stringlist enumerator_1822 (var_baseline_5F_devices_629, kENUMERATION_UP) ;
            while (enumerator_1822.hasCurrentObject ()) {
              inCompiler->printMessage (enumerator_1822.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 39))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)) ;
              var_idx_1800.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 40)) ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsEqual, var_idx_1800.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  var_idx_1800 = GALGAS_uint ((uint32_t) 0U) ;
                  inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 43)) ;
                }
              }
              enumerator_1822.gotoNextObject () ;
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_idx_1800.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_3) {
                inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 47)) ;
              }
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 51)).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->printMessage (var_midrange_5F_devices_579.getter_length (SOURCE_FILE ("piccolo_program.galgas", 52)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)) ;
            GALGAS_uint var_idx_2404 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_stringlist enumerator_2426 (var_midrange_5F_devices_579, kENUMERATION_UP) ;
            while (enumerator_2426.hasCurrentObject ()) {
              inCompiler->printMessage (enumerator_2426.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 55))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)) ;
              var_idx_2404.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 56)) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, var_idx_2404.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  var_idx_2404 = GALGAS_uint ((uint32_t) 0U) ;
                  inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 59)) ;
                }
              }
              enumerator_2426.gotoNextObject () ;
            }
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsNotEqual, var_idx_2404.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_6) {
                inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 63)) ;
              }
            }
          }
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 67)).boolEnum () ;
          if (kBoolTrue == test_7) {
            inCompiler->printMessage (var_pic_31__38__5F_devices_529.getter_length (SOURCE_FILE ("piccolo_program.galgas", 68)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)) ;
            GALGAS_uint var_idx_2994 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_stringlist enumerator_3016 (var_pic_31__38__5F_devices_529, kENUMERATION_UP) ;
            while (enumerator_3016.hasCurrentObject ()) {
              inCompiler->printMessage (enumerator_3016.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint ((uint32_t) 15U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 71))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)) ;
              var_idx_2994.increment_operation (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 72)) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, var_idx_2994.objectCompare (GALGAS_uint ((uint32_t) 5U))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_idx_2994 = GALGAS_uint ((uint32_t) 0U) ;
                  inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 75)) ;
                }
              }
              enumerator_3016.gotoNextObject () ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_idx_2994.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_9) {
                inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 79)) ;
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()).getter_length (SOURCE_FILE ("piccolo_program.galgas", 85)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_dir_3457 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = var_dir_3457.getter_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 87)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 87)).boolEnum () ;
          if (kBoolTrue == test_11) {
            var_dir_3457.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 88)) ;
          }
        }
        GALGAS_filewrapper var_fw_3617 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
        GALGAS_stringlist var_allDevices_3680 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 91)) ;
        cEnumerator_stringlist enumerator_3748 (var_allDevices_3680, kENUMERATION_UP) ;
        while (enumerator_3748.hasCurrentObject ()) {
          GALGAS_string var_definitionString_3802 = var_fw_3617.getter_textFileContentsAtPath (enumerator_3748.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 93)) ;
          var_definitionString_3802.method_writeToFile (var_dir_3457.add_operation (enumerator_3748.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
          enumerator_3748.gotoNextObject () ;
        }
        inCompiler->printMessage (var_allDevices_3680.getter_length (SOURCE_FILE ("piccolo_program.galgas", 96)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (var_dir_3457, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)) ;
      }
    }
    GALGAS_string var_deviceForMemoryDescription_4108 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.readProperty_value ()) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsStrictSup, var_deviceForMemoryDescription_4108.getter_length (SOURCE_FILE ("piccolo_program.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_devicePath_4249 = GALGAS_string ("/").add_operation (var_deviceForMemoryDescription_4108, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_4249, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 102)).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4491 ;
            {
            routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForMemoryDescription_4108, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)), var_piccoloDeviceModel_4491, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)) ;
            }
            GALGAS_uint var_totalRam_4517 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_ramBankTable enumerator_4576 (var_piccoloDeviceModel_4491.readProperty_mRamBankTable (), kENUMERATION_UP) ;
            while (enumerator_4576.hasCurrentObject ()) {
              var_totalRam_4517 = var_totalRam_4517.add_operation (enumerator_4576.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)).substract_operation (enumerator_4576.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)) ;
              enumerator_4576.gotoNextObject () ;
            }
            inCompiler->printMessage (var_deviceForMemoryDescription_4108.add_operation (GALGAS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 108))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 108)) ;
            inCompiler->printMessage (GALGAS_string ("  ").add_operation (var_piccoloDeviceModel_4491.readProperty_mRamBankTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 109)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GALGAS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (var_totalRam_4517.getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GALGAS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
            cEnumerator_ramBankTable enumerator_4958 (var_piccoloDeviceModel_4491.readProperty_mRamBankTable (), kENUMERATION_UP) ;
            while (enumerator_4958.hasCurrentObject ()) {
              inCompiler->printMessage (GALGAS_string ("    bank \"").add_operation (enumerator_4958.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GALGAS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4958.current_mFirstFreeAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4958.current_mLastAddressPlusOne (HERE).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4958.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4958.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)) ;
              cEnumerator_uintlist enumerator_5230 (enumerator_4958.current_mMirrorOffsetList (HERE), kENUMERATION_UP) ;
              const bool bool_14 = true ;
              if (enumerator_5230.hasCurrentObject () && bool_14) {
                inCompiler->printMessage (GALGAS_string (", mirror at ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 115)) ;
                while (enumerator_5230.hasCurrentObject () && bool_14) {
                  inCompiler->printMessage (enumerator_4958.current_mFirstFreeAddress (HERE).add_operation (enumerator_5230.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 116))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)) ;
                  enumerator_5230.gotoNextObject () ;
                  if (enumerator_5230.hasCurrentObject () && bool_14) {
                    inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
                  }
                }
              }
              inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 119)) ;
              enumerator_4958.gotoNextObject () ;
            }
            switch (var_piccoloDeviceModel_4491.readProperty_mProcessorType ().enumValue ()) {
            case GALGAS_processorType::kNotBuilt:
              break ;
            case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
            case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
              {
                inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4491.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)).add_operation (GALGAS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)) ;
              }
              break ;
            case GALGAS_processorType::kEnum_midrange:
              {
                GALGAS_uint var_pageCount_5640 = var_piccoloDeviceModel_4491.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint ((uint32_t) 2047U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)).divide_operation (GALGAS_uint ((uint32_t) 2048U), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)) ;
                GALGAS_string var_s_5713 = GALGAS_string::makeEmptyString () ;
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsStrictSup, var_pageCount_5640.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    var_s_5713 = GALGAS_string ("s") ;
                  }
                }
                inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4491.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GALGAS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (var_pageCount_5640.getter_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GALGAS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (var_s_5713, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)) ;
              }
              break ;
            case GALGAS_processorType::kEnum_baseline:
              {
                inCompiler->printMessage (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4491.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)).add_operation (GALGAS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)) ;
              }
              break ;
            }
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, var_piccoloDeviceModel_4491.readProperty_mEepromSize ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_16) {
                inCompiler->printMessage (GALGAS_string ("  No EEPROM\n")  COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)) ;
              }
            }
            if (kBoolFalse == test_16) {
              inCompiler->printMessage (GALGAS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel_4491.readProperty_mEepromSize ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GALGAS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (var_piccoloDeviceModel_4491.readProperty_mEepromAddress ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)) ;
            }
          }
        }
        if (kBoolFalse == test_13) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), GALGAS_string ("The ").add_operation (var_deviceForMemoryDescription_4108, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), fixItArray17  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)) ;
        }
      }
    }
    GALGAS_string var_deviceForRegistersDescription_6558 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.readProperty_value ()) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsStrictSup, var_deviceForRegistersDescription_6558.getter_length (SOURCE_FILE ("piccolo_program.galgas", 147)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_devicePath_6704 = GALGAS_string ("/").add_operation (var_deviceForRegistersDescription_6558, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_6704, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).boolEnum () ;
          if (kBoolTrue == test_19) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_6953 ;
            {
            routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForRegistersDescription_6558, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)), var_piccoloDeviceModel_6953, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)) ;
            }
            inCompiler->printMessage (var_deviceForRegistersDescription_6558.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (var_piccoloDeviceModel_6953.readProperty_mRegisterTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 151)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (GALGAS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)) ;
            cEnumerator_registerTable enumerator_7144 (var_piccoloDeviceModel_6953.readProperty_mRegisterTable (), kENUMERATION_UP) ;
            while (enumerator_7144.hasCurrentObject ()) {
              GALGAS_string var_s_7169 = GALGAS_string ("  '").add_operation (enumerator_7144.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
              cEnumerator_uintlist enumerator_7257 (enumerator_7144.current (HERE).readProperty_mRegisterAddressList (), kENUMERATION_UP) ;
              while (enumerator_7257.hasCurrentObject ()) {
                var_s_7169.plusAssign_operation(enumerator_7257.current (HERE).readProperty_mValue ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)) ;
                if (enumerator_7257.hasNextObject ()) {
                  var_s_7169.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 156)) ;
                }
                enumerator_7257.gotoNextObject () ;
              }
              var_s_7169.plusAssign_operation(enumerator_7144.current (HERE).readProperty_mBitDefinitionString ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)) ;
              inCompiler->printMessage (var_s_7169  COMMA_SOURCE_FILE ("piccolo_program.galgas", 159)) ;
              enumerator_7144.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), GALGAS_string ("The ").add_operation (var_deviceForRegistersDescription_6558, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), fixItArray20  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)) ;
        }
      }
    }
    GALGAS_string var_deviceForConfigDescription_7666 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.readProperty_value ()) ;
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsStrictSup, var_deviceForConfigDescription_7666.getter_length (SOURCE_FILE ("piccolo_program.galgas", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_string var_devicePath_7807 = GALGAS_string ("/").add_operation (var_deviceForConfigDescription_7666, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_7807, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_22) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_8050 ;
            {
            routine_parseDeviceDefinition (GALGAS_lstring::constructor_new (var_deviceForConfigDescription_7666, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)), var_piccoloDeviceModel_8050, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)) ;
            }
            inCompiler->printMessage (var_deviceForConfigDescription_7666.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (var_piccoloDeviceModel_8050.readProperty_mConfigRegisterMap ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 171)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GALGAS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171))  COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)) ;
            cEnumerator_configRegisterMap enumerator_8279 (var_piccoloDeviceModel_8050.readProperty_mConfigRegisterMap (), kENUMERATION_UP) ;
            while (enumerator_8279.hasCurrentObject ()) {
              GALGAS_string var_s_8347 = GALGAS_string ("REGISTER '").add_operation (enumerator_8279.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8279.current_mRegisterAddress (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8279.current_mRegisterWidth (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
              cEnumerator_illegalMaskList enumerator_8519 (enumerator_8279.current_mIllegalMaskList (HERE), kENUMERATION_UP) ;
              while (enumerator_8519.hasCurrentObject ()) {
                var_s_8347.plusAssign_operation(GALGAS_string ("  illegal value ").add_operation (enumerator_8519.current_mIllegalValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8519.current_mIllegalMask (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8519.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)) ;
                enumerator_8519.gotoNextObject () ;
              }
              cEnumerator_configRegisterMaskMap enumerator_8797 (enumerator_8279.current_mConfigRegisterMaskMap (HERE), kENUMERATION_UP) ;
              while (enumerator_8797.hasCurrentObject ()) {
                var_s_8347.plusAssign_operation(GALGAS_string ("  setting '").add_operation (enumerator_8797.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8797.current_mMaskValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8797.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
                cEnumerator_fieldSettingMap enumerator_9015 (enumerator_8797.current_mFieldSettingMap (HERE), kENUMERATION_UP) ;
                while (enumerator_9015.hasCurrentObject ()) {
                  var_s_8347.plusAssign_operation(GALGAS_string ("    value ").add_operation (enumerator_9015.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (enumerator_9015.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)) ;
                  enumerator_9015.gotoNextObject () ;
                }
                enumerator_8797.gotoNextObject () ;
              }
              inCompiler->printMessage (var_s_8347  COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)) ;
              enumerator_8279.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), GALGAS_string ("The ").add_operation (var_deviceForConfigDescription_7666, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), fixItArray23  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas", 197)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "piccolo") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_pic_31__38__5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

