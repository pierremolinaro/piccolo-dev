#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const GALGAS_lstring constinArgument_inDeviceName,
                                            GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  GALGAS_filewrapper var_fw_319 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GALGAS_string var_deviceFullName_368 = constinArgument_inDeviceName.readProperty_string ().add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_fw_319.getter_fileExistsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 18)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_definitionString_488 = var_fw_319.getter_textFileContentsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 19)) ;
      outArgument_outPiccoloDeviceModel.drop () ;
      cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString_488, var_deviceFullName_368, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 20)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("The '").add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)).add_operation (GALGAS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "F_Analyze_CLI_Options.h"
#include "C_builtin_CLI_Options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
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
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 7)).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 8)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_stringlist var_allDevices_446 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 11)) ;
        GALGAS_stringlist var_pic_31__38__5F_devices_517 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("piccolo_program.galgas", 12)) ;
        GALGAS_stringlist var_midrange_5F_devices_564 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("piccolo_program.galgas", 13)) ;
        GALGAS_stringlist var_baseline_5F_devices_614 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("piccolo_program.galgas", 14)) ;
        cEnumerator_stringlist enumerator_683 (var_allDevices_446, kENUMERATION_UP) ;
        while (enumerator_683.hasCurrentObject ()) {
          GALGAS_string var_name_727 = enumerator_683.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 17)) ;
          GALGAS_piccoloDeviceModel var_piccoloDeviceModel_889 ;
          {
          routine_parseDeviceDefinition_3F__21_ (GALGAS_lstring::class_func_new (var_name_727, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)), var_piccoloDeviceModel_889, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 18)) ;
          }
          switch (var_piccoloDeviceModel_889.readProperty_mProcessorType ().enumValue ()) {
          case GALGAS_processorType::kNotBuilt:
            break ;
          case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
          case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
            {
              var_pic_31__38__5F_devices_517.addAssign_operation (var_name_727  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
            }
            break ;
          case GALGAS_processorType::kEnum_midrange:
            {
              var_midrange_5F_devices_564.addAssign_operation (var_name_727  COMMA_SOURCE_FILE ("piccolo_program.galgas", 23)) ;
            }
            break ;
          case GALGAS_processorType::kEnum_baseline:
            {
              var_baseline_5F_devices_614.addAssign_operation (var_name_727  COMMA_SOURCE_FILE ("piccolo_program.galgas", 31)) ;
            }
            break ;
          }
          enumerator_683.gotoNextObject () ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 35)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_print_3F_ (var_baseline_5F_devices_614.getter_count (SOURCE_FILE ("piccolo_program.galgas", 36)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 36)) ;
            }
            GALGAS_uint var_idx_1799 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_stringlist enumerator_1818 (var_baseline_5F_devices_614, kENUMERATION_UP) ;
            while (enumerator_1818.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_1818.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint (uint32_t (15U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 39)) ;
              }
              var_idx_1799.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 40)) ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsEqual, var_idx_1799.objectCompare (GALGAS_uint (uint32_t (5U)))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  var_idx_1799 = GALGAS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 43)) ;
                  }
                }
              }
              enumerator_1818.gotoNextObject () ;
            }
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsNotEqual, var_idx_1799.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 47)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 51)).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_print_3F_ (var_midrange_5F_devices_564.getter_count (SOURCE_FILE ("piccolo_program.galgas", 52)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 52)) ;
            }
            GALGAS_uint var_idx_2409 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_stringlist enumerator_2428 (var_midrange_5F_devices_564, kENUMERATION_UP) ;
            while (enumerator_2428.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2428.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint (uint32_t (15U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 55)) ;
              }
              var_idx_2409.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 56)) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, var_idx_2409.objectCompare (GALGAS_uint (uint32_t (5U)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  var_idx_2409 = GALGAS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 59)) ;
                  }
                }
              }
              enumerator_2428.gotoNextObject () ;
            }
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsNotEqual, var_idx_2409.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                {
                routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 63)) ;
                }
              }
            }
          }
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GALGAS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 67)).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            routine_print_3F_ (var_pic_31__38__5F_devices_517.getter_count (SOURCE_FILE ("piccolo_program.galgas", 68)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 68)) ;
            }
            GALGAS_uint var_idx_3005 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_stringlist enumerator_3024 (var_pic_31__38__5F_devices_517, kENUMERATION_UP) ;
            while (enumerator_3024.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_3024.current_mValue (HERE).getter_stringByRightPadding (GALGAS_uint (uint32_t (15U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 71)) ;
              }
              var_idx_3005.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 72)) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, var_idx_3005.objectCompare (GALGAS_uint (uint32_t (5U)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_idx_3005 = GALGAS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 75)) ;
                  }
                }
              }
              enumerator_3024.gotoNextObject () ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsNotEqual, var_idx_3005.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                {
                routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 79)) ;
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()).getter_count (SOURCE_FILE ("piccolo_program.galgas", 85)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_dir_3473 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()) ;
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = var_dir_3473.getter_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 87)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 87)).boolEnum () ;
          if (kBoolTrue == test_11) {
            var_dir_3473.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 88)) ;
          }
        }
        GALGAS_filewrapper var_fw_3634 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
        GALGAS_stringlist var_allDevices_3689 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePathes (SOURCE_FILE ("piccolo_program.galgas", 91)) ;
        cEnumerator_stringlist enumerator_3761 (var_allDevices_3689, kENUMERATION_UP) ;
        while (enumerator_3761.hasCurrentObject ()) {
          GALGAS_string var_definitionString_3805 = var_fw_3634.getter_textFileContentsAtPath (enumerator_3761.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 93)) ;
          var_definitionString_3805.method_writeToFile (var_dir_3473.add_operation (enumerator_3761.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
          enumerator_3761.gotoNextObject () ;
        }
        {
        routine_print_3F_ (var_allDevices_3689.getter_count (SOURCE_FILE ("piccolo_program.galgas", 96)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (var_dir_3473, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)).add_operation (GALGAS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 96)) ;
        }
      }
    }
    GALGAS_string var_deviceForMemoryDescription_4102 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.readProperty_value ()) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsStrictSup, var_deviceForMemoryDescription_4102.getter_count (SOURCE_FILE ("piccolo_program.galgas", 100)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_devicePath_4259 = GALGAS_string ("/").add_operation (var_deviceForMemoryDescription_4102, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_4259, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 102)).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_4493 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GALGAS_lstring::class_func_new (var_deviceForMemoryDescription_4102, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)), var_piccoloDeviceModel_4493, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 103)) ;
            }
            GALGAS_uint var_totalRam_4529 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_ramBankTable enumerator_4595 (var_piccoloDeviceModel_4493.readProperty_mRamBankTable (), kENUMERATION_UP) ;
            while (enumerator_4595.hasCurrentObject ()) {
              var_totalRam_4529 = var_totalRam_4529.add_operation (enumerator_4595.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)).substract_operation (enumerator_4595.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)) ;
              enumerator_4595.gotoNextObject () ;
            }
            {
            routine_print_3F_ (var_deviceForMemoryDescription_4102.add_operation (GALGAS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 108)) ;
            }
            {
            routine_print_3F_ (GALGAS_string ("  ").add_operation (var_piccoloDeviceModel_4493.readProperty_mRamBankTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 109)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GALGAS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (var_totalRam_4529.getter_string (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GALGAS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
            }
            cEnumerator_ramBankTable enumerator_4963 (var_piccoloDeviceModel_4493.readProperty_mRamBankTable (), kENUMERATION_UP) ;
            while (enumerator_4963.hasCurrentObject ()) {
              {
              routine_print_3F_ (GALGAS_string ("    bank \"").add_operation (enumerator_4963.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GALGAS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4963.current_mFirstFreeAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (enumerator_4963.current_mLastAddressPlusOne (HERE).substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 112)).add_operation (enumerator_4963.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4963.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)) ;
              }
              cEnumerator_uintlist enumerator_5247 (enumerator_4963.current_mMirrorOffsetList (HERE), kENUMERATION_UP) ;
              const bool bool_14 = true ;
              if (enumerator_5247.hasCurrentObject () && bool_14) {
                {
                routine_print_3F_ (GALGAS_string (", mirror at "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 115)) ;
                }
                while (enumerator_5247.hasCurrentObject () && bool_14) {
                  {
                  routine_print_3F_ (enumerator_4963.current_mFirstFreeAddress (HERE).add_operation (enumerator_5247.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 116)) ;
                  }
                  enumerator_5247.gotoNextObject () ;
                  if (enumerator_5247.hasCurrentObject () && bool_14) {
                    {
                    routine_print_3F_ (GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
                    }
                  }
                }
              }
              {
              routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 119)) ;
              }
              enumerator_4963.gotoNextObject () ;
            }
            switch (var_piccoloDeviceModel_4493.readProperty_mProcessorType ().enumValue ()) {
            case GALGAS_processorType::kNotBuilt:
              break ;
            case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
            case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
              {
                {
                routine_print_3F_ (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4493.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)).add_operation (GALGAS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)) ;
                }
              }
              break ;
            case GALGAS_processorType::kEnum_midrange:
              {
                GALGAS_uint var_pageCount_5659 = var_piccoloDeviceModel_4493.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)).divide_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 125)) ;
                GALGAS_string var_s_5740 = GALGAS_string::makeEmptyString () ;
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsStrictSup, var_pageCount_5659.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    var_s_5740 = GALGAS_string ("s") ;
                  }
                }
                {
                routine_print_3F_ (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4493.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GALGAS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (var_pageCount_5659.getter_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)).add_operation (GALGAS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (var_s_5740, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 130)) ;
                }
              }
              break ;
            case GALGAS_processorType::kEnum_baseline:
              {
                {
                routine_print_3F_ (GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4493.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)).add_operation (GALGAS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 133)) ;
                }
              }
              break ;
            }
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsEqual, var_piccoloDeviceModel_4493.readProperty_mEepromSize ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_16) {
                {
                routine_print_3F_ (GALGAS_string ("  No EEPROM\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)) ;
                }
              }
            }
            if (kBoolFalse == test_16) {
              {
              routine_print_3F_ (GALGAS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel_4493.readProperty_mEepromSize ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GALGAS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (var_piccoloDeviceModel_4493.readProperty_mEepromAddress ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 138)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_13) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), GALGAS_string ("The ").add_operation (var_deviceForMemoryDescription_4102, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)), fixItArray17  COMMA_SOURCE_FILE ("piccolo_program.galgas", 142)) ;
        }
      }
    }
    GALGAS_string var_deviceForRegistersDescription_6561 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.readProperty_value ()) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsStrictSup, var_deviceForRegistersDescription_6561.getter_count (SOURCE_FILE ("piccolo_program.galgas", 147)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_devicePath_6726 = GALGAS_string ("/").add_operation (var_deviceForRegistersDescription_6561, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_6726, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).boolEnum () ;
          if (kBoolTrue == test_19) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_6967 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GALGAS_lstring::class_func_new (var_deviceForRegistersDescription_6561, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)), var_piccoloDeviceModel_6967, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 150)) ;
            }
            {
            routine_print_3F_ (var_deviceForRegistersDescription_6561.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (var_piccoloDeviceModel_6967.readProperty_mRegisterTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 151)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (GALGAS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)) ;
            }
            cEnumerator_registerTable enumerator_7163 (var_piccoloDeviceModel_6967.readProperty_mRegisterTable (), kENUMERATION_UP) ;
            while (enumerator_7163.hasCurrentObject ()) {
              GALGAS_string var_s_7201 = GALGAS_string ("  '").add_operation (enumerator_7163.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
              cEnumerator_uintlist enumerator_7270 (enumerator_7163.current (HERE).readProperty_mRegisterAddressList (), kENUMERATION_UP) ;
              while (enumerator_7270.hasCurrentObject ()) {
                var_s_7201.plusAssign_operation(enumerator_7270.current (HERE).readProperty_mValue ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 155)) ;
                if (enumerator_7270.hasNextObject ()) {
                  var_s_7201.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 156)) ;
                }
                enumerator_7270.gotoNextObject () ;
              }
              var_s_7201.plusAssign_operation(enumerator_7163.current (HERE).readProperty_mBitDefinitionString ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 158)) ;
              {
              routine_print_3F_ (var_s_7201, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 159)) ;
              }
              enumerator_7163.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_19) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), GALGAS_string ("The ").add_operation (var_deviceForRegistersDescription_6561, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)), fixItArray20  COMMA_SOURCE_FILE ("piccolo_program.galgas", 162)) ;
        }
      }
    }
    GALGAS_string var_deviceForConfigDescription_7674 = GALGAS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.readProperty_value ()) ;
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (kIsStrictSup, var_deviceForConfigDescription_7674.getter_count (SOURCE_FILE ("piccolo_program.galgas", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_string var_devicePath_7831 = GALGAS_string ("/").add_operation (var_deviceForConfigDescription_7674, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)).add_operation (GALGAS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GALGAS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_7831, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_22) {
            GALGAS_piccoloDeviceModel var_piccoloDeviceModel_8066 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GALGAS_lstring::class_func_new (var_deviceForConfigDescription_7674, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)), var_piccoloDeviceModel_8066, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 170)) ;
            }
            {
            routine_print_3F_ (var_deviceForConfigDescription_7674.add_operation (GALGAS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (var_piccoloDeviceModel_8066.readProperty_mConfigRegisterMap ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 171)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GALGAS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)) ;
            }
            cEnumerator_configRegisterMap enumerator_8298 (var_piccoloDeviceModel_8066.readProperty_mConfigRegisterMap (), kENUMERATION_UP) ;
            while (enumerator_8298.hasCurrentObject ()) {
              GALGAS_string var_s_8381 = GALGAS_string ("REGISTER '").add_operation (enumerator_8298.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8298.current_mRegisterAddress (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8298.current_mRegisterWidth (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
              cEnumerator_illegalMaskList enumerator_8542 (enumerator_8298.current_mIllegalMaskList (HERE), kENUMERATION_UP) ;
              while (enumerator_8542.hasCurrentObject ()) {
                var_s_8381.plusAssign_operation(GALGAS_string ("  illegal value ").add_operation (enumerator_8542.current_mIllegalValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8542.current_mIllegalMask (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (enumerator_8542.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 175)) ;
                enumerator_8542.gotoNextObject () ;
              }
              cEnumerator_configRegisterMaskMap enumerator_8809 (enumerator_8298.current_mConfigRegisterMaskMap (HERE), kENUMERATION_UP) ;
              while (enumerator_8809.hasCurrentObject ()) {
                var_s_8381.plusAssign_operation(GALGAS_string ("  setting '").add_operation (enumerator_8809.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8809.current_mMaskValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_8809.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
                cEnumerator_fieldSettingMap enumerator_9049 (enumerator_8809.current_mFieldSettingMap (HERE), kENUMERATION_UP) ;
                while (enumerator_9049.hasCurrentObject ()) {
                  var_s_8381.plusAssign_operation(GALGAS_string ("    value ").add_operation (enumerator_9049.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GALGAS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (enumerator_9049.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 180)) ;
                  enumerator_9049.gotoNextObject () ;
                }
                enumerator_8809.gotoNextObject () ;
              }
              {
              routine_print_3F_ (var_s_8381, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 183)) ;
              }
              enumerator_8298.gotoNextObject () ;
            }
          }
        }
        if (kBoolFalse == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), GALGAS_string ("The ").add_operation (var_deviceForConfigDescription_7674, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)).add_operation (GALGAS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)), fixItArray23  COMMA_SOURCE_FILE ("piccolo_program.galgas", 186)) ;
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

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
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
  F_Analyze_CLI_Options (inArgc, inArgv,
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

