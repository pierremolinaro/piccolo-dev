#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const GGS_lstring constinArgument_inDeviceName,
                                            GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  GGS_filewrapper var_fw_319 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GGS_string var_deviceFullName_368 = constinArgument_inDeviceName.readProperty_string ().add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_fw_319.getter_fileExistsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 18)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_definitionString_488 = var_fw_319.getter_textFileContentsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 19)) ;
      outArgument_outPiccoloDeviceModel.drop () ;
      cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString_488, var_deviceFullName_368, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 20)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("The '").add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)).add_operation (GGS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "piccolo",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .piccolo extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.1.10" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 7)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 8)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringlist var_allDevices_446 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 11)) ;
        GGS_stringlist var_pic_31__38__5F_devices_517 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_midrange_5F_devices_555 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_baseline_5F_devices_596 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        UpEnumerator_stringlist enumerator_656 (var_allDevices_446) ;
        while (enumerator_656.hasCurrentObject ()) {
          GGS_string var_name_700 = enumerator_656.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 17)).getter_deletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 17)) ;
          GGS_piccoloDeviceModel var_piccoloDeviceModel_849 ;
          {
          routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_name_700, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), inCompiler COMMA_HERE), var_piccoloDeviceModel_849, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)) ;
          }
          switch (var_piccoloDeviceModel_849.readProperty_mProcessorType ().enumValue ()) {
          case GGS_processorType::Enumeration::invalid:
            break ;
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
            {
              var_pic_31__38__5F_devices_517.addAssignOperation (var_name_700  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_midrange:
            {
              var_midrange_5F_devices_555.addAssignOperation (var_name_700  COMMA_SOURCE_FILE ("piccolo_program.galgas", 23)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_baseline:
            {
              var_baseline_5F_devices_596.addAssignOperation (var_name_700  COMMA_SOURCE_FILE ("piccolo_program.galgas", 31)) ;
            }
            break ;
          }
          enumerator_656.gotoNextObject () ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 35)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_print_3F_ (var_baseline_5F_devices_596.getter_count (SOURCE_FILE ("piccolo_program.galgas", 36)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GGS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)) ;
            }
            GGS_uint var_idx_1758 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_1777 (var_baseline_5F_devices_596) ;
            while (enumerator_1777.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_1777.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)) ;
              }
              var_idx_1758.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 40)) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, var_idx_1758.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  var_idx_1758 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 43)) ;
                  }
                }
              }
              enumerator_1777.gotoNextObject () ;
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_idx_1758.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 47)) ;
                }
              }
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 51)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            routine_print_3F_ (var_midrange_5F_devices_555.getter_count (SOURCE_FILE ("piccolo_program.galgas", 52)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GGS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)) ;
            }
            GGS_uint var_idx_2367 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2386 (var_midrange_5F_devices_555) ;
            while (enumerator_2386.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2386.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)) ;
              }
              var_idx_2367.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 56)) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_idx_2367.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  var_idx_2367 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 59)) ;
                  }
                }
              }
              enumerator_2386.gotoNextObject () ;
            }
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::notEqual, var_idx_2367.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 63)) ;
                }
              }
            }
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 67)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            routine_print_3F_ (var_pic_31__38__5F_devices_517.getter_count (SOURCE_FILE ("piccolo_program.galgas", 68)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GGS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)) ;
            }
            GGS_uint var_idx_2962 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2981 (var_pic_31__38__5F_devices_517) ;
            while (enumerator_2981.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2981.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)) ;
              }
              var_idx_2962.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 72)) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = GGS_bool (ComparisonKind::equal, var_idx_2962.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  var_idx_2962 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 75)) ;
                  }
                }
              }
              enumerator_2981.gotoNextObject () ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_idx_2962.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 79)) ;
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::greaterThan, GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()).getter_count (SOURCE_FILE ("piccolo_program.galgas", 85)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string var_dir_3429 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_dir_3429.getter_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 87)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 87)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            var_dir_3429.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 88)) ;
          }
        }
        GGS_filewrapper var_fw_3590 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
        GGS_stringlist var_allDevices_3645 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 91)) ;
        UpEnumerator_stringlist enumerator_3717 (var_allDevices_3645) ;
        while (enumerator_3717.hasCurrentObject ()) {
          GGS_string var_definitionString_3761 = var_fw_3590.getter_textFileContentsAtPath (enumerator_3717.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 93)) ;
          var_definitionString_3761.method_writeToFile (var_dir_3429.add_operation (enumerator_3717.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
          enumerator_3717.gotoNextObject () ;
        }
        {
        routine_print_3F_ (var_allDevices_3645.getter_count (SOURCE_FILE ("piccolo_program.galgas", 96)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GGS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (var_dir_3429, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)) ;
        }
      }
    }
    GGS_string var_deviceForMemoryDescription_4057 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.readProperty_value ()) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_deviceForMemoryDescription_4057.getter_count (SOURCE_FILE ("piccolo_program.galgas", 100)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_devicePath_4213 = GGS_string ("/").add_operation (var_deviceForMemoryDescription_4057, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_4213, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 102)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_4442 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForMemoryDescription_4057, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)), inCompiler COMMA_HERE), var_piccoloDeviceModel_4442, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)) ;
            }
            GGS_uint var_totalRam_4478 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_ramBankTable enumerator_4544 (var_piccoloDeviceModel_4442.readProperty_mRamBankTable ()) ;
            while (enumerator_4544.hasCurrentObject ()) {
              var_totalRam_4478 = var_totalRam_4478.add_operation (enumerator_4544.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)).substract_operation (enumerator_4544.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)) ;
              enumerator_4544.gotoNextObject () ;
            }
            {
            routine_print_3F_ (var_deviceForMemoryDescription_4057.add_operation (GGS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 108)) ;
            }
            {
            routine_print_3F_ (GGS_string ("  ").add_operation (var_piccoloDeviceModel_4442.readProperty_mRamBankTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 109)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GGS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (var_totalRam_4478.getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GGS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
            }
            UpEnumerator_ramBankTable enumerator_4912 (var_piccoloDeviceModel_4442.readProperty_mRamBankTable ()) ;
            while (enumerator_4912.hasCurrentObject ()) {
              {
              routine_print_3F_ (GGS_string ("    bank \"").add_operation (enumerator_4912.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GGS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4912.current_mFirstFreeAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4912.current_mLastAddressPlusOne (HERE).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4912.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4912.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)) ;
              }
              UpEnumerator_uintlist enumerator_5196 (enumerator_4912.current_mMirrorOffsetList (HERE)) ;
              const bool bool_14 = true ;
              if (enumerator_5196.hasCurrentObject () && bool_14) {
                {
                routine_print_3F_ (GGS_string (", mirror at "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 115)) ;
                }
                while (enumerator_5196.hasCurrentObject () && bool_14) {
                  {
                  routine_print_3F_ (enumerator_4912.current_mFirstFreeAddress (HERE).add_operation (enumerator_5196.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)) ;
                  }
                  enumerator_5196.gotoNextObject () ;
                  if (enumerator_5196.hasCurrentObject () && bool_14) {
                    {
                    routine_print_3F_ (GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
                    }
                  }
                }
              }
              {
              routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 119)) ;
              }
              enumerator_4912.gotoNextObject () ;
            }
            switch (var_piccoloDeviceModel_4442.readProperty_mProcessorType ().enumValue ()) {
            case GGS_processorType::Enumeration::invalid:
              break ;
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4442.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)).add_operation (GGS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_midrange:
              {
                GGS_uint var_pageCount_5608 = var_piccoloDeviceModel_4442.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)) ;
                GGS_string var_s_5689 = GGS_string::makeEmptyString () ;
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::greaterThan, var_pageCount_5608.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    var_s_5689 = GGS_string ("s") ;
                  }
                }
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4442.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GGS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (var_pageCount_5608.getter_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GGS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (var_s_5689, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_baseline:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4442.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)).add_operation (GGS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)) ;
                }
              }
              break ;
            }
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_piccoloDeviceModel_4442.readProperty_mEepromSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                {
                routine_print_3F_ (GGS_string ("  No EEPROM\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_16) {
              {
              routine_print_3F_ (GGS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel_4442.readProperty_mEepromSize ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GGS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (var_piccoloDeviceModel_4442.readProperty_mEepromAddress ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), GGS_string ("The ").add_operation (var_deviceForMemoryDescription_4057, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), fixItArray17  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)) ;
        }
      }
    }
    GGS_string var_deviceForRegistersDescription_6510 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.readProperty_value ()) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::greaterThan, var_deviceForRegistersDescription_6510.getter_count (SOURCE_FILE ("piccolo_program.galgas", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_string var_devicePath_6674 = GGS_string ("/").add_operation (var_deviceForRegistersDescription_6510, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)) ;
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_6674, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_6910 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForRegistersDescription_6510, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)), inCompiler COMMA_HERE), var_piccoloDeviceModel_6910, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)) ;
            }
            {
            routine_print_3F_ (var_deviceForRegistersDescription_6510.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (var_piccoloDeviceModel_6910.readProperty_mRegisterTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 151)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (GGS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)) ;
            }
            UpEnumerator_registerTable enumerator_7106 (var_piccoloDeviceModel_6910.readProperty_mRegisterTable ()) ;
            while (enumerator_7106.hasCurrentObject ()) {
              GGS_string var_s_7144 = GGS_string ("  '").add_operation (enumerator_7106.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
              UpEnumerator_uintlist enumerator_7213 (enumerator_7106.current (HERE).readProperty_mRegisterAddressList ()) ;
              while (enumerator_7213.hasCurrentObject ()) {
                var_s_7144.plusAssignOperation(enumerator_7213.current (HERE).readProperty_mValue ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)) ;
                enumerator_7213.gotoNextObject () ;
                if (enumerator_7213.hasCurrentObject ()) {
                  var_s_7144.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 156)) ;
                }
              }
              var_s_7144.plusAssignOperation(enumerator_7106.current (HERE).readProperty_mBitDefinitionString ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)) ;
              {
              routine_print_3F_ (var_s_7144, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 159)) ;
              }
              enumerator_7106.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), GGS_string ("The ").add_operation (var_deviceForRegistersDescription_6510, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), fixItArray20  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)) ;
        }
      }
    }
    GGS_string var_deviceForConfigDescription_7617 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.readProperty_value ()) ;
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterThan, var_deviceForConfigDescription_7617.getter_count (SOURCE_FILE ("piccolo_program.galgas", 167)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GGS_string var_devicePath_7773 = GGS_string ("/").add_operation (var_deviceForConfigDescription_7617, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_7773, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)).boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_8003 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForConfigDescription_7617, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)), inCompiler COMMA_HERE), var_piccoloDeviceModel_8003, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)) ;
            }
            {
            routine_print_3F_ (var_deviceForConfigDescription_7617.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (var_piccoloDeviceModel_8003.readProperty_mConfigRegisterMap ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 171)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GGS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)) ;
            }
            UpEnumerator_configRegisterMap enumerator_8235 (var_piccoloDeviceModel_8003.readProperty_mConfigRegisterMap ()) ;
            while (enumerator_8235.hasCurrentObject ()) {
              GGS_string var_s_8318 = GGS_string ("REGISTER '").add_operation (enumerator_8235.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8235.current_mRegisterAddress (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8235.current_mRegisterWidth (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
              UpEnumerator_illegalMaskList enumerator_8479 (enumerator_8235.current_mIllegalMaskList (HERE)) ;
              while (enumerator_8479.hasCurrentObject ()) {
                var_s_8318.plusAssignOperation(GGS_string ("  illegal value ").add_operation (enumerator_8479.current_mIllegalValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GGS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8479.current_mIllegalMask (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8479.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)) ;
                enumerator_8479.gotoNextObject () ;
              }
              UpEnumerator_configRegisterMaskMap enumerator_8746 (enumerator_8235.current_mConfigRegisterMaskMap (HERE)) ;
              while (enumerator_8746.hasCurrentObject ()) {
                var_s_8318.plusAssignOperation(GGS_string ("  setting '").add_operation (enumerator_8746.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GGS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8746.current_mMaskValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8746.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
                UpEnumerator_fieldSettingMap enumerator_8986 (enumerator_8746.current_mFieldSettingMap (HERE)) ;
                while (enumerator_8986.hasCurrentObject ()) {
                  var_s_8318.plusAssignOperation(GGS_string ("    value ").add_operation (enumerator_8986.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (enumerator_8986.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)) ;
                  enumerator_8986.gotoNextObject () ;
                }
                enumerator_8746.gotoNextObject () ;
              }
              {
              routine_print_3F_ (var_s_8318, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)) ;
              }
              enumerator_8235.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_22) {
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), GGS_string ("The ").add_operation (var_deviceForConfigDescription_7617, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), fixItArray23  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas", 197)) ;
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
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
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
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

